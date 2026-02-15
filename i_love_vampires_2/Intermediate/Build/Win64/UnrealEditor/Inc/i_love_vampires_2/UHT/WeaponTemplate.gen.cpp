// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/WeaponTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startOnCooldown_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_warmup_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasProjectileData_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWeaponTemplate constinit property declarations *******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static void NewProp_startOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_startOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_warmup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static void NewProp_hasProjectileData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasProjectileData;
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
void Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_startOnCooldown_SetBit(void* Obj)
{
	((FWeaponTemplate*)Obj)->startOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_startOnCooldown = { "startOnCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponTemplate), &Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_startOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startOnCooldown_MetaData), NewProp_startOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_warmup = { "warmup", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, warmup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_warmup_MetaData), NewProp_warmup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponTemplate, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
void Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_hasProjectileData_SetBit(void* Obj)
{
	((FWeaponTemplate*)Obj)->hasProjectileData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_hasProjectileData = { "hasProjectileData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponTemplate), &Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_hasProjectileData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasProjectileData_MetaData), NewProp_hasProjectileData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_startOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_warmup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewProp_hasProjectileData,
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
		{ FWeaponTemplate::StaticStruct, Z_Construct_UScriptStruct_FWeaponTemplate_Statics::NewStructOps, TEXT("WeaponTemplate"),&Z_Registration_Info_UScriptStruct_FWeaponTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponTemplate), 4120927129U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_2208192557{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
