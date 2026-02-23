// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AOETemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAOETemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOETemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAOETemplate ******************************************************
struct Z_Construct_UScriptStruct_FAOETemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAOETemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAOETemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shape_MetaData[] = {
		{ "Category", "AOETemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0 is circle\n" },
#endif
		{ "ModuleRelativePath", "AOETemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 is circle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAOETemplate constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAOETemplate constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAOETemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAOETemplate_Statics
static_assert(std::is_polymorphic<FAOETemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAOETemplate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAOETemplate;
class UScriptStruct* FAOETemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAOETemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAOETemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAOETemplate, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("AOETemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FAOETemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FAOETemplate Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, shape), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shape_MetaData), NewProp_shape_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radius_MetaData), NewProp_radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_duration_MetaData), NewProp_duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAOETemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp_duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOETemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAOETemplate Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAOETemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AOETemplate",
	Z_Construct_UScriptStruct_FAOETemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOETemplate_Statics::PropPointers),
	sizeof(FAOETemplate),
	alignof(FAOETemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOETemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAOETemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAOETemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FAOETemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAOETemplate.InnerSingleton, Z_Construct_UScriptStruct_FAOETemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAOETemplate.InnerSingleton);
}
// ********** End ScriptStruct FAOETemplate ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAOETemplate::StaticStruct, Z_Construct_UScriptStruct_FAOETemplate_Statics::NewStructOps, TEXT("AOETemplate"),&Z_Registration_Info_UScriptStruct_FAOETemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAOETemplate), 2339361029U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_1273205633{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
