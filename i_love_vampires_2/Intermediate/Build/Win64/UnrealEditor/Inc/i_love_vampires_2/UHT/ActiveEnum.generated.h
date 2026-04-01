// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActiveEnum.h"

#ifdef I_LOVE_VAMPIRES_2_ActiveEnum_generated_h
#error "ActiveEnum.generated.h already included, missing '#pragma once' in ActiveEnum.h"
#endif
#define I_LOVE_VAMPIRES_2_ActiveEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h

// ********** Begin Enum EAttackType ***************************************************************
#define FOREACH_ENUM_EATTACKTYPE(op) \
	op(EAttackType::first) \
	op(EAttackType::INVALID) 

enum class EAttackType : uint8;
template<> struct TIsUEnumClass<EAttackType> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttackType>();
// ********** End Enum EAttackType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
