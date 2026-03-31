#include "Combatant.h"
//#include <functional>
#include "MyGameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "Active.h"
#include "SpriteManager.h"
#include "AssetRefs.h"
#include "Definitions.h"
#include "Engine/AssetManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"
#include "helpers.h"
#include "CombatantManager.h"

float ACombatant::getAttributeMember(Stat CombatantAttributes::* member) const {
	return _attributeSet->getMember(member);
}

const CombatantAttributes& ACombatant::getAttributes() const { return _attributeSet->getAttributeWrapper().getCore(); }

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

void ACombatant::initialise_ACombatant(const UCombatantTemplate* diskVal) {
	if (!IsValid(diskVal) || !IsValid(diskVal->_config) || !IsValid(diskVal->_attributes)) {
		LOGERROR("ACombatant::initialise_ACombatant - parameter not valid");
		return;
	}
	const UCombatantTemplate* temp = unrealHelpers::getDynamicTemplate<UCombatantTemplate>(this, diskVal)
	if (!IsValid(temp)) {
		LOGERROR("ACombatant::initialise_ACombatant - failed to get dynamic template");
		return;
	}
	_config = TObjectPtr<const UCombatantConfig>(temp->_config);
	CombatantAttributeSet tempSet(this, temp->_attributes);
	_attributeSet = std::make_unique<CombatantAttributeSet>(this, temp->_attributes);
}

void ACombatant::BeginPlay() {
	Super::BeginPlay();
	if (!IsValid(_config.Get()) || _attributeSet.get() == nullptr) {
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
		onKilled();
	}
}
void ACombatant::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	float oldHP = _attributeSet->getMember(&CombatantAttributes::_currentHP);
	_attributeSet->tick(DeltaTime);
	float newHP = _attributeSet->getMember(&CombatantAttributes::_currentHP);
	if (!helpers::nearEq(oldHP, newHP)) {
		onCurrentHPChanged(oldHP, newHP);
	}
	for (auto& active : _activeAbilities) {
		active.tick(DeltaTime, _myForwardVector);
	}
	FVector currentScale = GetActorScale3D();
	SetActorScale3D(currentScale * _attributeSet->getMember(&CombatantAttributes::_selfSize));
}

void ACombatant::lookAtDirection(float X, float Z) {
	const FRotator rotation = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), FVector(X, 0, Z));
	_myForwardVector = rotation.RotateVector(FVector(1, 0, 0));
}

void ACombatant::exchangeContactDamage(ACombatant* left, ACombatant* right) {
	if (!IsValid(left) || !IsValid(right)) {
		LOGERROR("ACombatant::exchangeContactDamage - parameter not valid");
		return;
	}
	const float leftThreat = left->_attributeSet->getMember(&CombatantAttributes::_contactDamage);
	const float rightThreat = right->_attributeSet->getMember(&CombatantAttributes::_contactDamage);
	FEffectStruct leftEffect = FEffectStruct(_DAMAGE, leftThreat, 0, 1);
	FEffectStruct rightEffect = FEffectStruct(_DAMAGE, rightThreat, 0, 1);
	left->inflictStatus(rightEffect);
	right->inflictStatus(leftEffect);
}
void ACombatant::inflictStatus(const FEffectStruct& status) {
	_attributeSet->inflictStatus(status);
}
///////////////////////////////////////////////////////////////////////////////

//CombatantAttributes::CombatantAttributes(const UCombatantAttributeData* attr) :
//	_maxHP(attr->_maxHP),
//	_currentHP(attr->_currentHP),
//	_damageReduction_flat(attr->_damageReduction_flat),
//	_damageReduction_percent(attr->_damageReduction_percent),
//	_healthRegen_flat(attr->_healthRegen_flat),
//	_healthRegen_percent(attr->_healthRegen_percent),
//	_critChance(attr->_critChance),
//	_critMultiplier(attr->_critMultiplier),
//	_attackSpeed(attr->_attackSpeed),
//	_bonusBounces(attr->_bonusBounces),
//	_bonusPierce(attr->_bonusPierce),
//	_bonusProjectiles(attr->_bonusProjectiles),
//	_projectileSpeed(attr->_projectileSpeed),
//	_projectileSize(attr->_projectileSize),
//	_movementSpeed(attr->_movementSpeed),
//	_range(attr->_range),
//	_contactDamage(attr->_contactDamage),
//	_selfSize(attr->_selfSize),
//	_iFrameDuration(attr->_iFrameDuration)
//{
//}

