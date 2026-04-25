// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AOEEnum.h"

#ifdef I_LOVE_VAMPIRES_2_AOEEnum_generated_h
#error "AOEEnum.generated.h already included, missing '#pragma once' in AOEEnum.h"
#endif
#define I_LOVE_VAMPIRES_2_AOEEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h

// ********** Begin Enum EAOEShape *****************************************************************
#define FOREACH_ENUM_EAOESHAPE(op) \
	op(EAOEShape::circle) \
	op(EAOEShape::arc) \
	op(EAOEShape::INVALID) 

enum class EAOEShape : uint8;
template<> struct TIsUEnumClass<EAOEShape> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAOEShape>();
// ********** End Enum EAOEShape *******************************************************************

// ********** Begin Enum EAOETargeting *************************************************************
#define FOREACH_ENUM_EAOETARGETING(op) \
	op(EAOETargeting::instigator) \
	op(EAOETargeting::random) \
	op(EAOETargeting::INVALID) 

enum class EAOETargeting : uint8;
template<> struct TIsUEnumClass<EAOETargeting> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAOETargeting>();
// ********** End Enum EAOETargeting ***************************************************************

// ********** Begin Enum EEffectApplication ********************************************************
#define FOREACH_ENUM_EEFFECTAPPLICATION(op) \
	op(EEffectApplication::once) \
	op(EEffectApplication::tick) \
	op(EEffectApplication::INVALID) 

enum class EEffectApplication : uint8;
template<> struct TIsUEnumClass<EEffectApplication> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EEffectApplication>();
// ********** End Enum EEffectApplication **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
