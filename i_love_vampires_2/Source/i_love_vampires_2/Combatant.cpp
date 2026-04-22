#include "Combatant.h"
//#include <functional>
#include "MyGameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "Active.h"
//#include "SpriteManager.h"
#include "AssetRefs.h"
#include "Definitions.h"
#include "Engine/AssetManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "unrealHelpers.h"
#include "helpers.h"
#include "CombatantManager.h"

///////////////////////////////////////////////////////////////////////////////
// ACombatant
// Lifecycle
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
	//_passiveContainer = CreateDefaultSubobject<UPassiveContainer>(TEXT("PassiveContainer"));
}

void ACombatant::initialise_ACombatant(UCombatantTemplate* diskVal) {
	if (!IsValid(diskVal) || !IsValid(diskVal->_config) || !IsValid(diskVal->_attributes)) {
		LOGERROR("ACombatant::initialise_ACombatant - parameter not valid");
		return;
	}
	const UCombatantTemplate* temp = unrealHelpers::getDynamicTemplate<UCombatantTemplate>(this, diskVal);
	if (!IsValid(temp)) {
		LOGERROR("ACombatant::initialise_ACombatant - failed to get dynamic template");
		return;
	}
	_config = TObjectPtr<const UCombatantConfig>(temp->_config);
	_attributeSet = std::make_unique<CombatantAttributeSet>(this, temp->_attributes);
}

void ACombatant::BeginPlay() {
	Super::BeginPlay();
	if (!IsValid(_config.Get()) || _attributeSet.get() == nullptr) {
		LOGERROR("ACombatant::BeginPlay - _config or _attributeSet not valid");
		return;
	}
	for (const auto& data : _config->_startingWeapons) {
		if (canGiveWeapon())
			giveWeapon_internal(data);
	}
	for (const auto& data : _config->_startingPassives) {
		givePassive_internal(data);
	}
	unrealHelpers::initFlipbook(this, _config->_sprite.Get(), _combatantFlipbook);
	_myForwardVector = GetActorForwardVector();
}

void ACombatant::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	float oldHP = _attributeSet->getMember(&CombatantAttributes::_currentHP);
	_attributeSet->tick(DeltaTime);
	float newHP = _attributeSet->getMember(&CombatantAttributes::_currentHP);
	if (!helpers::nearEq(oldHP, newHP)) {
		if (onCurrentHPChanged(oldHP, newHP))
			return;
	}
	for (auto& active : _activeAbilities) {
		active.tick(DeltaTime, _myForwardVector);
	}
	SetActorScale3D(FVector(SPRITE_SCALE,SPRITE_SCALE,SPRITE_SCALE) * _attributeSet->getMember(&CombatantAttributes::_selfSize));
}

void ACombatant::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

// Getters
float ACombatant::getAttributeMember(Stat CombatantAttributes::* member) const {
	return _attributeSet->getMember(member);
}
std::shared_ptr<const CombatantAttributes> ACombatant::getAttributes() const { return _attributeSet->getAttributeWrapper().getCore(); }
float ACombatant::getHP() const { return getAttributeMember(&CombatantAttributes::_currentHP); }
float ACombatant::getMaxHP() const { return getAttributeMember(&CombatantAttributes::_maxHP); }
bool ACombatant::canGiveWeapon() const {
	return _activeAbilities.size() < _MAX_WEAPONS;
}
bool ACombatant::canUpgradeWeapon() const {
	for (const auto& active : _activeAbilities) {
		if (active.isUpgradable())
			return true;
	}
	return false;
}
bool ACombatant::canUpgradePassive() const {
	//return _passiveContainer->_passives.Num() > 0;
	for (const auto& passive : _passives) {
		if (passive.isUpgradable())
			return true;
	}
	return false;
}
TArray<UWeaponTemplate*> ACombatant::getUpgradableWeapons() const {
	TArray<UWeaponTemplate*> result;
	for (const auto& active : _activeAbilities) {
		if (active.isUpgradable()) {
			result.Add(active.getDiskTemplate());
		}
	}
	return result;
}

TArray<UCombatantPassive*> ACombatant::getUpgradablePassives() const {
	//return _passiveContainer->getDiskPassives();
	TArray<UCombatantPassive*> result;
	for (const auto& passive : _passives) {
		if (passive.isUpgradable()) {
			UDynamicAssetManager* manager = nullptr;
			result.Add(passive.getDiskData());
		}
	}
}

