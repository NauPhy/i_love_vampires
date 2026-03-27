#include "AttackActor.h"
#include "Definitions.h"
#include "Combatant.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "Engine/World.h"

void AAttackActor::initialise_AAttackActor(AttackInitStruct& temp) {
	initialise_AAttackActor(temp._pawnRef, temp._attackConfig, temp._attackAttributes);
}

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

void AAttackActor::Tick(float delta) {}

void AAttackActor::initialise_AAttackActor(ACombatant* pawnRef, const UAttackConfig* config, const AttackAttributes& attributes) {
	if (!IsValid(config)) {
		LOGERROR("AAttackActor::initialise_AAttackActor - parameter not valid");
		return;
	}
	_attackConfig = TObjectPtr<const UAttackConfig>(config);
	_attackAttributes = std::make_unique<AttackAttributes>(attributes);
	_pawnRef = TWeakObjectPtr<ACombatant>(pawnRef);
}

void AAttackActor::BeginPlay() {
	Super::BeginPlay();
	if (!IsValid(_attackConfig) || _attackAttributes.get() == nullptr) {
		LOGERROR("AAttackActor::BeginPlay - _attackConfig is not valid");
		return;
	}
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
		float damage = _attackAttributes->_damage.getFinal();
		float critChance = _attackAttributes->_critChance.getFinal();
		if (FMath::FRand() < critChance) {
			damage *= _attackAttributes->_critMultiplier.getFinal();
		}
		FEffectStruct temp = FEffectStruct(_DAMAGE, damage, 0, 1);
		target->inflictStatus(temp);
	}
	// Chance is included in the newly created effect, just in case
	for (const auto& effect : _attackConfig->_statusEffects) {
		if (FMath::FRand() <= effect._chance) {
			FEffectStruct temp = effect;
			temp._chance = 1;
			target->inflictStatus(temp);
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
///////////////////////////////////////////////////////////////////////////////

void AttackAttributes::modifyAttributes(const CombatantAttributes* modifiers) {
	_critChance.modify(_critChance._base + modifiers->_critChance.getFinal());
	_critMultiplier.modify(_critMultiplier._base + modifiers->_critMultiplier.getFinal());
}
///////////////////////////////////////////////////////////////////////////////

void AttackFactory::launchAttack(const FVector& forward) {
	AAttackActor* newAttack = unrealHelpers::spawnActorOnTopOfMe<AAttackActor>(_owner.Get());
	if (!IsValid(newAttack)) {
		LOGERROR("AAttackFactory::launchAttack - failed to create attack");
		return;
	}
	{
		AttackInitStruct temp = getAttackInit();
		newAttack->initialise_AAttackActor(temp);
	}
}

AttackFactory::AttackFactory(
	ACombatant* owner,
	const UAttackConfig* config,
	const UAttackAttributeData* data) :
	_owner(owner),
	_attackConfig(config),
	_attackAttributes(owner, data)
{
	if (!IsValid(owner) || !IsValid(_attackConfig.Get())) {
		LOGERROR("AttackFactory::AttackFactory - invalid parameters");
		return;
	}
}

void AttackFactory::tick(float delta) {
	const CombatantAttributes& temp = _owner->getAttributes();
	_attackAttributes.tick(delta, getStatusEffects(), &temp);
	BaseAttributeSet::tick(delta);
}

AttackFactory::AttackFactory() {
	LOGERROR("AttackFactory::AttackFactory - default constructor should not be used");
}