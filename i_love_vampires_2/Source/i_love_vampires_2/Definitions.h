#pragma once
#include "CoreMinimal.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

#define EPSILON 0.0001f
#define DEFAULT_SCREEN_WIDTH 1920
#define DEFAULT_SCREEN_HEIGHT 1080
#define DEFAULT_SCREEN_RATIO ((float)DEFAULT_SCREEN_WIDTH / (float)DEFAULT_SCREEN_HEIGHT)
//#define PI 3.14159265359f

void LOGERROR(const char* inputString);
void LOGWARNING(const char* inputString);