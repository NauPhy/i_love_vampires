#include "BaseAttributes.h"
#include "EffectStruct.h"
#include "Kismet/KismetMathLibrary.h"
#include "Combatant.h"
#include "Definitions.h"

void Stat::discretize() {
	float rng = FMath::FRand();
	float value = getFinal();
	_final = rng < value ? ceil(value) : floor(value);
}
void Stat::modify(float newVal) {
	if (!_softReset)
		LOGERROR("Stat::modify - modifying a stat that hasn't been soft reset this frame");
	_final = newVal;
	_softReset = false;
}
Stat::Stat() : _final(0), _base(0), _prebonus(0), _postbonus(0), _multiplier(0), _offset(0) {
	LOGERROR("Stat::Stat() - default constructor called, this should never happen");
}

void BaseAttributes::tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects, const CombatantAttributes* modifiers) {
	applyToAllStats(Stat::softReset);
	modifyAttributes(modifiers);
	for (const auto& status : statusEffects) {
		applyStatus(context, status, delta);
	}
}
void BaseAttributes::tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects) {
	applyToAllStats(Stat::softReset);
	for (const auto& status : statusEffects) {
		applyStatus(context, status, delta);
	}
}
