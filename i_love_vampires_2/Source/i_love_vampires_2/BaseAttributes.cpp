#include "BaseAttributes.h"
#include "EffectStruct.h"
#include "Kismet/KismetMathLibrary.h"
#include "Combatant.h"
#include "Definitions.h"

void Stat::discretize() {
	float rng = FMath::FRand();
	float value = getFinal();
	_final = rng < (value-floor(value+EPSILON)) ? ceil(value-EPSILON) : floor(value+EPSILON);
}
void Stat::modify(float newVal) {
	if (!_softReset)
		LOGERROR("Stat::modify - modifying a stat that hasn't been soft reset this frame");
	_final = newVal;
	_softReset = false;
}

void BaseAttributes::tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects, const CombatantAttributes* modifiers) {
	applyToAllStats(Stat::softReset);
	modifyAttributes(modifiers);
	for (const auto& status : statusEffects) {
		applyStatus(context, status, delta);
	}
	applyToAllStats(Stat::calculateFinal);
}
void BaseAttributes::tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects) {
	applyToAllStats(Stat::softReset);
	for (const auto& status : statusEffects) {
		applyStatus(context, status, delta);
	}
	applyToAllStats(Stat::calculateFinal);
}
