#include "Active.h"
#include "EnumConverter.h"
#include "WeaponUEnum.h"
#include "Definitions.h"
#include "AssetRefs.h"
#include "Kismet/GameplayStatics.h"
#include "Framework/Pawn.h"

using std::unordered_map;

Active::Active(FName ID, const unordered_map<CombatantAttribute::MyEnum, float>& attributeSnapshot, APawn* pawnRef) :
	_ID(ID),
	_pawnRef(TWeakObjectPtr<APawn>(pawnRef))
{
	// Initialise template references
	{
		UAssetRefs* refs = nullptr;
		if (!getAssetRefs(refs))
			return;
		_weaponTemplate = refs->getWeaponTemplate(_ID);
		if (_weaponTemplate == nullptr) {
			LOGERROR("Active::Active weapon template is nullptr");
			return;
		}
		if (_weaponTemplate->_hasProjectileData) {
			_projectileTemplate = refs->getProjectileTemplate(_ID);
			if (_projectileTemplate == nullptr) {
				LOGERROR("Active::Active projectile template is nullptr");
				return;
			}
		}
		if (_weaponTemplate->_hasAOEData) {
			_AOETemplate = refs->getAOETemplate(_ID);
			if (_AOETemplate == nullptr) {
				LOGERROR("Active::Active AOE template is nullptr");
				return;
			}
		}
	}
	//warmup
	float warmup = 0;
	if (!getWeaponAttribute(_WARMUP, warmup))
		return;
	_timeSinceLastActivation = template._startOnCooldown ? 0 : warmup;
	//other
	_name = _weaponTemplate->_name;
}

void Active::tick(float delta, const unordered_map<CombatantAttribute::MyEnum, float>& attributeSnapshot) {
	if (!_pawnRef.IsValid()) {
		Destroy();
		return;
	}
	//If this is performance intensive I can change the trigger to onAttributeChanged
	updateWeaponTemplate(attributeSnapshot);
	if (_projectileTemplate != nullptr)
		updateProjectileTemplate(attributeSnapshot);
	if (_AOETemplate != nullptr)
		updateProjectileTemplate(attributeSnapshot);

	float warmup = 0;
	if (!getWeaponAttribute(_WARMUP, warmup))
		return;
	if (_timeSinceLastActivation >= warmup) {
		activate();
		_timeSinceLastActivation = 0;
	}
	else
		_timeSinceLastActivation += delta;
}

bool Active::activate(const unordered_map<CombatantAttribute::MyEnum, float>& snapshot) {
	if (_originalTemplate).
}

void Active::updateWarmup(const std::unordered_map < CombatantAttribute::MyEnum, float>& snapshot) {
	float warmup = 0;
	if (!getTemplateAttribute(_WARMUP, warmup))
		return;
	float currentWarmup = 0;
	if (!getWeaponAttribute(_WARMUP, currentWarmup))
		return;
	auto proportion = _timeSinceLastActivation / currentWarmup;
	_attributes[_WARMUP] = warmup / attackSpeed;
	_timeSinceLastActivaton = proportion * _attributes[_WARMUP];
}

void Active::updateWeaponAttributes(const unordered_map<CombatantAttribute::MyEnum, float>& snapshot) {
	//damage not in combatantattributes yet
	float critChance = 0;
	if (!getTemplateAttribute(_CRIT_CHANCE, warmup))
		return;
	float critMult = 0;
	if (!getTemplateAttribute(_CRIT_MULTIPLIER, critMult))
		return;
	float attackSpeed = 0;
	if (!getCombatantAttribute(snapshot, _ATTACK_SPEED, attackSpeed))
		return;
	float combatantCritChance = 0;
	if (!getCombatantAttribute(snapshot, _COMBATANT_CRIT_CHANCE, combatantCritChance))
		return;
	float combatantCritMult = 0;
	if (!getCombatantAttribute(snapshot, _COMBATANT_CRIT_MULTIPLIER, combatantCritMult))
		return;

	updateWarmup(snapshot);
	_attributes[_CRIT_CHANCE] = critChance + combatantCritChance;
	_attributes[_CRIT_MULTIPLIER] = critMult + combatantCritMult;
}

bool Active::getWeaponAttribute(WeaponAttribute::MyEnum type, float& ret) const {
	auto it = _attributes.find(type);
	if (it == _attributes.end()) {
		LOGERROR("Active::getWeaponAttribute - attribute not found");
		return false;
	}
	ret = *it;
	return true;
}
bool Active::getTemplateAttribute(WeaponAttribute::MyEnum type, float& ret) const {
	auto converted = EnumConverter<WeaponAttribute::MyEnum, EWeaponAttribute>::toUEnum(type);
	if (!_originalTemplate._attributes.Contains(converted)) {
		LOGERROR("Active::getTemplateAttribute - attribute not found");
		return false;
	}
	ret = _originalTemplate._attributes[converted];
	return true;
}
bool Active::getCombatantAttribute(const std::unordered_map<CombatantAttribute::MyEnum, float>& input, CombatantAttribute::MyEnum type, float& ret) {
	auto it = input.find(type);
	if (it == input.end()) {
		LOGERROR("Active::getCombatantAttribute - attribute not found");
		return false;
	}
	ret = *it;
	return true;
}

bool Active::getAssetRefs(UAssetRefs*& ret) {
	if (!_pawnRef.IsValid()) {
		Destroy();
		return;
	}
	UGameInstance* gameInstance = UGameplayStatics::GetGameInstance(_pawnRef.Get());
	if (gameInstance == nullptr) {
		LOGERROR("Active::getAssetRefs - gameInstance is nullptr");
		return false;
	}
	ret = gameInstance->GetSubsystem<UAssetRefs>();
	if (ret == nullptr) {
		LOGERROR("Active::getAssetRefs = ret is nullptr");
		return false;
	}
	return true;
}