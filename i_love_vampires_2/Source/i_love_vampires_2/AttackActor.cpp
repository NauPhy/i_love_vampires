#include "AttackActor.h"
#include "Combatant.h"
#include "StatusFactory.h"
#include "Definitions.h"

void AAttackActor::Tick(float delta) {}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef) {
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef, const FWeaponConfig& config, const FWeaponAttributes& attributes) {
	initialise_AAttackActor(pawnRef);
	_config = MakeUnique<FWeaponConfig>(config);
	_attributes = MakeUnique<FWeaponAttributes>(attributes);
}

void AAttackActor::applyEffect(ACombatant* target) {
	if (_pawnRef.Get() != nullptr)
		if (target == _pawnRef.Get())
			return;
	for (auto i = _effectedPawns.Num() - 1; i > -1; i--)
	{
		APawn* tempPawn = _effectedPawns[i].Get();
		if (tempPawn == nullptr)
		{
			_effectedPawns.RemoveAt(i);
		}
		else if (tempPawn == target)
		{
			return;
		}
	}
	// Chance is included in the newly created effect, just in case
	for (const FEffectStruct& tempStruct : _config->_statusEffects) {
		if (FMath::FRand() <= tempStruct._chance) {

			target->inflictStatus(StatusFactory::createStatusEffect(tempStruct));
		}
	}
	_effectedPawns.Add(TWeakObjectPtr<APawn>(Cast<APawn>(target)));
}

template<typename configType>
bool AAttackActor::castConfig(configType*& ret) {
	if (!_config.IsValid()) {
		LOGERROR("AAttackActor::castConfig - not valid");
		return false;
	}
	ret = Cast<configType>(_config);
	if (ret == nullptr) {
		LOGERROR("AAttackActor::castConfig - cast failed");
		return false;
	}
	return true;
}

template<typename attributeType>
bool AAttackActor::castAttribute(attributeType*& ret) {
	if (!_attributes.IsValid()) {
		LOGERROR("AAttackActor::castAttribute - not valid");
		return false;
	}
	ret = Cast<attributeType>(_attributes);
	if (ret == nullptr) {
		LOGERROR("AAttackActor::castAttribute - cast failed");
		return false;
	}
	return true;
}