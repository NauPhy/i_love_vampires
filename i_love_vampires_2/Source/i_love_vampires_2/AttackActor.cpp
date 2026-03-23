#include "AttackActor.h"
#include "Definitions.h"
#include "Combatant.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "Engine/World.h"

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

void AAttackActor::initialise_AAttackActor(APawn* pawnRef, UAttackConfig* config, const AttackAttributes& attributes) {
	if (!IsValid(config)) {
		LOGERROR("AAttackActor::initialise_AAttackActor - parameter not valid");
		return;
	}
	_attackConfig = TObjectPtr<const UAttackConfig>(config);
	_attackAttributes = std::make_unique<AttackAttributes>(attributes);
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
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
		float damage = _attackAttributes->_damage;
		float critChance = _attackAttributes->_critChance;
		if (FMath::FRand() < critChance) {
			damage *= _attackAttributes->_critMultiplier;
		}
		FEffectStruct temp = FEffectStruct(_DAMAGE, damage, 0, 1);
		target->inflictStatus(temp);
	}
	// Chance is included in the newly created effect, just in case
	for (const auto& effect : _attackConfig->_statusEffects) {
		if (FMath::FRand() <= tempStruct._chance) {
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

void AttackAttributes::modifyAttributes(const CombatantAttributes& modifiers) {
	_critChance += modifiers._critChance;
	_critMultiplier += modifiers._critMultiplier;
}
///////////////////////////////////////////////////////////////////////////////

void AttackFactory::launchAttack(const FVector& forward) {
	AAttackActor* newAttack = unrealHelpers::spawnActorOnTopOfMe<AAttackActor>(_owner.Get());
	if (!IsValid(newAttack)) {
		LOGERROR("AAttackFactory::launchAttack - failed to create attack");
		return;
	}
	initAttack(newAttack);
}

void AAttackFactory::initAttack(AAttackActor* attack) {
	if (!IsValid(attack)) {
		LOGERROR("AAttackFactory::initAttack - variable is not valid");
		return;
	}
	AttackAttributes temp = _attackAttributes.getCore();
	temp.discretizeFull();
	// This creates an unnecessary copy but imma roll with it
	attack->initialise_AAttackActor(_pawnRef.Get(), _attackConfig.Get(), temp);
}
