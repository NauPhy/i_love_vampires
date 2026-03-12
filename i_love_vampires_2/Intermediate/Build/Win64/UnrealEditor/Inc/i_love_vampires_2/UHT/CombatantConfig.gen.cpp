// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantConfig() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ESprite();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantConfig();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCombatantConfig **************************************************
struct Z_Construct_UScriptStruct_FCombatantConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCombatantConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCombatantConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CombatantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sprite_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startingWeapons_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCombatantConfig constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FBytePropertyParams NewProp__sprite_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__sprite;
	static const UECodeGen_Private::FNamePropertyParams NewProp__startingWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__startingWeapons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCombatantConfig constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatantConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCombatantConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatantConfig;
class UScriptStruct* FCombatantConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatantConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatantConfig, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("CombatantConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatantConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FCombatantConfig Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantConfig, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__sprite_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__sprite = { "_sprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantConfig, _sprite), Z_Construct_UEnum_i_love_vampires_2_ESprite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sprite_MetaData), NewProp__sprite_MetaData) }; // 3639681666
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__startingWeapons_Inner = { "_startingWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__startingWeapons = { "_startingWeapons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantConfig, _startingWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startingWeapons_MetaData), NewProp__startingWeapons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatantConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__sprite_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__startingWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewProp__startingWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCombatantConfig Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatantConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	&NewStructOps,
	"CombatantConfig",
	Z_Construct_UScriptStruct_FCombatantConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantConfig_Statics::PropPointers),
	sizeof(FCombatantConfig),
	alignof(FCombatantConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatantConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatantConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatantConfig.InnerSingleton, Z_Construct_UScriptStruct_FCombatantConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCombatantConfig.InnerSingleton);
}
// ********** End ScriptStruct FCombatantConfig ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatantConfig::StaticStruct, Z_Construct_UScriptStruct_FCombatantConfig_Statics::NewStructOps, TEXT("CombatantConfig"),&Z_Registration_Info_UScriptStruct_FCombatantConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatantConfig), 222888090U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantConfig_h__Script_i_love_vampires_2_584178630{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
