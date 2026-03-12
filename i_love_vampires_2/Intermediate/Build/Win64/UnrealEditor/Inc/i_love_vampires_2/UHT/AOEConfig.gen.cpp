// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AOEConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAOEConfig() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOEShape();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOEConfig();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponConfig();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAOEConfig ********************************************************
struct Z_Construct_UScriptStruct_FAOEConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAOEConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAOEConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AOEConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shape_MetaData[] = {
		{ "Category", "AOEConfig" },
		{ "ModuleRelativePath", "AOEConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAOEConfig constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAOEConfig constinit property declarations **************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAOEConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAOEConfig_Statics
static_assert(std::is_polymorphic<FAOEConfig>() == std::is_polymorphic<FWeaponConfig>(), "USTRUCT FAOEConfig cannot be polymorphic unless super FWeaponConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAOEConfig;
class UScriptStruct* FAOEConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAOEConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAOEConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAOEConfig, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("AOEConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FAOEConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FAOEConfig Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAOEConfig_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAOEConfig_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOEConfig, _shape), Z_Construct_UEnum_i_love_vampires_2_EAOEShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 2987453624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAOEConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOEConfig_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOEConfig_Statics::NewProp__shape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOEConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAOEConfig Property Definitions *************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAOEConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FWeaponConfig,
	&NewStructOps,
	"AOEConfig",
	Z_Construct_UScriptStruct_FAOEConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOEConfig_Statics::PropPointers),
	sizeof(FAOEConfig),
	alignof(FAOEConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOEConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAOEConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAOEConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FAOEConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAOEConfig.InnerSingleton, Z_Construct_UScriptStruct_FAOEConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAOEConfig.InnerSingleton);
}
// ********** End ScriptStruct FAOEConfig **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAOEConfig::StaticStruct, Z_Construct_UScriptStruct_FAOEConfig_Statics::NewStructOps, TEXT("AOEConfig"),&Z_Registration_Info_UScriptStruct_FAOEConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAOEConfig), 4214676676U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_2778878886{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
