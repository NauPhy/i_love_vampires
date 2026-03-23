#include "Combatant.h"
//#include <functional>
#include "MyGameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "Active.h"
#include "StatusEffect.h"
#include "SpriteManager.h"
#include "AssetRefs.h"
#include "Definitions.h"
#include "StatusEffect_Damage.h"
#include "Engine/AssetManager.h"
#include "StatusFactory.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"


ACombatant::ACombatant()
{
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	}
	PrimaryActorTick.bCanEverTick = true;
	unrealHelpers::constructFlipbook(this, RootComponent, _combatantFlipbook);
	_combatantFlipbook->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	_combatantFlipbook->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
}

void ACombatant::initialise_ACombatant(const UCombatantTemplate* temp) {
	if (!IsValid(temp) || !IsValid(temp->_config) || !IsValid(temp->_attributeData)) {
		LOGERROR("ACombatant::initialise_ACombatant - parameter not valid");
		return;
	}
	_config = TObjectPtr<const UCombatantTemplate>(temp);
	_attributeSet = std::make_unique<CombatantAttributeSet>(temp->_attributeData);
}

void ACombatant::BeginPlay() {
	Super::BeginPlay();
	if (!_config.IsValid() || _attributeSet.get() == nullptr) {
		LOGERROR("ACombatant::BeginPlay - _config or _attributeSet not valid");
		return;
	}
	for (const auto& data : _config->_startingWeapons) {
		_activeAbilities.push_back(Active(this, data));
	}
	unrealHelpers::initFlipbook(this, _config->_sprite, _combatantFlipbook);
	_myForwardVector = GetActorForwardVector();
}

void ACombatant::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}
void ACombatant::onCurrentHPChanged(float oldVal, float newVal)
{
	if (newVal <= 0.0f) {
		Destroy();
	}
}
void ACombatant::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	float oldHP = _attributeSet->getMember(&CombatantAttributes::_currentHP);
	_attributeSet->tick(DeltaTime);
	float newHP = _attributeSet->getMember(&CombatantAttributes::_currentHP);
	if (!nearEq(oldHP, newHP)) {
		onCurrentHPChanged(oldHP, newHP);
	})
	for (auto& active : _activeAbilities) {
		active->tick(DeltaTime, _attributeSet->getAttributeWrapper().getCore(), _myForwardVector);
	}
	FVector currentScale = GetActorScale3D();
	SetActorScale3D(currentScale * _attributeSet->getMember(&CombatantAttributes::_selfSize);

void ACombatant::lookAtDirection(float X, float Z) {
	const FRotator rotation = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), FVector(X, 0, Z));
	_myForwardVector = rotation.RotateVector(FVector(1, 0, 0));
	for (auto& tempActive : _activeAbilities) {
		tempActive->setForwardVector(_myForwardVector);
	}
}

void ACombatant::exchangeContactDamage(ACombatant* left, ACombatant* right) {
	if (!IsValid(left) || !IsValid(right)) {
		LOGERROR("ACombatant::exchangeContactDamage - parameter not valid");
		return;
	}
	const float leftThreat = left->_attributeSet->getMember(&CombatantAttributes::_contactDamage);
	const float rightThreat = right->_attributeSet->getMember(&CombatantAttributes::_contactDamage);
	FEffectStruct leftEffect = FEffectStruct(EStatusEffect::Damage, leftThreat, 0, 1);
	FEffectStruct rightEffect = FEffectStruct(EStatusEffect::Damage, rightThreat, 0, 1);
	left->inflictStatus(rightEffect);
	right->inflictStatus(leftEffect);
}
///////////////////////////////////////////////////////////////////////////////

CombatantAttributes::CombatantAttributes(const UCombatantAttributeData* attr) :
	_maxHP(attr->_maxHP),
	_currentHP(attr->_currentHP),
	_damageReduction_flat(attr->_damageReduction_flat),
	_damageReduction_percent(attr->_damageReduction_percent),
	_healthRegen_flat(attr->_healthRegen_flat),
	_healthRegen_percent(attr->_healthRegen_percent),
	_critChance(attr->_critChance),
	_critMultiplier(attr->_critMultiplier),
	_attackSpeed(attr->_attackSpeed),
	_bonusBounces(attr->_bonusBounces),
	_bonusPierce(attr->_bonusPierce),
	_bonusProjectiles(attr->_bonusProjectiles),
	_projectileSpeed(attr->_projectileSpeed),
	_projectileSize(attr->_projectileSize),
	_movementSpeed(attr->_movementSpeed),
	_range(attr->_range),
	_contactDamage(attr->_contactDamage),
	_selfSize(attr->_selfSize),
	_iFrameDuration(attr->_iFrameDuration)
{
}

//void CombatantAttributes::applyToAllStats(const std::function<void(Stat&)>& func) {
//	func(_maxHP);
//	func(_currentHP);
//	func(_damageReduction_flat);
//	func(_damageReduction_percent);
//	func(_healthRegen_flat);
//	func(_healthRegen_percent);
//	func(_critChance);
//	func(_critMultiplier);
//	func(_attackSpeed);
//	func(_bonusBounces);
//	func(_bonusPierce);
//	func(_bonusProjectiles);
//	func(_projectileSpeed);
//	func(_projectileSize);
//	func(_movementSpeed);
//	func(_range);
//	func(_contactDamage);
//	func(_selfSize);
//	func(_iFrameDuration);
//}

void CombatantAttributes::applyStatus(const FStatusEffect* status, float delta) {
	// Require nothing
	if (stats->_type == _DAMAGE)
		_currentHP._offset -= status->_magnitude;
	else if (stats->_type == _BLEED)
		_currentHP._offset -= status->_magnitude * delta;
	// Require combatant manager
	else if (stats->_type == _BURN || false) {
		UCombatantManager* manager = nullptr;
		if (!MyGameplayStatics::GetCombatantManager(manager)) {
			LOGERROR("CombatantAttributes::applyStatus - could not get combatant manager for burn damage");
			return;
		}
		if (stats->_type == _BURN)
			if (manager->getBurnThisFrame())
				_currentHP._offset -= (status->_magnitude / 100.0f) * _currentHP.getFinal();
	}
	else
		return;
}

void CombatantAttributes::discretizeFull() {
	_bonusBounces.discretize();
	_bonusPierce.discretize();
	_bonusProjectiles.discretize();
}