// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileEnum.h"

#ifdef I_LOVE_VAMPIRES_2_ProjectileEnum_generated_h
#error "ProjectileEnum.generated.h already included, missing '#pragma once' in ProjectileEnum.h"
#endif
#define I_LOVE_VAMPIRES_2_ProjectileEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileEnum_h

// ********** Begin Enum EProjectileShape **********************************************************
#define FOREACH_ENUM_EPROJECTILESHAPE(op) \
	op(EProjectileShape::circle) \
	op(EProjectileShape::INVALID) 

enum class EProjectileShape : uint8;
template<> struct TIsUEnumClass<EProjectileShape> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileShape>();
// ********** End Enum EProjectileShape ************************************************************

// ********** Begin Enum EAttackShape **************************************************************
#define FOREACH_ENUM_EATTACKSHAPE(op) \
	op(EAttackShape::fan) \
	op(EAttackShape::random) \
	op(EAttackShape::INVALID) 

enum class EAttackShape : uint8;
template<> struct TIsUEnumClass<EAttackShape> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttackShape>();
// ********** End Enum EAttackShape ****************************************************************

// ********** Begin Enum EProjectileTargeting ******************************************************
#define FOREACH_ENUM_EPROJECTILETARGETING(op) \
	op(EProjectileTargeting::skillshot) \
	op(EProjectileTargeting::closest) \
	op(EProjectileTargeting::random) \
	op(EProjectileTargeting::randomEnemy) \
	op(EProjectileTargeting::INVALID) 

enum class EProjectileTargeting : uint8;
template<> struct TIsUEnumClass<EProjectileTargeting> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileTargeting>();
// ********** End Enum EProjectileTargeting ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