TArray<UCombatantPassive*> UPassiveContainer::getDiskPassives() const {
	UDynamicAssetManager* manager = nullptr;
	if (!MyGameplayStatics::getDynamicAssetManager(this, manager)) {
		LOGERROR("ACombatant::getUpgradablePassives - failed to get dynamic asset manager");
		return TArray<UCombatantPassive*>();
	}
	TArray<UCombatantPassive*> result;
	for (const auto& passive : _passives) {
		UCombatantPassive* temp = manager->getKey(passive.Get());
		if (temp != nullptr)
			result.Add(temp);
	}
	return result;
}

TArray<UWeaponTemplate*> ACombatant::getMaxedWeapons() const {
	TArray<UWeaponTemplate*> result;
	for (const auto& active : _activeAbilities) {
		if (!active.isUpgradable()) {
			result.Add(active.getDiskTemplate());
		}
	}
	return result;
}
TArray<UWeaponTemplate*> ACombatant::getAllWeapons() const {
	TArray<UWeaponTemplate*> result;
	for (const auto& active : _activeAbilities) {
		result.Add(active.getDiskTemplate());
	}
	return result;
}
TArray<UCombatantPassive*> ACombatant::getAllPassives() const {
	//return _passiveContainer->getDiskPassives();
	TArray<UCombatantPassive*> result;
	for (const auto& passive : _passives) {
		result.Add(passive.getDiskData());
	}
	return result;
}
// Mutators
void ACombatant::giveWeapon(UWeaponTemplate* temp) {
	if (!canGiveWeapon()) {
		LOGERROR("ACombatant::giveWeapon - cannot give weapon, already at max weapons");
		return;
	}
	const UWeaponTemplate* dynamic = unrealHelpers::getDynamicTemplate<UWeaponTemplate>(this, temp);
	giveWeapon_internal(dynamic);
}
void ACombatant::giveWeapon_internal(const UWeaponTemplate* temp) {
	if (!IsValid(temp)) {
		LOGERROR("ACombatant::giveWeapon_internal - parameter not valid");
		return;
	}
	_activeAbilities.push_back(Active(this, temp));
}
void ACombatant::upgradeWeapon(UWeaponTemplate* temp) {
	if (!IsValid(temp)) {
		LOGERROR("ACombatant::upgradeWeapon - parameter not valid");
		return;
	}
	for (auto& active : _activeAbilities) {
		if (active == temp)
			active.upgrade();
	}
	LOGERROR("ACombatant::upgradeWeapon - no active ability upgraded, weapon may not be compatible with any actives");
}

void ACombatant::givePassive(UCombatantPassiveData* temp) {
	const UCombatantPassiveData* dynamic = unrealHelpers::getDynamicTemplate<UCombatantPassiveData>(this, temp);
	givePassive_internal(dynamic);
}
void ACombatant::givePassive_internal(const UCombatantPassiveData* temp) {
	if (!IsValid(temp)) {
		LOGERROR("ACombatant::givePassive_internal - parameter not valid");
		return;
	}
	_passives.push_back(Passive(temp));
}

