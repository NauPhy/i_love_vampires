#include "Active.h"
#include "GameFramework/Pawn.h"
#include "MyAttackAttributeSet.h"
#include "AttackActor.h"
#include "Combatant.h"
#include "Definitions.h"

#include "Engine/AssetManager.h"
#include "WeaponTemplate.h"

void UActive::initialise_UActive(const APawn* caller, const FPrimaryAssetId& ID, UCombatantAttributes* callerAttributes) {
	_pawnRef = TWeakObjectPtr<APawn>(caller);
	_combatantAttributes = TWeakObjectPtr<UCombatantAttributes>(callerAttributes);
	UWeaponTemplate* rawData = nullptr;
	{
		UAssetManager manager = UAssetManager::Get();
		UObject* asset = manager.GetPrimaryAssetObject(ID);
		if (asset == nullptr) {
			asset = manager.LoadPrimaryAsset(ID);
		}
		if (asset == nullptr) {
			LOGERROR("UActive::initialise_UActive - asset is null");
			return;
		}
		rawData = Cast<UWeaponTemplate>(asset);
		if (rawData == nullptr) {
			LOGERROR("UActive::initialise_UActive - asset is not a UWeaponTemplate");
			return;
		}
	}
	_myTemplate = DuplicateObject(rawData->_config, this);
	for (const auto& data : rawData->_attackData) {
		UAttackDataRuntime* runtimeData = NewObject<UAttackDataRuntime>(this);
		runtimeData->_config = DuplicateObject(data->_config, this);
		runtimeData->_attributes = DuplicateObject(data->_attributes, this);
		runtimeData->_attributeSet = NewObject<UMyAttackAttributeSet>(this);
		runtimeData->_attributeSet->initialise_UMyAttackAttributeSet(callerAttributes, runtimeData->_attributes, runtimeData->_config->_attackClass);
		_attackData.Add(runtimeData);
	}
	//warmup
	_timeSinceLastActivation = myTemplate->_startOnCooldown ? 0 : _myTemplate->_warmup;
}

//bool UActive::initConfigAndAttributes(const TInstancedStruct<const TInstancedStruct<FWeaponConfig>& configData, FWeaponAttributes>& attributeData) {
//	if (_template->_attackActorClass == ABullet::StaticClass()) {
//		const FProjectileConfig& config = configData.Get<FProjectileConfig>();
//		const FWeaponAttributes& attributes = attributeData.Get<FProjectileAttributes>();
//
//		_config = MakeUnique<FProjectileConfig>(config);
//		_attributeSets.push_back(std::make_unique<UMyProjectileAttributeSet>());
//		_attributeSets.back()->initialise_UMyProjectileAttributeSet(&attributes, &_combatantAttributeSet);
//	}
//	else if (_template->_attackActorClass == AAOE::StaticClass()) {
//		const FAOEConfig& config = configData.Get<FAOEConfig>();
//		const FAOEAttributes& attributes = attributeData.Get<FAOEAttributes>();
//
//		_config = MakeUnique<FAOEConfig>(config);
//		_attributeSets.push_back(std::make_unique<UMyAOEAttributeSet>());
//		_attributeSetsback()->_initialise_UMyAOEAttributeSet(&attributes, &_combatantAttributeSet);
//	}
//	else if (_template->_attackActorClass == AExplosiveBullet::StaticClass()) {
//		const FExplosiveProjectileConfig& config = configData.Get<FExplosiveProjectileConfig>();
//		const FProjectileAttributes& attributes = attributeData.Get<FProjectileAttributes>();
//		const FAOEAttributes& explosionAttributes = config._explosionAttributes;
//
//		_config = MakeUnique<FExplosiveProjectileConfig>(config);
//		_attributeSets.push_back(std::make_unique<UMyProjectileAttributeSet>());
//		_attributeSets.back()->_initialise_UMyProjectileAttributeSet(&attributes, &_combatantAttributeSet);
//		_attributeSets.push_back(std::make_unique<UMyAOEAttributeSet>());
//		_attributeSets.back()->_initialise_UMyAOEAttributeSet(&explosionAttributes, &_combatantAttributeSet);
//	}
//	else {
//		LOGERROR("UActive::initConfigAndAttributes - not implemented");
//		return false;
//	}
//	return true;
//}

void UActive::tick(float delta) {
	if (!_pawnRef.IsValid()) {
		return;
	}
	//If this is performance intensive I can change the trigger to onAttributeChanged
	for (const auto& attack : _attackData) {
		attack->_attributeSet->tick(delta);
	}
	updateWarmup(delta);
	if (_timeSinceLastActivation >= _myTemplate->_warmup) {
		activate();
		_timeSinceLastActivation = 0;
	}
}

void UActive::updateWarmup(float delta) {
	if (!_combatantAttributes.IsValid())
		return;
	const float newAttackSpeed = _combatantAttributes->_attackSpeed;
	const float baseWarmup = _myTemplate->_warmup;

	const float modifiedWarmup = baseWarmup * (1.0f / _combatantAttributeSet->getAttributes()._attackSpeed);
	_timeSinceLastActivation = _chargeRatio * modifiedWarmup + delta;
	_chargeRatio = _timeSinceLastActivation / modifiedWarmup;
}

void UActive::activate() {
	LOGERROR("UActive::activate - not implemented for this attackType");)
}