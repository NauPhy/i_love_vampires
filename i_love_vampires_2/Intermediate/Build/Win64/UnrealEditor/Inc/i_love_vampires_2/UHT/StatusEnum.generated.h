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
#define CURRENT_FILE_ID FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEnum_h

// ********** Begin Enum EStatus *******************************************************************
#define FOREACH_ENUM_ESTATUS(op) \
	op(EStatus::bleed) \
	op(EStatus::blind) \
	op(EStatus::burn) \
	op(EStatus::chill) \
	op(EStatus::damage) \
	op(EStatus::decay) \
	op(EStatus::decay_instant) \
	op(EStatus::execute) \
	op(EStatus::friendlyFire) \
	op(EStatus::healInstigator) \
	op(EStatus::instantDeath) \
	op(EStatus::poison) \
	op(EStatus::randomNegativePersistent) \
	op(EStatus::INVALID) 

enum class EStatus : uint8;
template<> struct TIsUEnumClass<EStatus> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EStatus>();
// ********** End Enum EStatus *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