void ACombatant::inflictStatus(const FEffectStruct& status) {
	for (auto& active : _activeAbilities) {
		active.inflictStatus(status);
	}
	_attributeSet->inflictStatus(status);
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

// Callbacks
bool ACombatant::onCurrentHPChanged(float oldVal, float newVal)
{
	{
		const Stat& HP = _attributeSet->getMember(&CombatantAttributes::_currentHP);
		if (!helpers::nearEq(HP._modifier, 0) || !helpers::nearEq(HP._postbonus, 0) || !helpers::nearEq(HP._multiplier, 0)) {
			LOGERROR("ACombatant::onCurrentHPChanged - for simplicity, all values of currentHP should be 0 except for base and offset- it's essentially a derived stat, exempt from direct effects from status effects and passives. Prebonus is an exception because it is used to track the passive effect on maxHP without drifting.");
		}
	}
	if (newVal <= 0.0f) {
		onKilled();
		return true;
	}
	return false;
}

void ACombatant::onKilled() {
	Destroy();
}
///////////////////////////////////////////////////////////////////////////////
// CombatantAttributes
CombatantAttributes::CombatantAttributes(const UCombatantAttributeData* attr, const UPassiveContainer* passives) :
	BaseAttributes(attr),
	//_maxHP(attr->_maxHP),
	// I recommend setting maxHP and currentHP to the same values for clarity, but it's enforced here just in case
	_currentHP(attr->_maxHP),
	//_damageReduction_flat(attr->_damageReduction_flat),
	//_damageReduction_percent(attr->_damageReduction_percent),
	//_healthRegen_flat(attr->_healthRegen_flat),
	//_healthRegen_percent(attr->_healthRegen_percent),
	//_critChance(attr->_critChance),
	//_critMultiplier(attr->_critMultiplier),
	//_attackSpeed(attr->_attackSpeed),
	//_bonusBounces(attr->_bonusBounces),
	//_bonusPierce(attr->_bonusPierce),
	//_bonusProjectiles(attr->_bonusProjectiles),
	//_projectileSpeed(attr->_projectileSpeed),
	//_projectileSize(attr->_projectileSize),
	//_movementSpeed(attr->_movementSpeed),
	//_range(attr->_range),
	//_contactDamage(attr->_contactDamage),
	//_selfSize(attr->_selfSize),
	//_iFrameDuration(attr->_iFrameDuration),
	_passives(passives)
{
	baseInit(attr);
}

CombatantAttributes::CombatantAttributes(const UCombatantAttributeData* attr) :
	CombatantAttributes(attr, nullptr)
{
}

CombatantAttributes::CombatantAttributes(const CombatantAttributes& other) :
	BaseAttributes(other),
	/*_maxHP(other._maxHP),
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
	_iFrameDuration(other._iFrameDuration),*/
	_passiveContainer(other._passiveContainer)
{
	baseInit(other);
}

CombatantAttributes::CombatantAttributes(CombatantAttributes&& other) :
	BaseAttributes(std::move(other)),
	//_maxHP(std::move(other._maxHP)),
	//_currentHP(std::move(other._currentHP)),
	//_damageReduction_flat(std::move(other._damageReduction_flat)),
	//_damageReduction_percent(std::move(other._damageReduction_percent)),
	//_healthRegen_flat(std::move(other._healthRegen_flat)),
	//_healthRegen_percent(std::move(other._healthRegen_percent)),
	//_critChance(std::move(other._critChance)),
	//_critMultiplier(std::move(other._critMultiplier)),
	//_attackSpeed(std::move(other._attackSpeed)),
	//_bonusBounces(std::move(other._bonusBounces)),
	//_bonusPierce(std::move(other._bonusPierce)),
	//_bonusProjectiles(std::move(other._bonusProjectiles)),
	//_projectileSpeed(std::move(other._projectileSpeed)),
	//_projectileSize(std::move(other._projectileSize)),
	//_movementSpeed(std::move(other._movementSpeed)),
	//_range(std::move(other._range)),
	//_contactDamage(std::move(other._contactDamage)),
	//_selfSize(std::move(other._selfSize)),
	//_iFrameDuration(std::move(other._iFrameDuration)),
	_passiveContainer(other._passiveContainer)
{
	baseInit(std::move(other));
	other._passiveContainer.Reset();
}

void CombatantAttributes::tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects) {
	if (!_passiveContainer.IsValid())
		return;
	BaseAttributes::softReset();
	// So that raw HP is accurate. Uses all stats for forward compatability
	applyToAllStats([](Stat& stat) { Stat::calculateFinal(stat); });
	float rawMaxHP = _maxHP.getFinal();
	for (const auto& passive : _passiveContainer->_passives) {
		if (!IsValid(passive)) {
			LOGERROR("CombatantAttributes::tick - invalid passive in array");
			continue;
		}
		CombatantAttributes prebonus = CombatantAttributes(passive->_prebonus, _passiveContainer.Get());
		prebonusAdd(prebonus);
		CombatantAttributes postbonus = CombatantAttributes(passive->_postbonus, _passiveContainer.Get());
		postbonusAdd(postbonus);
		CombatantAttributes multiplier = CombatantAttributes(passive->_multiplier, _passiveContainer.Get());
		multiplierAdd(multiplier);
	}
	// When you increase your maxHP by any means other than passives, your current HP stays the same. 
	// When you increase your maxHP by passives, your current HP increases by the same amount.
	// When you decrease your maxHP by any means, your currentHP stays the same but is capped at maxHP (this is treated as transient damage)
	// To simplify matters, currentHP should only be changed via base, offset, and prebonus meaning that it's only changed by damage, healing, and right here.
	
	// So that passive HP is accurate. Uses all stats for forward compatability
	applyToAllStats([](Stat& stat) { Stat::calculateFinal(stat); });
	_currentHP._prebonus = _maxHP.getFinal() - rawMaxHP;

	BaseAttributes::tick_internal(context, delta, statusEffects);
	if (_currentHP.getFinal() > _maxHP.getFinal()) {
		_currentHP._offset -= _currentHP.getFinal() - _maxHP.getFinal();
	}
}

