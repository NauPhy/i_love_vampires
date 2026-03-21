#include "AttackActor.h"
#include "Definitions.h"
#include <type_traits>
#include "Combatant.h"
#include "StatusFactory.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "StatusEffect_Damage.h"

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
	if (!IsValid(config) || !IsValid(attributes) || !IsValid(pawnRef)) {
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
	if (!IsValid(target)) {
		LOGERROR("AAttackActor::applyEffect - target is not valid");
		return;
	}
	if (_pawnRef.IsValid())
		if (target == _pawnRef.Get())
			return;
	for (auto i = _effectedPawns.Num() - 1; i > -1; i--)
	{
		APawn* tempPawn = _effectedPawns[i].Get();
		if (!IsValid(tempPawn))
		{
			_effectedPawns.RemoveAt(i);
		}
		else if (tempPawn == target)
		{
			return;
		}
	}
	// Damage is (for some reason) separate from the other status effects
	// For now let's say only base damage can crit (will change later)
	{
		if (!IsValid(_attackAttributes)) {
			LOGERROR("AAttackActor::applyEffect - _attackAttributes is not valid");
			return;
		}
		float damage = _attackAttributes->_damage;
		float critChance = _attackAttributes->_critChance;
		if (FMath::FRand() < critChance) {
			damage *= _attackAttributes->_critMultiplier;
		}
		UStatusEffect_Damage* temp = NewObject<UStatusEffect_Damage>(this);
		if (!IsValid(temp)) {
			LOGERROR("AAttackActor::applyEffect - failed to create damage status effect");
			return;
		}
		temp->initialise_UStatusEffect_Damage(damage);
		target->inflictStatus(temp);
	}
	if (!IsValid(_attackConfig)) {
		LOGERROR("AAttackActor::applyEffect - _attackConfig is not valid");
		return;
	}
	// Chance is included in the newly created effect, just in case
	for (const FEffectStruct& tempStruct : _attackConfig->_statusEffects) {
		if (FMath::FRand() <= tempStruct._chance) {

			target->inflictStatus(StatusFactory::createStatusEffect(tempStruct));
		}
	}
	{
		APawn* temp = Cast<APawn>(target);
		if (!IsValid(temp)) {
			LOGERROR("AAttackActor::applyEffect - target is not a pawn");
			return;
		}
		_effectedPawns.Add(TWeakObjectPtr<APawn>(temp));
	}
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
	if (!IsValid(modifiers) || !IsValid(baseAttributes) || !IsValid(finalAttributes)) {
		LOGERROR("UAttackAttributes::modifyAttributes - invalid parameter");
		return;
	}
	finalAttributes->_critChance = baseAttributes->_critChance + modifiers->_critChance;
	finalAttributes->_critMultiplier = baseAttributes->_critMultiplier + modifiers->_critMultiplier;
}

///////////////////////////////////////////////////////////////////////////////

void UAttackComponent::modifyAttributes(ABaseAttributeSet* set) {
	if (!IsValid(set)) {
		LOGERROR("UAttackComponent::modifyAttributes - set is not valid");
		return;
	}
	UCombatantAttributes* attr = nullptr;
	if (!set->getModifiers<UCombatantAttributes>(attr))
		return;
	if (!IsValid(_base) || !IsValid(_final)) {
		LOGERROR("UAttackComponent::modifyAttributes - base or final not valid");
		return;
	}
	UAttackAttributes* base = Cast<UAttackAttributes>(_base);
	UAttackAttributes* final = Cast<UAttackAttributes>(_final);
	UAttackAttributes::modifyAttributes(attr, base, final);
}
///////////////////////////////////////////////////////////////////////////////

void AAttackFactory::initialise_AAttackFactory(APawn* pawnRef, UCombatantAttributes* comb, const UAttackConfig* config, const UAttackAttributes* attributes) {
	if (!IsValid(pawnRef) || !IsValid(comb) || !IsValid(config) || !IsValid(attributes)) {
		LOGERROR("AAttackFactory::initialise_AAttackFactory - invalid parameter");
		return;
	}
	initialise_ABaseAttributeSet(pawnRef, comb);
	_attackConfig = DuplicateObject<UAttackConfig>(config, this);
	_attackComponent = NewObject<UAttackComponent>(this);
	if (!IsValid(_attackComponent)) {
		LOGERROR("AAttackFactory::initialise_AAttackFactory - failed to create attack component");
		return;
	}
	_attackComponent->initialise_UAttackComponent(attributes);
}

// This could just as easily (maybe even slightly more easily) be done with TSubclassOf<AAttackActor> in either AAttackFactory or UAttackConfig,
// but I'm more used to inheritance and this shit is really complicated.
void AAttackFactory::launchAttack(const FVector& forward) {
	if (!_owner.IsValid()) {
		return;
	}
	AAttackActor* newAttack = unrealHelpers::spawnActorOnTopOfMe<AAttackActor>(_owner.Get());
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
	if (!_owner.IsValid())
		return;
	UAttackAttributes* disc = _attackComponent->getDiscretizedFinal<UAttackAttributes>(this);
	APawn* pawnRef = Cast<APawn>(_owner.Get());
	// This creates an unnecessary copy but imma roll with it
	attack->initialise_AAttackActor(pawnRef, _attackConfig, _attackComponent->getDiscretizedFinal<UAttackAttributes>(this));
}
	


///////////////////////////////////////////////////////////////////////////////
AAttackFactory* UAttackFactoryTemplate::createFactory(APawn* pawnRef, UCombatantAttributes* combatant) const {
	if (!IsValid(pawnRef) || !IsValid(combatant)){
		LOGERROR("UAttackFactoryTemplate::createFactory - invalid parameter");
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