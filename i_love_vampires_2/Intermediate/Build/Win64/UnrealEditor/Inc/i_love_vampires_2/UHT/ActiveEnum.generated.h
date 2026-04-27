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
#define CURRENT_FILE_ID FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h

// ********** Begin Enum EActivationType ***********************************************************
#define FOREACH_ENUM_EACTIVATIONTYPE(op) \
	op(EActivationType::single) \
	op(EActivationType::burst) \
	op(EActivationType::INVALID) 

enum class EActivationType : uint8;
template<> struct TIsUEnumClass<EActivationType> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EActivationType>();
// ********** End Enum EActivationType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
