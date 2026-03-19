#include "AttackActor.h"
#include "Definitions.h"
#include <type_traits>
#include "Combatant.h"
#include "StatusFactory.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"

AAttackActor::AAttackActor() {
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	}
	PrimaryActorTick.bCanEverTick = true;
	if (!unrealHelpers::constructFlipbook(this, RootComponent, _flipbook))
		return;
	_flipbook->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	_flipbook->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	_flipbook->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
}

void AAttackFactory::shouldNotRunError() const {
	LOGERROR("UAttackFactory::shouldNotRunError - this should not run");
}

void AAttackActor::Tick(float delta) {}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef, const UAttackConfig* config, const UAttackAttributes* attributes) {
	if (!IsValid(config) || !IsValid(attributes) || !IsValid(pawnRef) || !IsValid(comb)) {
		LOGERROR("AAttackActor::initialise_AAttackActor - invalid parameter");
		return;
	}
	_attackConfig = DuplicateObject<UAttackConfig>(config, this);
	_attackAttributes = DuplicateObject<UAttackAttributes>(attributes, this);
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
	if (!unrealHelpers::initFlipbook(this, _attackConfig->_sprite, _flipbook))
		return;
}

void AAttackActor::applyEffect(ACombatant* target) {
	if (_pawnRef.IsValid())
		if (target == _pawnRef.Get())
			return;
	for (auto i = _effectedPawns.Num() - 1; i > -1; i--)
	{
		APawn* tempPawn = _effectedPawns[i].Get();
		if (tempPawn == nullptr)
		{
			_effectedPawns.RemoveAt(i);
		}
		else if (tempPawn == target)
		{
			return;
		}
	}
	// Chance is included in the newly created effect, just in case
	for (const FEffectStruct& tempStruct : _attackConfig->_statusEffects) {
		if (FMath::FRand() <= tempStruct._chance) {

			target->inflictStatus(StatusFactory::createStatusEffect(tempStruct));
		}
	}
	_effectedPawns.Add(TWeakObjectPtr<APawn>(Cast<APawn>(target)));
}

void AAttackActor::factoryInitQuery(AAttackFactory* factory) {
	if (!IsValid(factory)) {
		LOGERROR("AAttackActor::factoryInitQuery - not valid");
		return;
	}
	factory->initAttack(this);
}
///////////////////////////////////////////////////////////////////////////////

void UAttackAttributes::modifyAttributes(const UCombatantAttributes* modifiers, const UAttackAttributes* baseAttributes, UAttackAttributes* finalAttributes) {
	finalAttributes->_critChance = baseAttributes->_critChance + modifiers->_critChance;
	finalAttributes->_critMultiplier = baseAttributes->_critMultiplier + modifiers->_critMultiplier;
}
///////////////////////////////////////////////////////////////////////////////

void AAttackFactory::initialise_AAttackFactory(APawn* pawnRef, UCombatantAttributes* comb, const UAttackConfig* config, const UAttackAttributes* attributes) {
	initialise_ABaseAttributeSet(pawnRef);
	_attackConfig = DuplicateObject<UAttackConfig>(config, this);
	_attackComponent = NewObject<UAttackComponent>(this);
	_attackComponent->initialise_UAttackComponent(attributes);
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
	_combatantAttributes = TWeakObjectPtr<UCombatantAttributes>(comb);
}

// This could just as easily (maybe even slightly more easily) be done with TSubclassOf<AAttackActor> in either AAttackFactory or UAttackConfig,
// but I'm more used to inheritance and this shit is really complicated.
void AAttackFactory::launchAttack(const FVector& forward) {
	if (!_pawnRef.IsValid()) {
		return;
	}
	AAttackActor* newAttack = unrealHelpers::spawnActorOnTopOfMe<AAttackActor>(_pawnRef.Get());
	if (!IsValid(newAttack)) {
		LOGERROR("AAttackFactory::launchAttack - failed to create attack");
		return;
	}
	newAttack->factoryInitQuery(this);
}

void AAttackFactory::initAttack(AAttackActor* attack) {
	if (!IsValid(attack) ||
		!IsValid(_attackComponent)
		) {
		LOGERROR("AAttackFactory::initAttack - variable is not valid");
		return;
	}
	UAttackAttributes* disc = _attackComponent->getDiscretizedFinal<UAttackAttributes>(this);
	UAttackAttributes::modifyAttributes(_combatantAttributes, )
	// This creates an unnecessary copy but imma roll with it
	attack->initialise_AAttackActor(_pawnRef.Get(), _attackConfig, _attackComponent->getDiscretizedFinal<UAttackAttributes>(this));
}
	


///////////////////////////////////////////////////////////////////////////////
AAttackFactory* UAttackFactoryTemplate::createFactory(APawn* pawnRef, UCombatantAttributes* combatant) const {
	if (!IsValid(pawnRef)){
		LOGERROR("UAttackFactoryTemplate::createFactory - invalid pawnRef");
		return nullptr;
	}
	AAttackFactory* factory = unrealHelpers::spawnActorOnTopOfMe<AAttackFactory>(pawnRef);
	if (!IsValid(factory)) {
		LOGERROR("UAttackFactoryTemplate::createFactory - failed to spawn factory");
		return nullptr;
	}
	factory->initialise_AAttackFactory(pawnRef, combatant, _attackConfig, _attackAttributes);
	return factory;
}