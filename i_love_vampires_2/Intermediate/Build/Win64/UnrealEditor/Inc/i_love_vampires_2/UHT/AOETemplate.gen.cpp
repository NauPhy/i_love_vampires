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
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOEShape();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__ID_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shape_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__duration_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "ModuleRelativePath", "AOETemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAOETemplate constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp__ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__duration;
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__ID = { "_ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, _ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__ID_MetaData), NewProp__ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, _shape), Z_Construct_UEnum_i_love_vampires_2_EAOEShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 1410619130
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__duration = { "_duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOETemplate, _duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__duration_MetaData), NewProp__duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAOETemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOETemplate_Statics::NewProp__duration,
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
		{ FAOETemplate::StaticStruct, Z_Construct_UScriptStruct_FAOETemplate_Statics::NewStructOps, TEXT("AOETemplate"),&Z_Registration_Info_UScriptStruct_FAOETemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAOETemplate), 2896696098U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_3438394549{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOETemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
