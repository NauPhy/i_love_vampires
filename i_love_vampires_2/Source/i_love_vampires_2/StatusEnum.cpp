#include "StatusEnum.h"
#include "EffectStruct.h"

FEffectStruct StatusStatics::getRandomNegativePersistentEffect(float magnitude, float duration) {
	EStatus type;
	float actualMagnitude = 0;
	int rand = FMath::RandRange(0, 5);
	switch (rand) {
	case 0:
		type = EStatus::bleed;
		actualMagnitude = magnitude * 5;
		break;
	case 1:
		type = EStatus::burn;
		actualMagnitude = magnitude * 0.05;
		break;
	case 2:
		type = EStatus::poison;
		actualMagnitude = magnitude * 3;
		break;
	case 3:
		type = EStatus::blind;
		actualMagnitude = 1;
		break;
	case 4:
		type = EStatus::chill;
		actualMagnitude = magnitude * 0.1;
		if (actualMagnitude > 1)
			actualMagnitude = 1;
		break;
	case 5:
		type = EStatus::decay;
		actualMagnitude = magnitude * 0.08;
		break;
	default:
		type = EStatus::INVALID;
	}
	return FEffectStruct(type, actualMagnitude, duration, 1);
}