// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExplosiveProjectileConfig.h"
#include "i_love_vampires_2/AOEAttributes.h"
#include "i_love_vampires_2/AOEConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExplosiveProjectileConfig() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOEAttributes();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOEConfig();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FExplosiveProjectileConfig();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileConfig();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FExplosiveProjectileConfig ****************************************
struct Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FExplosiveProjectileConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FExplosiveProjectileConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectileConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosionConfig_MetaData[] = {
		{ "Category", "ExplosiveProjectileConfig" },
		{ "ModuleRelativePath", "ExplosiveProjectileConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosionAttributes_MetaData[] = {
		{ "Category", "ExplosiveProjectileConfig" },
		{ "ModuleRelativePath", "ExplosiveProjectileConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FExplosiveProjectileConfig constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp__explosionConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp__explosionAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FExplosiveProjectileConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExplosiveProjectileConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics
static_assert(std::is_polymorphic<FExplosiveProjectileConfig>() == std::is_polymorphic<FProjectileConfig>(), "USTRUCT FExplosiveProjectileConfig cannot be polymorphic unless super FProjectileConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig;
class UScriptStruct* FExplosiveProjectileConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExplosiveProjectileConfig, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("ExplosiveProjectileConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FExplosiveProjectileConfig Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::NewProp__explosionConfig = { "_explosionConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExplosiveProjectileConfig, _explosionConfig), Z_Construct_UScriptStruct_FAOEConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosionConfig_MetaData), NewProp__explosionConfig_MetaData) }; // 4214676676
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::NewProp__explosionAttributes = { "_explosionAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExplosiveProjectileConfig, _explosionAttributes), Z_Construct_UScriptStruct_FAOEAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosionAttributes_MetaData), NewProp__explosionAttributes_MetaData) }; // 3451436158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::NewProp__explosionConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::NewProp__explosionAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FExplosiveProjectileConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FProjectileConfig,
	&NewStructOps,
	"ExplosiveProjectileConfig",
	Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::PropPointers),
	sizeof(FExplosiveProjectileConfig),
	alignof(FExplosiveProjectileConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExplosiveProjectileConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig.InnerSingleton, Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig.InnerSingleton);
}
// ********** End ScriptStruct FExplosiveProjectileConfig ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExplosiveProjectileConfig::StaticStruct, Z_Construct_UScriptStruct_FExplosiveProjectileConfig_Statics::NewStructOps, TEXT("ExplosiveProjectileConfig"),&Z_Registration_Info_UScriptStruct_FExplosiveProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExplosiveProjectileConfig), 1689578102U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_2209904008{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
