// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpriteManagerUEnum.h"

#ifdef I_LOVE_VAMPIRES_2_SpriteManagerUEnum_generated_h
#error "SpriteManagerUEnum.generated.h already included, missing '#pragma once' in SpriteManagerUEnum.h"
#endif
#define I_LOVE_VAMPIRES_2_SpriteManagerUEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteManagerUEnum_h

// ********** Begin Enum ESprite *******************************************************************
#define FOREACH_ENUM_ESPRITE(op) \
	op(ESprite::testPlayer) \
	op(ESprite::testEnemy) \
	op(ESprite::testBullet) \
	op(ESprite::testShard) 

enum class ESprite : uint8;
template<> struct TIsUEnumClass<ESprite> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<ESprite>();
// ********** End Enum ESprite *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
