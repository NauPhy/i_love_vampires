// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/WeaponConfig.h"
#include "i_love_vampires_2/EffectStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEffectStruct();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponConfig();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponConfig *****************************************************
struct Z_Construct_UScriptStruct_FWeaponConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWeaponConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWeaponConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statusEffects_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "WeaponConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWeaponConfig constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp__statusEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__statusEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWeaponConfig constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWeaponConfig_Statics
static_assert(std::is_polymorphic<FWeaponConfig>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponConfig cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponConfig;
class UScriptStruct* FWeaponConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponConfig, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("WeaponConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FWeaponConfig Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponConfig_Statics::NewProp__statusEffects_Inner = { "_statusEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffectStruct, METADATA_PARAMS(0, nullptr) }; // 3838480815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponConfig_Statics::NewProp__statusEffects = { "_statusEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponConfig, _statusEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statusEffects_MetaData), NewProp__statusEffects_MetaData) }; // 3838480815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponConfig_Statics::NewProp__statusEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponConfig_Statics::NewProp__statusEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWeaponConfig Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WeaponConfig",
	Z_Construct_UScriptStruct_FWeaponConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponConfig_Statics::PropPointers),
	sizeof(FWeaponConfig),
	alignof(FWeaponConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponConfig.InnerSingleton, Z_Construct_UScriptStruct_FWeaponConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWeaponConfig.InnerSingleton);
}
// ********** End ScriptStruct FWeaponConfig *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponConfig::StaticStruct, Z_Construct_UScriptStruct_FWeaponConfig_Statics::NewStructOps, TEXT("WeaponConfig"),&Z_Registration_Info_UScriptStruct_FWeaponConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponConfig), 2392470574U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_3252350412{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