void CombatantAttributes::applyToAllStats(const std::function<void(Stat&)>& func) {
	func(_maxHP);
	func(_currentHP);
	func(_damageReduction_flat);
	func(_damageReduction_percent);
	func(_healthRegen_flat);
	func(_healthRegen_percent);
	func(_critChance);
	func(_critMultiplier);
	func(_attackSpeed);
	func(_bonusBounces);
	func(_bonusPierce);
	func(_bonusProjectiles);
	func(_projectileSpeed);
	func(_projectileSize);
	func(_movementSpeed);
	func(_range);
	func(_contactDamage);
	func(_selfSize);
	func(_iFrameDuration);
}

void CombatantAttributes::applyStatus(UObject* context, const FEffectStruct& status, float delta) {
	// Require nothing
	if (status._type == _DAMAGE)
		_currentHP._offset -= status._magnitude;
	else if (status._type == _BLEED)
		_currentHP._offset -= status._magnitude * delta;
	// Require combatant manager
	else if (status._type == _BURN || false) {
		UCombatantManager* manager = nullptr;
		if (!MyGameplayStatics::getCombatantManager(context, manager)) {
			LOGERROR("CombatantAttributes::applyStatus - could not get combatant manager for burn damage");
			return;
		}
		if (status._type == _BURN)
			if (manager->getBurnThisFrame())
				_currentHP._offset -= (status._magnitude / 100.0f) * _currentHP.getFinal();
	}
	else
		return;
}

void CombatantAttributes::discretizeFull() {
	_bonusBounces.discretize();
	_bonusPierce.discretize();
	_bonusProjectiles.discretize();
}

//Template stuff
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
CombatantAttributes::CombatantAttributes(const CombatantAttributes& other) :
	_maxHP(other._maxHP),
	_currentHP(other._currentHP),
	_damageReduction_flat(other._damageReduction_flat),
	_damageReduction_percent(other._damageReduction_percent),
	_healthRegen_flat(other._healthRegen_flat),
	_healthRegen_percent(other._healthRegen_percent),
	_critChance(other._critChance),
	_critMultiplier(other._critMultiplier),
	_attackSpeed(other._attackSpeed),
	_bonusBounces(other._bonusBounces),
	_bonusPierce(other._bonusPierce),
	_bonusProjectiles(other._bonusProjectiles),
	_projectileSpeed(other._projectileSpeed),
	_projectileSize(other._projectileSize),
	_movementSpeed(other._movementSpeed),
	_range(other._range),
	_contactDamage(other._contactDamage),
	_selfSize(other._selfSize),
	_iFrameDuration(other._iFrameDuration)
{
}
CombatantAttributes::CombatantAttributes(CombatantAttributes&& other) :
	_maxHP(std::move(other._maxHP)),
	_currentHP(std::move(other._currentHP)),
	_damageReduction_flat(std::move(other._damageReduction_flat)),
	_damageReduction_percent(std::move(other._damageReduction_percent)),
	_healthRegen_flat(std::move(other._healthRegen_flat)),
	_healthRegen_percent(std::move(other._healthRegen_percent)),
	_critChance(std::move(other._critChance)),
	_critMultiplier(std::move(other._critMultiplier)),
	_attackSpeed(std::move(other._attackSpeed)),
	_bonusBounces(std::move(other._bonusBounces)),
	_bonusPierce(std::move(other._bonusPierce)),
	_bonusProjectiles(std::move(other._bonusProjectiles)),
	_projectileSpeed(std::move(other._projectileSpeed)),
	_projectileSize(std::move(other._projectileSize)),
	_movementSpeed(std::move(other._movementSpeed)),
	_range(std::move(other._range)),
	_contactDamage(std::move(other._contactDamage)),
	_selfSize(std::move(other._selfSize)),
	_iFrameDuration(std::move(other._iFrameDuration))
{
}
//CombatantAttributes& CombatantAttributes::operator=(CombatantAttributes&& other) {
//	if (this != &other) {
//		_maxHP = std::move(other._maxHP);
//		_currentHP = std::move(other._currentHP);
//		_damageReduction_flat = std::move(other._damageReduction_flat);
//		_damageReduction_percent = std::move(other._damageReduction_percent);
//		_healthRegen_flat = std::move(other._healthRegen_flat);
//		_healthRegen_percent = std::move(other._healthRegen_percent);
//		_critChance = std::move(other._critChance);
//		_critMultiplier = std::move(other._critMultiplier);
//		_attackSpeed = std::move(other._attackSpeed);
//		_bonusBounces = std::move(other._bonusBounces);
//		_bonusPierce = std::move(other._bonusPierce);
//		_bonusProjectiles = std::move(other._bonusProjectiles);
//		_projectileSpeed = std::move(other._projectileSpeed);
//		_projectileSize = std::move(other._projectileSize);
//		_movementSpeed = std::move(other._movementSpeed);
//		_range = std::move(other._range);
//		_contactDamage = std::move(other._contactDamage);
//		_selfSize = std::move(other._selfSize);
//		_iFrameDuration = std::move(other._iFrameDuration);
//	}
//	return *this;
//}
CombatantAttributeSet::CombatantAttributeSet(CombatantAttributeSet&& other) :
	_attributes(std::move(other._attributes))
{
}

