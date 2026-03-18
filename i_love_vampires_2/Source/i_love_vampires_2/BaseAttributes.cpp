#include "BaseAttributes.h"
#include "Definitions.h"
#include "Math/UnrealMathUtility.h"

UBaseAttributes* UBaseAttributes::getDiscretizedCopy(UObject* outer) const {
	LOGERROR("This is a \"virtual\" function");
	return DuplicateObject<UBaseAttributes>(this, outer, FName());
}

float UBaseAttributes::discretize(float value) {
	float rng = FMath::FRand();
	return rng < value ? ceil(value) : floor(value);
}