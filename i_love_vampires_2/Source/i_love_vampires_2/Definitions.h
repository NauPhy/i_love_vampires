#pragma once
#include "CoreMinimal.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

#define HAS_METHOD(T, METHOD, ...) \
    requires(T t) { t.METHOD(std::declval<__VA_ARGS__>()...); }

#define EPSILON 0.0001f
#define DEFAULT_SCREEN_WIDTH 1920
#define DEFAULT_SCREEN_HEIGHT 1080
#define DEFAULT_SCREEN_RATIO ((float)DEFAULT_SCREEN_WIDTH / (float)DEFAULT_SCREEN_HEIGHT)
#define SPRITE_SCALE 1.0f
#define SPRITE_RADIUS 16.0f
#define SENTINEL_FLOAT -999.0f
//#define PI 3.14159265359f

void LOGERROR(const char* inputString);
void LOGWARNING(const char* inputString);