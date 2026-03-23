#include "BaseAttributes.h"
#include "StatusEffect.h"
#include "Kismet/KismetMathLibrary.h"

void Stat::discretize() {
	float rng = FMath::FRand();
	float value = getFinal();
	_final = rng < value ? ceil(value) : floor(value);
}