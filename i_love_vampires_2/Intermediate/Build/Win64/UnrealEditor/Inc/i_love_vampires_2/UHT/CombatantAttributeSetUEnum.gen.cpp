// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantAttributeSetUEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantAttributeSetUEnum() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECombatantAttribute *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatantAttribute;
static UEnum* ECombatantAttribute_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatantAttribute.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatantAttribute.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("ECombatantAttribute"));
	}
	return Z_Registration_Info_UEnum_ECombatantAttribute.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<ECombatantAttribute>()
{
	return ECombatantAttribute_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "attackSpeed.DisplayName", "attackSpeed" },
		{ "attackSpeed.Name", "ECombatantAttribute::attackSpeed" },
		{ "BlueprintType", "true" },
		{ "bonusBounces.DisplayName", "bonusBounces" },
		{ "bonusBounces.Name", "ECombatantAttribute::bonusBounces" },
		{ "bonusPierce.DisplayName", "bonusPierce" },
		{ "bonusPierce.Name", "ECombatantAttribute::bonusPierce" },
		{ "bonusProjectiles.DisplayName", "bonusProjectiles" },
		{ "bonusProjectiles.Name", "ECombatantAttribute::bonusProjectiles" },
		{ "contactDamage.DisplayName", "contactDamage" },
		{ "contactDamage.Name", "ECombatantAttribute::contactDamage" },
		{ "critChance.DisplayName", "critChance" },
		{ "critChance.Name", "ECombatantAttribute::critChance" },
		{ "critMultiplier.DisplayName", "critMultiplier" },
		{ "critMultiplier.Name", "ECombatantAttribute::critMultiplier" },
		{ "currentHP.DisplayName", "currentHP" },
		{ "currentHP.Name", "ECombatantAttribute::currentHP" },
		{ "damageReduction_flat.DisplayName", "damageReduction_flat" },
		{ "damageReduction_flat.Name", "ECombatantAttribute::damageReduction_flat" },
		{ "damageReduction_percent.DisplayName", "damageReduction_percent" },
		{ "damageReduction_percent.Name", "ECombatantAttribute::damageReduction_percent" },
		{ "healthRegen_flat.DisplayName", "healthRegen_flat" },
		{ "healthRegen_flat.Name", "ECombatantAttribute::healthRegen_flat" },
		{ "healthRegen_percent.DisplayName", "healthRegen_percent" },
		{ "healthRegen_percent.Name", "ECombatantAttribute::healthRegen_percent" },
		{ "iFrameDuration.DisplayName", "iFrameDuration" },
		{ "iFrameDuration.Name", "ECombatantAttribute::iFrameDuration" },
		{ "maxHP.DisplayName", "maxHP" },
		{ "maxHP.Name", "ECombatantAttribute::maxHP" },
		{ "ModuleRelativePath", "CombatantAttributeSetUEnum.h" },
		{ "movementSpeed.DisplayName", "movementSpeed" },
		{ "movementSpeed.Name", "ECombatantAttribute::movementSpeed" },
		{ "projectileSize.DisplayName", "projectileSize" },
		{ "projectileSize.Name", "ECombatantAttribute::projectileSize" },
		{ "projectileSpeed.DisplayName", "projectileSpeed" },
		{ "projectileSpeed.Name", "ECombatantAttribute::projectileSpeed" },
		{ "range.DisplayName", "range" },
		{ "range.Name", "ECombatantAttribute::range" },
		{ "selfSize.DisplayName", "selfSize" },
		{ "selfSize.Name", "ECombatantAttribute::selfSize" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatantAttribute::maxHP", (int64)ECombatantAttribute::maxHP },
		{ "ECombatantAttribute::currentHP", (int64)ECombatantAttribute::currentHP },
		{ "ECombatantAttribute::damageReduction_flat", (int64)ECombatantAttribute::damageReduction_flat },
		{ "ECombatantAttribute::damageReduction_percent", (int64)ECombatantAttribute::damageReduction_percent },
		{ "ECombatantAttribute::healthRegen_flat", (int64)ECombatantAttribute::healthRegen_flat },
		{ "ECombatantAttribute::healthRegen_percent", (int64)ECombatantAttribute::healthRegen_percent },
		{ "ECombatantAttribute::critChance", (int64)ECombatantAttribute::critChance },
		{ "ECombatantAttribute::critMultiplier", (int64)ECombatantAttribute::critMultiplier },
		{ "ECombatantAttribute::attackSpeed", (int64)ECombatantAttribute::attackSpeed },
		{ "ECombatantAttribute::bonusBounces", (int64)ECombatantAttribute::bonusBounces },
		{ "ECombatantAttribute::bonusPierce", (int64)ECombatantAttribute::bonusPierce },
		{ "ECombatantAttribute::bonusProjectiles", (int64)ECombatantAttribute::bonusProjectiles },
		{ "ECombatantAttribute::projectileSpeed", (int64)ECombatantAttribute::projectileSpeed },
		{ "ECombatantAttribute::projectileSize", (int64)ECombatantAttribute::projectileSize },
		{ "ECombatantAttribute::movementSpeed", (int64)ECombatantAttribute::movementSpeed },
		{ "ECombatantAttribute::range", (int64)ECombatantAttribute::range },
		{ "ECombatantAttribute::contactDamage", (int64)ECombatantAttribute::contactDamage },
		{ "ECombatantAttribute::selfSize", (int64)ECombatantAttribute::selfSize },
		{ "ECombatantAttribute::iFrameDuration", (int64)ECombatantAttribute::iFrameDuration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"ECombatantAttribute",
	"ECombatantAttribute",
	Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute()
{
	if (!Z_Registration_Info_UEnum_ECombatantAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatantAttribute.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatantAttribute.InnerSingleton;
}
// ********** End Enum ECombatantAttribute *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSetUEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatantAttribute_StaticEnum, TEXT("ECombatantAttribute"), &Z_Registration_Info_UEnum_ECombatantAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3249018120U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSetUEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSetUEnum_h__Script_i_love_vampires_2_317673564{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSetUEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSetUEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
