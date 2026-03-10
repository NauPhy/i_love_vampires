// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/WeaponTemplate.h"
#include "i_love_vampires_2/EffectStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEffectStruct();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponTemplate ***************************************************
struct Z_Construct_UScriptStruct_FWeaponTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWeaponTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWeaponTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startOnCooldown_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__warmup_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critChance_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critMultiplier_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statusEffects_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hasProjectileData_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hasAOEData_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWeaponTemplate constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static void NewProp__startOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__startOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__warmup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp__statusEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__statusEffects;
	static void NewProp__hasProjectileData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__hasProjectileData;
	static void NewProp__hasAOEData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__hasAOEData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWeaponTemplate constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWeaponTemplate_Statics
static_assert(std::is_polymorphic<FWeaponTemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponTemplate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponTemplate;
class UScriptStruct* FWeaponTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponTemplate, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("WeaponTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FWeaponTemplate Property Definitions ******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
void Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__startOnCooldown_SetBit(void* Obj)
{
	((FWeaponTemplate*)Obj)->_startOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__startOnCooldown = { "_startOnCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponTemplate), &Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__startOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startOnCooldown_MetaData), NewProp__startOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__warmup = { "_warmup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, _warmup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__warmup_MetaData), NewProp__warmup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, _damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damage_MetaData), NewProp__damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__critChance = { "_critChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, _critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critChance_MetaData), NewProp__critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__critMultiplier = { "_critMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, _critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critMultiplier_MetaData), NewProp__critMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__statusEffects_Inner = { "_statusEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffectStruct, METADATA_PARAMS(0, nullptr) }; // 4244353823
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__statusEffects = { "_statusEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, _statusEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statusEffects_MetaData), NewProp__statusEffects_MetaData) }; // 4244353823
void Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasProjectileData_SetBit(void* Obj)
{
	((FWeaponTemplate*)Obj)->_hasProjectileData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasProjectileData = { "_hasProjectileData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponTemplate), &Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasProjectileData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hasProjectileData_MetaData), NewProp__hasProjectileData_MetaData) };
void Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasAOEData_SetBit(void* Obj)
{
	((FWeaponTemplate*)Obj)->_hasAOEData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasAOEData = { "_hasAOEData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponTemplate), &Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasAOEData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hasAOEData_MetaData), NewProp__hasAOEData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__startOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__warmup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__critMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__statusEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__statusEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasProjectileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp__hasAOEData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWeaponTemplate Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WeaponTemplate",
	Z_Construct_UScriptStruct_FWeaponTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponTemplate_Statics::PropPointers),
	sizeof(FWeaponTemplate),
	alignof(FWeaponTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponTemplate.InnerSingleton, Z_Construct_UScriptStruct_FWeaponTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWeaponTemplate.InnerSingleton);
}
// ********** End ScriptStruct FWeaponTemplate *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponTemplate::StaticStruct, Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewStructOps, TEXT("WeaponTemplate"),&Z_Registration_Info_UScriptStruct_FWeaponTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponTemplate), 3407588627U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_2666204215{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
