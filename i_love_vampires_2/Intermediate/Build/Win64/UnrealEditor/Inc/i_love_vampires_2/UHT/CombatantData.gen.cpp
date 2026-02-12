// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantData();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCombatantData ****************************************************
struct Z_Construct_UScriptStruct_FCombatantData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCombatantData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCombatantData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Non-attribute" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[] = {
		{ "Category", "Defense" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TSoftObjectPtr<UTexture2D> sprite;\n" },
#endif
		{ "ModuleRelativePath", "CombatantData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSoftObjectPtr<UTexture2D> sprite;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageReduction_flat_MetaData[] = {
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageReduction_percent_MetaData[] = {
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_healthRegen_flat_MetaData[] = {
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_healthRegen_percent_MetaData[] = {
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_critChance_MetaData[] = {
		{ "Category", "Offense" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_critMultiplier_MetaData[] = {
		{ "Category", "Offense" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attackSpeed_MetaData[] = {
		{ "Category", "Offense" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bonusBounces_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bonusPierce_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bonusProjectiles_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileSize_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AOESize_MetaData[] = {
		{ "Category", "AOE" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_contactDamage_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "CombatantData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHP_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exactly as mutable as the others in practice\n" },
#endif
		{ "ModuleRelativePath", "CombatantData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exactly as mutable as the others in practice" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCombatantData constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damageReduction_flat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damageReduction_percent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_healthRegen_flat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_healthRegen_percent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_critChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_critMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_attackSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bonusBounces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bonusPierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bonusProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_projectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_projectileSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AOESize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_contactDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCombatantData constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatantData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCombatantData_Statics
static_assert(std::is_polymorphic<FCombatantData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatantData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatantData;
class UScriptStruct* FCombatantData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatantData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatantData, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("CombatantData"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatantData.OuterSingleton;
	}

// ********** Begin ScriptStruct FCombatantData Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_maxHP = { "maxHP", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, maxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHP_MetaData), NewProp_maxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_damageReduction_flat = { "damageReduction_flat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, damageReduction_flat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageReduction_flat_MetaData), NewProp_damageReduction_flat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_damageReduction_percent = { "damageReduction_percent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, damageReduction_percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageReduction_percent_MetaData), NewProp_damageReduction_percent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_healthRegen_flat = { "healthRegen_flat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, healthRegen_flat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_healthRegen_flat_MetaData), NewProp_healthRegen_flat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_healthRegen_percent = { "healthRegen_percent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, healthRegen_percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_healthRegen_percent_MetaData), NewProp_healthRegen_percent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_critChance = { "critChance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_critChance_MetaData), NewProp_critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_critMultiplier = { "critMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_critMultiplier_MetaData), NewProp_critMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_attackSpeed = { "attackSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, attackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attackSpeed_MetaData), NewProp_attackSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_bonusBounces = { "bonusBounces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, bonusBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bonusBounces_MetaData), NewProp_bonusBounces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_bonusPierce = { "bonusPierce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, bonusPierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bonusPierce_MetaData), NewProp_bonusPierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_bonusProjectiles = { "bonusProjectiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, bonusProjectiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bonusProjectiles_MetaData), NewProp_bonusProjectiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_projectileSpeed = { "projectileSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, projectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileSpeed_MetaData), NewProp_projectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_projectileSize = { "projectileSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, projectileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileSize_MetaData), NewProp_projectileSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_AOESize = { "AOESize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, AOESize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AOESize_MetaData), NewProp_AOESize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_movementSpeed = { "movementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, movementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementSpeed_MetaData), NewProp_movementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_range_MetaData), NewProp_range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_contactDamage = { "contactDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, contactDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_contactDamage_MetaData), NewProp_contactDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_currentHP = { "currentHP", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantData, currentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHP_MetaData), NewProp_currentHP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatantData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_maxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_damageReduction_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_damageReduction_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_healthRegen_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_healthRegen_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_critMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_attackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_bonusBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_bonusPierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_bonusProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_projectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_projectileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_AOESize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_movementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_contactDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantData_Statics::NewProp_currentHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCombatantData Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatantData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CombatantData",
	Z_Construct_UScriptStruct_FCombatantData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantData_Statics::PropPointers),
	sizeof(FCombatantData),
	alignof(FCombatantData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatantData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatantData()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatantData.InnerSingleton, Z_Construct_UScriptStruct_FCombatantData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCombatantData.InnerSingleton);
}
// ********** End ScriptStruct FCombatantData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantData_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatantData::StaticStruct, Z_Construct_UScriptStruct_FCombatantData_Statics::NewStructOps, TEXT("CombatantData"),&Z_Registration_Info_UScriptStruct_FCombatantData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatantData), 2942298522U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantData_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantData_h__Script_i_love_vampires_2_3899775278{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantData_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantData_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
