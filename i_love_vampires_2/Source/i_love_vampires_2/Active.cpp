#include "Active.h"
#include "Engine/AssetManager.h"
#include "Definitions.h"
#include "Combatant.h"
#include "GameFramework/Pawn.h"
#include "unrealHelpers.h"
#include "helpers.h"

void Active::tick(float delta, const FVector& forwardVector) {
	if (!_owner.IsValid()) {
		return;
	}
	//If this is performance intensive I can change the trigger to onAttributeChanged
	_factory->tick(delta);
	
	updateWarmup(delta);
	if (_chargeRatio >= 1) {
		activate(forwardVector);
		_chargeRatio = 0;
	}

	// This class does not have a dedicated attribute set because the overhead is too intense, so it's handled here
	for (int i = 0; i < _statusEffects.Num(); i += 0) {
		_statusEffects[i]._duration -= delta;
		if (_statusEffects[i]._duration <= -EPSILON) {
			_statusEffects.RemoveAt(i);
		}
		else {
			i++;
		}
	}
}

UWeaponTemplate* Active::getDiskTemplate() const {
	UDynamicAssetManager* manager = nullptr;
	if (!MyGameplayStatics::getDynamicAssetManager(_owner.Get(), manager)) {
		LOGERROR("Active::getDiskTemplate - failed to get dynamic asset manager");
		return nullptr;
	}
	return manager->getKey(_weaponTemplate.Get());
}

bool Active::hasStatus(EStatus status) const {
	for (const auto& effect : _statusEffects) {
		if (effect._type == status)
			return true;
	}
	return false;
}

bool Active::operator==(UWeaponTemplate* other) const {
	return getDiskTemplate() == other;
}

void Active::updateWarmup(float delta) {
	if (!_owner.IsValid())
		return;
	const float newAttackSpeed = _owner->getAttributeMember(&CombatantAttributes::_attackSpeed);
	const float baseWarmup = _weaponTemplate->_warmup;
	float newWarmup = baseWarmup * (1.0f / newAttackSpeed);
	if (hasStatus(_CHILL)) {
		newWarmup *= 1 + _statusEffects[0]._magnitude / 100;
	}
	const float timeSinceLastActivation = _chargeRatio * newWarmup + delta;
	_chargeRatio = timeSinceLastActivation / newWarmup;
}

void Active::activate(const FVector& forward) {
	_factory->launchAttack(forward);
}

Active::Active(ACombatant* owner, const UWeaponTemplate* rawData) : _owner(owner), _weaponTemplate(rawData)
{
	if (!IsValid(owner) || !IsValid(rawData)) {
		LOGERROR("Active::Active - invalid parameters");
		return;
	}
	_factory = std::move(rawData->_attackData->createFactory(_owner.Get()));
	//warmup
	_chargeRatio = _weaponTemplate->_startOnCooldown ? 0 : 1;
}

//template stuff
Active::Active(Active&& other) :
	_chargeRatio(other._chargeRatio),
	_factory(std::move(other._factory)),
	_owner(other._owner),
	_weaponTemplate(other._weaponTemplate)
{
	other._owner = nullptr;
	other._weaponTemplate = nullptr;
}

Active& Active::operator=(Active&& other) {
	if (this != &other) {
		_chargeRatio = other._chargeRatio;
		_factory = std::move(other._factory);
		_owner = other._owner;
		_weaponTemplate = other._weaponTemplate;
		other._owner = nullptr;
		other._weaponTemplate = nullptr;
	}
	return *this;
}

void UWeaponTemplate::replaceOverrides() {
	if (unrealHelpers::isInvalidData(_name))
		_name = _defaults._name;
	if (helpers::isInvalidData(_warmup))
		_warmup = _defaults._warmup;
}

void Active::inflictStatus(const FEffectStruct& status) {
	if (status._type == _CHILL) {
		_statusEffects.Add(status);
	}
	_factory->inflictStatus(status);
}