void CombatantAttributes::discretizeFull() {
	_bonusBounces.discretize();
	_bonusPierce.discretize();
	_bonusProjectiles.discretize();
}

void CombatantAttributes::applyStatus(UObject* context, const FEffectStruct& status, float delta) {
	// Require nothing
	if (status._type == _DAMAGE) {
		_currentHP._offset -= status._magnitude;
	}
	else if (status._type == _BLEED)
		_currentHP._offset -= status._magnitude * delta;
	else if (status._type == _EXECUTE) {
		if (_currentHP.getFinal()/_maxHP.getFinal() <= status._magnitude / 100.0f)
			_currentHP._offset = -_currentHP.getFinal();
	}
	else if (status._type == _CHILL) {
		_movementSpeed._multiplier -= status._magnitude / 100.0f;
	}
	// Require combatant manager
	else if (status._type == _BURN || status._type == _POISON || status._type == _DECAY) {
		UCombatantManager* manager = nullptr;
		if (!MyGameplayStatics::getCombatantManager(context, manager)) {
			LOGERROR("CombatantAttributes::applyStatus - could not get combatant manager for burn damage");
			return;
		}
		if (status._type == _BURN)
			if (manager->getBurnThisFrame())
				_currentHP._offset -= (status._magnitude / 100.0f) * _currentHP.getFinal();
		else if (status._type == _POISON)
			//magnitude multiplier is handled by BaseAttributeSet
			if (manager->getPoisonThisFrame())
				_currentHP._offset -= status._magnitude;
		else if (status._type == _DECAY)
			if (manager->getBurnThisFrame())
				_currentHP._offset -= (status._magnitude / 100.0f) * (_maxHP.getFinal() - _currentHP.getFinal());
	}
	else
		return;
}

CombatantAttributes& CombatantAttributes::prebonusAdd(CombatantAttributes& other) {
	std::vector<Stat> otherStats = other.getStatVector();
	int i = 0;
	applyToAllStats([&otherStats, &i](Stat& stat) {
		stat._prebonus += otherStats[i++].getFinal();
		});
	return *this;
}
CombatantAttributes& CombatantAttributes::postbonusAdd(CombatantAttributes& other) {
	std::vector<Stat> otherStats = other.getStatVector();
	int i = 0;
	applyToAllStats([&otherStats, &i](Stat& stat) {
		stat._postbonus += otherStats[i++].getFinal();
		});
	return *this;
}
CombatantAttributes& CombatantAttributes::multiplierAdd(CombatantAttributes& other) {
	std::vector<Stat> otherStats = other.getStatVector();
	int i = 0;
	applyToAllStats([&otherStats, &i](Stat& stat) {
		stat._multiplier += otherStats[i++].getFinal();
		});
	return *this;
}
std::vector<Stat> CombatantAttributes::getStatVector() {
	std::vector<Stat> stats;
	applyToAllStats([&stats](Stat& stat) {
		stats.push_back(Stat(stat));
		});
	return stats;
}
///////////////////////////////////////////////////////////////////////////////
// CombatantAttributeSet
CombatantAttributeSet::CombatantAttributeSet(ACombatant* owner, const UCombatantAttributeData* data) {
	auto temp = std::make_shared<CombatantAttributes>(data, owner->getPassives());
	_attributes = std::make_unique<BaseAttributeWrapper<CombatantAttributes>>(owner, temp);
}

CombatantAttributeSet::CombatantAttributeSet(CombatantAttributeSet&& other) :
	_attributes(std::move(other._attributes))
{
	other._attributes = nullptr;
}

