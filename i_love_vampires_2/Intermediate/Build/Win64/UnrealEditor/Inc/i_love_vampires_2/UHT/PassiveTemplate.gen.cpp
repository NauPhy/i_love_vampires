// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/PassiveTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePassiveTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPassiveTemplate **************************************************
struct Z_Construct_UScriptStruct_FPassiveTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPassiveTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPassiveTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PassiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "PassiveTemplate" },
		{ "ModuleRelativePath", "PassiveTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPassiveTemplate constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPassiveTemplate constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPassiveTemplate_Statics
static_assert(std::is_polymorphic<FPassiveTemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPassiveTemplate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPassiveTemplate;
class UScriptStruct* FPassiveTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPassiveTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPassiveTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveTemplate, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("PassiveTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FPassiveTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FPassiveTemplate Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPassiveTemplate, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp__name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPassiveTemplate Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PassiveTemplate",
	Z_Construct_UScriptStruct_FPassiveTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveTemplate_Statics::PropPointers),
	sizeof(FPassiveTemplate),
	alignof(FPassiveTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPassiveTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPassiveTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FPassiveTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPassiveTemplate.InnerSingleton, Z_Construct_UScriptStruct_FPassiveTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPassiveTemplate.InnerSingleton);
}
// ********** End ScriptStruct FPassiveTemplate ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPassiveTemplate::StaticStruct, Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewStructOps, TEXT("PassiveTemplate"),&Z_Registration_Info_UScriptStruct_FPassiveTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPassiveTemplate), 3113664499U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_3590933288{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
