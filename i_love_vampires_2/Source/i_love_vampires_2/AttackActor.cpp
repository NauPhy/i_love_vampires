#include "AttackActor.h"
#include "Definitions.h"

#include "Combatant.h"
#include "StatusFactory.h"

void AAttackActor::Tick(float delta) {}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef, UAttackConfig* config, UAttackAttributes* attributes) {
	_attackConfig = DuplicateObject<UAttackConfig>(config, this);
	_attackAttributes = DuplicateObject<UAttackAttributes>(attributes, this);
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
}

void AAttackActor::applyEffect(ACombatant* target) {
	if (_pawnRef.IsValid())
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

void AAttackActor::factoryInitQuery(const UAttackFactory* factory) {
	if (!IsValid(factory)) {
		LOGERROR("AAttackActor::factoryInitQuery - not valid");
		return;
	}
	factory->initAttack(this);
}
///////////////////////////////////////////////////////////////////////////////

void UAttackAttributes::modifyAttributes(const UCombatantAttributes* modifiers, const UAttackAttributes* baseAttributes, UAttackAttributes* finalAttributes) {
	finalAttributes->_critChance = baseAttributes->_critChance + modifiers->_critChance;
	finalAttributes->_critMultiplier = baseAttributes->_critMultiplier + modifiers->_critMultiplier;
}
///////////////////////////////////////////////////////////////////////////////

void UAttackFactory::initialise_UAttackFactory(APawn* pawnRef, const UAttackConfig* config, const UAttackAttributes* attributes) {
	_attackConfig = DuplicateObject<UAttackConfig>(config, this);
	_attackComponent = NewObject<UAttackComponent>(this);
	_attackComponent->initialise_UAttackComponent(attributes);
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
}

///////////////////////////////////////////////////////////////////////////////

bool UAttackFactoryTemplate::isValid() const {
	if (!IsValid(_attackConfig) || !IsValid(_attackAttributes)) {
		LOGERROR("UAttackFactoryTemplate::createAttackFactory - invalid");
		return false;
	}
	return true;
}
UAttackFactory* UAttackFactoryTemplate::createFactory(APawn* pawnRef, const UObject* caller) const {
	if (!isValid())
		return nullptr;
	UAttackFactory* factory = NewObject<UAttackFactory>(caller);
	factory->initialise_UAttackFactory(pawnRef, _attackConfig, _attackAttributes);
	return factory;
}