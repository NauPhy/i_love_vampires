#include "AttackActor.h"
#include "Combatant.h"
#include "StatusFactory.h"
#include "Definitions.h"

void AAttackActor::Tick(float delta) {}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef) {
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef, const UAttackData* data) {
	initialise_AAttackActor(pawnRef, data->_config, data->_attributes);
}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef, UAttackConfig* config, UAttackAttributes* attributes) {
	_config = DuplicateObject<UAttackConfig>(config, this);
	_attributes = DuplicateObject<UAttackAttributes>(attributes, this);
	initialise_AAttackActor(pawnRef);
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

template<typename castType>
bool AAttackActor::castConfig(castType*& ret) {
	if (_config == nullptr || !IsValid(_config)) {
		LOGERROR("AAttackActor::castConfig - not valid");
		return false;
	}
	ret = Cast<castType>(_config);
	if (ret == nullptr) {
		LOGERROR("AAttackActor::castConfig - cast failed");
		return false;
	}
	return true;
}
template<typename castType>
bool AAttackActor::castAttributes(castType*& ret) {
	if (_attributes == nullptr || !IsValid(_attributes)) {
		LOGERROR("AAttackActor::castConfig - not valid");
		return false;
	}
	ret = Cast<castType>(_attributes);
	if (ret == nullptr) {
		LOGERROR("AAttackActor::castConfig - cast failed");
		return false;
	}
	return true;
}

void UAttackAttributes::modifyAttributes(const UCombatantAttributes* modifiers, const UAttackAttributes* baseAttributes, UAttackAttributes* finalAttributes) {
	finalAttributes->_critChance = baseAttributes->_critChance + modifiers->_critChance;
	finalAttributes->_critMultiplier = baseAttributes->_critMultiplier + modifiers->_critMultiplier;
}