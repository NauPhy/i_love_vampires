#include "Active.h"
#include "Engine/AssetManager.h"
#include "Definitions.h"

#include "GameFramework/Pawn.h"
#include "WeaponTemplate.h"
#include "CombatantAttributes.h"
#include "AttackFactory.h"

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
	_config = DuplicateObject(rawData->_config, this);
	for (const auto& data : rawData->_attackData) {
		UAttackFactory* factory = data->createFactory(caller, this);
		_factories.Add(factory);
	}
	//warmup
	_timeSinceLastActivation = myTemplate->_startOnCooldown ? 0 : _myTemplate->_warmup;
}

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
	if (_timeSinceLastActivation >= _config->_warmup) {
		activate();
		_timeSinceLastActivation = 0;
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

	const float modifiedWarmup = baseWarmup * (1.0f / _combatantAttributes->._attackSpeed);
	_timeSinceLastActivation = _chargeRatio * modifiedWarmup + delta;
	_chargeRatio = _timeSinceLastActivation / modifiedWarmup;
}

void UActive::activate() {
	LOGERROR("UActive::activate - not implemented for this attackType");
}