void CombatantAttributeSet::tick(float delta) {
	if (_attributes.get() == nullptr) {
		LOGERROR("CombatantAttributeSet::tick - attributes not initialized");
		return;
	}
	TArray<FEffectStruct> temp = getStatusEffects();
	// If in iFrames, remove flat damage effects
	if (_iFrameTimeRemaining > EPSILON) {
		temp.RemoveAll([](const FEffectStruct& effect) {
			return effect._type == _DAMAGE;
			});
	}
	// If not in iFrames, begin iFrames if there is at least 1 flat damage effect, then apply all flat damage effects that are queued this frame
	else {
		for (const auto& effect : temp) {
			if (effect._type == _DAMAGE) {
				_iFrameTimeRemaining = _attributes->getMember(&CombatantAttributes::_iFrameDuration);
				break;
			}
		}
	}
	_attributes->tick(delta, temp);
	if (_iFrameTimeRemaining > -EPSILON)
		_iFrameTimeRemaining -= delta;
}
///////////////////////////////////////////////////////////////////////
// UCombatantAttributeData
//void UCombatantAttributeData::replaceOverrides() {
//	if (helpers::isInvalidData(_maxHP))
//		_maxHP = _defaults._maxHP;
//	if (helpers::isInvalidData(_currentHP))
//		_currentHP = _defaults._currentHP;
//	if (helpers::isInvalidData(_damageReduction_flat))
//		_damageReduction_flat = _defaults._damageReduction_flat;
//	if (helpers::isInvalidData(_damageReduction_percent))
//		_damageReduction_percent = _defaults._damageReduction_percent;
//	if (helpers::isInvalidData(_healthRegen_flat))
//		_healthRegen_flat = _defaults._healthRegen_flat;
//	if (helpers::isInvalidData(_healthRegen_percent))
//		_healthRegen_percent = _defaults._healthRegen_percent;
//	if (helpers::isInvalidData(_critChance))
//		_critChance = _defaults._critChance;
//	if (helpers::isInvalidData(_critMultiplier))
//		_critMultiplier = _defaults._critMultiplier;
//	if (helpers::isInvalidData(_attackSpeed))
//		_attackSpeed = _defaults._attackSpeed;
//	if (helpers::isInvalidData(_bonusBounces))
//		_bonusBounces = _defaults._bonusBounces;
//	if (helpers::isInvalidData(_bonusPierce))
//		_bonusPierce = _defaults._bonusPierce;
//	if (helpers::isInvalidData(_bonusProjectiles))
//		_bonusProjectiles = _defaults._bonusProjectiles;
//	if (helpers::isInvalidData(_projectileSpeed))
//		_projectileSpeed = _defaults._projectileSpeed;
//	if (helpers::isInvalidData(_projectileSize))
//		_projectileSize = _defaults._projectileSize;
//	if (helpers::isInvalidData(_movementSpeed))
//		_movementSpeed = _defaults._movementSpeed;
//	if (helpers::isInvalidData(_range))
//		_range = _defaults._range;
//	if (helpers::isInvalidData(_contactDamage))
//		_contactDamage = _defaults._contactDamage;
//	if (helpers::isInvalidData(_selfSize))
//		_selfSize = _defaults._selfSize;
//	if (helpers::isInvalidData(_iFrameDuration))
//		_iFrameDuration = _defaults._iFrameDuration;
//};
void UCombatantAttributeData::replaceOverrides() {
	for (const auto& [memberPtr, defaultVal] : DefaultProxy<UCombatantAttributeData>::get()) {
		BASEATTRIBUTES_OVERRIDE(memberPtr, defaultVal);
	}
	_currentHP = _maxHP;
}
///////////////////////////////////////////////////////////////////////////////
// UCombatantConfig
void UCombatantConfig::replaceOverrides() {
	if (unrealHelpers::isInvalidData(_name))
		_name = _defaults._name;
	if (unrealHelpers::isInvalidData<ACombatant>(_combatantClass))
		_combatantClass = _defaults._combatantClass;
	for (auto& data : _startingPassives)
		data->replaceOverrides();
}
///////////////////////////////////////////////////////////////////////////////
// Passives
UCombatantPassiveData* Passive::getDiskData() const {
	UDynamicAssetManager* manager = nullptr;
	if (!MyGameplayStatics::getDynamicAssetManager(GWorld, manager)) {
		LOGERROR("Passive::getDiskData - failed to get dynamic asset manager");
		return nullptr;
	}
	return manager->getKey(_data.Get());
}