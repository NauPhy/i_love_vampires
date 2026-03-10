// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatantAttributeSetUEnum.h"

#ifdef I_LOVE_VAMPIRES_2_CombatantAttributeSetUEnum_generated_h
#error "CombatantAttributeSetUEnum.generated.h already included, missing '#pragma once' in CombatantAttributeSetUEnum.h"
#endif
#define I_LOVE_VAMPIRES_2_CombatantAttributeSetUEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSetUEnum_h

// ********** Begin Enum ECombatantAttribute *******************************************************
#define FOREACH_ENUM_ECOMBATANTATTRIBUTE(op) \
	op(ECombatantAttribute::maxHP) \
	op(ECombatantAttribute::currentHP) \
	op(ECombatantAttribute::damageReduction_flat) \
	op(ECombatantAttribute::damageReduction_percent) \
	op(ECombatantAttribute::healthRegen_flat) \
	op(ECombatantAttribute::healthRegen_percent) \
	op(ECombatantAttribute::critChance) \
	op(ECombatantAttribute::critMultiplier) \
	op(ECombatantAttribute::attackSpeed) \
	op(ECombatantAttribute::bonusBounces) \
	op(ECombatantAttribute::bonusPierce) \
	op(ECombatantAttribute::bonusProjectiles) \
	op(ECombatantAttribute::projectileSpeed) \
	op(ECombatantAttribute::projectileSize) \
	op(ECombatantAttribute::movementSpeed) \
	op(ECombatantAttribute::range) \
	op(ECombatantAttribute::contactDamage) \
	op(ECombatantAttribute::selfSize) \
	op(ECombatantAttribute::iFrameDuration) 

enum class ECombatantAttribute : uint8;
template<> struct TIsUEnumClass<ECombatantAttribute> { enum { Value = true }; };
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<ECombatantAttribute>();
// ********** End Enum ECombatantAttribute *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
