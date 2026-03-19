#include "Active.h"
#include "Engine/AssetManager.h"
#include "Definitions.h"
#include "Combatant.h"
#include "GameFramework/Pawn.h"

void UActive::tick(float delta) {
	if (!_pawnRef.IsValid()) {
		return;
	}
	//If this is performance intensive I can change the trigger to onAttributeChanged
	for (const auto& factory : _factories) {
		factory->tick(delta);
	}
	updateWarmup(delta);
	if (!IsValid(_config)) {
		LOGERROR("UActive::tick - config is not valid");
		return;
	}
	if (_chargeRatio >= 1) {
		activate();
		_timeSinceLastActivation = 0;
		_chargeRatio = 0;
	}
}

void UActive::updateWarmup(float delta) {
	if (!_combatantAttributes.IsValid())
		return;
	if (!IsValid(_config)) {
		LOGERROR("UActive::tick - config is not valid");
		return;
	}
	const float newAttackSpeed = _combatantAttributes->_attackSpeed;
	const float baseWarmup = _config->_warmup;

	const float modifiedWarmup = baseWarmup * (1.0f / _combatantAttributes->_attackSpeed);
	_timeSinceLastActivation = _chargeRatio * modifiedWarmup + delta;
	_chargeRatio = _timeSinceLastActivation / modifiedWarmup;
}

void UActive::activate() {
	if (!IsValid(_config)) {
		// This may be expected behaviour if activate is called exterally while its owner is being constructed or destructed-which is exactly why LOGERROR uses checkslow
		LOGERROR("UActive::activate - _config is nullptr");
	}
	EAttackType type = _config->_attackType;
	if (type == EAttackType::first) {
		activate_first();
	}
	else {
		LOGERROR("UActive::activate - not implemented for this attackType");
	}
}

void UActive::activate_first() {
	if (_factories.Num() == 0)
		return;
	_factories[0]->launchAttack(_myForwardVector);
}

void UActive::initialise_UActive(APawn* caller, const UWeaponTemplate* rawData, UCombatantAttributes* callerAttributes) {
	if (!IsValid(rawData) || !IsValid(rawData->_config) || !IsValid(callerAttributes)) {
		LOGERROR("UActive::initialise_UActive - invalid parameter");
		return;
	}
	_pawnRef = TWeakObjectPtr<APawn>(caller);
	_combatantAttributes = TWeakObjectPtr<UCombatantAttributes>(callerAttributes);
	_config = DuplicateObject(rawData->_config, this);
	for (const auto& data : rawData->_attackData) {
		AAttackFactory* factory = data->createFactory(caller, callerAttributes);
		_factories.Add(factory);
	}
	//warmup
	_timeSinceLastActivation = _config->_startOnCooldown ? 0 : _config->_warmup;
}

//void UActive::initialise_UActive(APawn* caller, const FPrimaryAssetId& ID, UCombatantAttributes* callerAttributes) {
//	UWeaponTemplate* rawData = nullptr;
//	UAssetManager& manager = UAssetManager::Get();
//	UObject* asset = manager.GetPrimaryAssetObject(ID);
//	if (asset == nullptr) {
//		auto temp = manager.LoadPrimaryAsset(ID);
//		temp->WaitUntilComplete();
//		asset = manager.GetPrimaryAssetObject(ID);
//	}
//	if (asset == nullptr) {
//		LOGERROR("UActive::initialise_UActive - asset is null");
//		return;
//	}
//	rawData = Cast<UWeaponTemplate>(asset);
//	if (rawData == nullptr) {
//		LOGERROR("UActive::initialise_UActive - asset is not a UWeaponTemplate");
//		return;
//	}
//	initialise_UActive(caller, TSoftObjectPtr<UWeaponTemplate>(rawData), callerAttributes);
//}