void UCombatantAttributeData::replaceOverrides() override {
	if (helpers::isInvalidData(_maxHP))
		_maxHP = defaults::_maxHP;
	if (helpers::isInvalidData(_currentHP))
		_currentHP = defaults::_currentHP;
	if (helpers::isInvalidData(_damageReduction_flat))
		_damageReduction_flat = defaults::_damageReduction_flat;
	if (helpers::isInvalidData(_damageReduction_percent))
		_damageReduction_percent = defaults::_damageReduction_percent;
	if (helpers::isInvalidData(_healthRegen_flat))
		_healthRegen_flat = defaults::_healthRegen_flat;
	if (helpers::isInvalidData(_healthRegen_percent))
		_healthRegen_percent = defaults::_healthRegen_percent;
	if (helpers::isInvalidData(_critChance))
		_critChance = defaults::_critChance;
	if (helpers::isInvalidData(_critMultiplier))
		_critMultiplier = defaults::_critMultiplier;
	if (helpers::isInvalidData(_attackSpeed))
		_attackSpeed = defaults::_attackSpeed;
	if (helpers::isInvalidData(_bonusBounces))
		_bonusBounces = defaults::_bonusBounces;
	if (helpers::isInvalidData(_bonusPierce))
		_bonusPierce = defaults::_bonusPierce;
	if (helpers::isInvalidData(_bonusProjectiles))
		_bonusProjectiles = defaults::_bonusProjectiles;
	if (helpers::isInvalidData(_projectileSpeed))
		_projectileSpeed = defaults::_projectileSpeed;
	if (helpers::isInvalidData(_projectileSize))
		_projectileSize = defaults::_projectileSize;
	if (helpers::isInvalidData(_movementSpeed))
		_movementSpeed = defaults::_movementSpeed;
	if (helpers::isInvalidData(_range))
		_range = defaults::_range;
	if (helpers::isInvalidData(_contactDamage))
		_contactDamage = defaults::_contactDamage;
	if (helpers::isInvalidData(_selfSize))
		_selfSize = defaults::_selfSize;
	if (helpers::isInvalidData(_iFrameDuration))
		_iFrameDuration = defaults::_iFrameDuration;
};

void UCombatantConfig::replaceOverrides() {
	if (unrealHelpers::isInvalidData(_name))
		_name = defaults::_name;
	if (unrealHelpers::isInvalidData(_sprite))
		_sprite = defaults::_sprite;
	if (unrealHelpers::isInvalidData<ACombatant>(_combatantClass))
		_combatantClass = defaults::_combatantClass;
}