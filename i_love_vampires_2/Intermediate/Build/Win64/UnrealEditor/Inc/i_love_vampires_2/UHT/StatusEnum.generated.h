// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatusEnum.h"

#ifdef I_LOVE_VAMPIRES_2_StatusEnum_generated_h
#error "StatusEnum.generated.h already included, missing '#pragma once' in StatusEnum.h"
#endif
#define I_LOVE_VAMPIRES_2_StatusEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEnum_h

// ********** Begin Enum EStatusEffect *************************************************************
#define FOREACH_ENUM_ESTATUSEFFECT(op) \
	op(EStatusEffect::bleed) \
	op(EStatusEffect::burn) \
	op(EStatusEffect::max) 

enum class EStatusEffect : uint8;
template<> struct TIsUEnumClass<EStatusEffect> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EStatusEffect>();
// ********** End Enum EStatusEffect ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
