#include "Active.h"
#include "MyGameplayStatics.h"
#include "AssetRefs.h"
#include "ActiveTemplate.h"
#include "AttackActor.h"
#include "Bullet.h"
#include "AOE.h"
#include "ExplosiveBullet.h"
#include "Definitions.h"
#include "Framework/Pawn.h"

void UActive::initialise_UActive(const APawn* caller, FName ID, const TSharedPtr<UMyCombatantAttributeSet>& callerAttributes) {
	_pawnRef = TWeakObjectPtr<APawn>(caller);
	_combatantAttributeSet = TWeakPtr<UMyCombatantAttributeSet>(callerAttributes);

	// get template from table
	UAssetRefs* refs = nullptr;
	if (!getAssetRefs(refs))
		return;
	const FActiveTemplate* fullTemplate = refs->getActiveTemplate(ID);
	if (fullTemplate == nullptr) {
		LOGERROR("UActive::initialise_UActive - fullTemplate is nullptr");
		return;
	}
	//set myTemplate
	_myTemplate = fullTemplate->_template;
	//set combatant ref
	_combatantAttributeSet = TWeakPtr<UMyCombatantAttributeSet>(&callerAttributes);
	if (!fullTemplate->_config.IsValid() || !fullTemplate->_attributes.IsValid()) {
		LOGERROR("UActive::initialise_UActive - template config or attributes is not valid");
		return;
	}
	//set attributes and config
	if (!initConfigAndAttributes(_fullTemplate->_config, _fullTemplate->_attributes))
		return;
	//warmup
	_timeSinceLastActivation = myTemplate._startOnCooldown ? 0 : _myTemplate->_warmup;
}

bool UActive::initConfigAndAttributes(const TInstancedStruct<const TInstancedStruct<FWeaponConfig>& configData, FWeaponAttributes>& attributeData) {
	if (_template->_attackActorClass == ABullet::StaticClass()) {
		const FProjectileConfig& config = configData.Get<FProjectileConfig>();
		const FWeaponAttributes& attributes = attributeData.Get<FProjectileAttributes>();

		_config = MakeUnique<FProjectileConfig>(config);
		_attributeSets.push_back(std::make_unique<UMyProjectileAttributeSet>());
		_attributeSets.back()->initialise_UMyProjectileAttributeSet(&attributes, &_combatantAttributeSet);
	}
	else if (_template->_attackActorClass == AAOE::StaticClass()) {
		const FAOEConfig& config = configData.Get<FAOEConfig>();
		const FAOEAttributes& attributes = attributeData.Get<FAOEAttributes>();

		_config = MakeUnique<FAOEConfig>(config);
		_attributeSets.push_back(std::make_unique<UMyAOEAttributeSet>());
		_attributeSetsback()->_initialise_UMyAOEAttributeSet(&attributes, &_combatantAttributeSet);
	}
	else if (_template->_attackActorClass == AExplosiveBullet::StaticClass()) {
		const FExplosiveProjectileConfig& config = configData.Get<FExplosiveProjectileConfig>();
		const FProjectileAttributes& attributes = attributeData.Get<FProjectileAttributes>();
		const FAOEAttributes& explosionAttributes = config._explosionAttributes;

		_config = MakeUnique<FExplosiveProjectileConfig>(config);
		_attributeSets.push_back(std::make_unique<UMyProjectileAttributeSet>());
		_attributeSets.back()->_initialise_UMyProjectileAttributeSet(&attributes, &_combatantAttributeSet);
		_attributeSets.push_back(std::make_unique<UMyAOEAttributeSet>());
		_attributeSets.back()->_initialise_UMyAOEAttributeSet(&explosionAttributes, &_combatantAttributeSet);
	}
	else {
		LOGERROR("UActive::initConfigAndAttributes - not implemented");
		return false;
	}
	return true;
}

void UActive::tick(float delta) {
	if (!_pawnRef.IsValid()) {
		return;
	}
	//If this is performance intensive I can change the trigger to onAttributeChanged
	for (const auto& set : _attributeSets) {
		set->tick(delta);
	}
	updateWarmup(delta);
	if (_timeSinceLastActivation >= _myTemplate._warmup) {
		activate<_myTemplate._attackActorClass>();
		_timeSinceLastActivation = 0;
	}
}

void UActive::updateWarmup(float delta) {
	if (!_combatantAttributeSet.IsValid())
		return;
	static float oldAttackSpeed = _combatantAttributeSet->getAttributes()._attackSpeed;
	const float newAttackSpeed = _combatantAttributeSet->getAttributes()._attackSpeed;

	const float baseWarmup = _myTemplate._warmup;
	const float modifiedWarmup = baseWarmup * (1.0f / _combatantAttributeSet->getAttributes()._attackSpeed);
	const float oldProportion = _timeSinceLastActivation / (baseWarmup * (1.0f / oldAttackSpeed));
	_timeSinceLastActivation = oldProportion * modifiedWarmup + delta;
	oldAttackSpeed = newAttackSpeed;
}

template<typename attackType>
void UActive::activate() {
	LOGERROR("UActive::activate - not implemented for this attackType");)
}
template<>
void UActive::activate<ABullet>() {
	//todo (I have to look at the blueprint)
}
template<>
void UActive::activate<AAOE>() {
	//todo (I have to look at the blueprint)
}
template<>
void UActive::activate<AExplosiveBullet>() {
	//todo (I have to look at the blueprint)
}