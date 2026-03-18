#include "AttackActor.h"
#include "Definitions.h"
#include <type_traits>
#include "Combatant.h"
#include "StatusFactory.h"
#include "Kismet/KismetMathLibrary.h"

void AAttackFactory::shouldNotRunError() const {
	LOGERROR("UAttackFactory::shouldNotRunError - this should not run");
}

void AAttackActor::Tick(float delta) {}

void AAttackActor::initialise_AAttackActor(APawn* pawnRef, const UAttackConfig* config, const UAttackAttributes* attributes) {
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
	for (const FEffectStruct& tempStruct : _attackConfig->_statusEffects) {
		if (FMath::FRand() <= tempStruct._chance) {

			target->inflictStatus(StatusFactory::createStatusEffect(tempStruct));
		}
	}
	_effectedPawns.Add(TWeakObjectPtr<APawn>(Cast<APawn>(target)));
}

void AAttackActor::factoryInitQuery(AAttackFactory* factory) {
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

void AAttackFactory::initialise_AAttackFactory(APawn* pawnRef, const UAttackConfig* config, const UAttackAttributes* attributes) {
	_attackConfig = DuplicateObject<UAttackConfig>(config, this);
	_attackComponent = NewObject<UAttackComponent>(this);
	_attackComponent->initialise_UAttackComponent(attributes);
	_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
}

// This could just as easily (maybe even slightly more easily) be done with TSubclassOf<AAttackActor> in either AAttackFactory or UAttackConfig,
// but I'm more used to inheritance and this shit is really complicated.
void AAttackFactory::launchAttack(const FVector& forward) {
	AAttackActor* newAttack = spawnActor<AAttackActor>();
	if (newAttack == nullptr)
		return;
	newAttack->factoryInitQuery(this);
}

void AAttackFactory::initAttack(AAttackActor* attack) {
	if (!IsValid(attack)) {
		LOGERROR("AAttackFactory::initAttack - attack is not valid");
		return;
	}
	// This creates an unnecessary copy but imma roll with it
	attack->initialise_AAttackActor(_pawnRef.Get(), _attackConfig, _attackComponent->getDiscretizedFinal<UAttackAttributes>(this));
}
	


///////////////////////////////////////////////////////////////////////////////

bool UAttackFactoryTemplate::isValid() const {
	if (!IsValid(_attackConfig) || !IsValid(_attackAttributes)) {
		LOGERROR("UAttackFactoryTemplate::createAttackFactory - invalid");
		return false;
	}
	return true;
}
AAttackFactory* UAttackFactoryTemplate::createFactory(APawn* pawnRef, UObject* caller) const {
	if (!isValid())
		return nullptr;
	AAttackFactory* factory = NewObject<AAttackFactory>(caller);
	factory->initialise_AAttackFactory(pawnRef, _attackConfig, _attackAttributes);
	return factory;
}