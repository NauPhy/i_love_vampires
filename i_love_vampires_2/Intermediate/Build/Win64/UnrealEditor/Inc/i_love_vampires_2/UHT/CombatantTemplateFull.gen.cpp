// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantTemplateFull.h"
#include "i_love_vampires_2/CombatantAttributes.h"
#include "i_love_vampires_2/CombatantConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantTemplateFull() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantAttributes();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantConfig();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantTemplateFull();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCombatantTemplateFull ********************************************
struct Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCombatantTemplateFull); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCombatantTemplateFull); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CombatantTemplateFull.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "FCombatantTemplateFull" },
		{ "ModuleRelativePath", "CombatantTemplateFull.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "FCombatantTemplateFull" },
		{ "ModuleRelativePath", "CombatantTemplateFull.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCombatantTemplateFull constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp__config;
	static const UECodeGen_Private::FStructPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCombatantTemplateFull constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatantTemplateFull>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics
static_assert(std::is_polymorphic<FCombatantTemplateFull>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatantTemplateFull cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatantTemplateFull;
class UScriptStruct* FCombatantTemplateFull::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantTemplateFull.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatantTemplateFull.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatantTemplateFull, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("CombatantTemplateFull"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatantTemplateFull.OuterSingleton;
	}

// ********** Begin ScriptStruct FCombatantTemplateFull Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplateFull, _config), Z_Construct_UScriptStruct_FCombatantConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) }; // 222888090
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplateFull, _attributes), Z_Construct_UScriptStruct_FCombatantAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) }; // 1264244631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCombatantTemplateFull Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CombatantTemplateFull",
	Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::PropPointers),
	sizeof(FCombatantTemplateFull),
	alignof(FCombatantTemplateFull),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatantTemplateFull()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantTemplateFull.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatantTemplateFull.InnerSingleton, Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCombatantTemplateFull.InnerSingleton);
}
// ********** End ScriptStruct FCombatantTemplateFull **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplateFull_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatantTemplateFull::StaticStruct, Z_Construct_UScriptStruct_FCombatantTemplateFull_Statics::NewStructOps, TEXT("CombatantTemplateFull"),&Z_Registration_Info_UScriptStruct_FCombatantTemplateFull, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatantTemplateFull), 562579163U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplateFull_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplateFull_h__Script_i_love_vampires_2_1336497432{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplateFull_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplateFull_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
