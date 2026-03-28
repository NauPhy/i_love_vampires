#include "AttackActor.h"
#include "Definitions.h"
#include "Combatant.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "Engine/World.h"

void AAttackActor::initialise_AAttackActor(const AttackInitStruct& temp) {
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
	AAttackActor* newAttack = nullptr;
	if (!unrealHelpers::spawnActorOnTopOfMeDeferred<AAttackActor>(_owner.Get(), newAttack)){
		LOGERROR("AAttackFactory::launchAttack - failed to create attack");
		return;
	}
	{
		AttackInitStruct temp = getAttackInit();
		newAttack->initialise_AAttackActor(temp);
	}
	unrealHelpers::finishDeferredSpawn<AAttackActor>(_owner.Get(), newAttack);
}

AttackFactory::AttackFactory(
	ACombatant* owner,
	const UAttackConfig* config,
	const UAttackAttributeData* data) :
	BaseAttributeSet(),
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

//AttackFactory::AttackFactory() {
//	LOGERROR("AttackFactory::AttackFactory - default constructor should not be used");
//}
//
//AttackAttributes::AttackAttributes() {
//	LOGERROR("AttackAttributes::AttackAttributes - default constructor should not be used");
//}

//template stuff
//AttackFactory::AttackFactory(const AttackFactory& other) : 
//	//shallow copy
//	_attackConfig(other._attackConfig), 
//	//normal copy (not ptr)
//	_attackAttributes(other._attackAttributes),
//	//shallow copy
//	_owner(other._owner) {}

//AttackAttributes& AttackAttributes::operator=(const AttackAttributes& other) {
//	if (this != &other) {
//		BaseAttributes::operator=(other);
//		_damage = other._damage;
//		_critChance = other._critChance;
//		_critMultiplier = other._critMultiplier;
//	}
//	return *this;
//}

//AttackAttributes& AttackAttributes::operator=(AttackAttributes&& other) {
//	if (this != &other) {
//		BaseAttributes::operator=(std::move(other));
//		_damage = std::move(other._damage);
//		_critChance = std::move(other._critChance);
//		_critMultiplier = std::move(other._critMultiplier);
//	}
//	return *this;
//}
///////////////////////////////////////////////////////////////////////////////

AttackFactory::AttackFactory(AttackFactory&& other) :
	BaseAttributeSet(std::move(other)),
	_attackConfig(other._attackConfig),
	_attackAttributes(std::move(other._attackAttributes)),
	_owner(other._owner)
{
}
//AttackFactory& AttackFactory::operator=(AttackFactory&& other) {
//	if (this != &other) {
//		BaseAttributeSet::operator=(std::move(other));
//		_attackConfig = other._attackConfig;
//		_attackAttributes = std::move(other._attackAttributes);
//		_owner = other._owner;
//		other._attackConfig = nullptr;
//		other._owner = nullptr;
//	}
//	return *this;
//}
//
