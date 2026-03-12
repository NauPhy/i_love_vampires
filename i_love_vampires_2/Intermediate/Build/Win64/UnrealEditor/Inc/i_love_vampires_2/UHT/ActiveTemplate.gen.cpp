// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ActiveTemplate.h"
#include "i_love_vampires_2/SubActiveTemplate.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActiveTemplate() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FActiveTemplate();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FSubActiveTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActiveTemplate ***************************************************
struct Z_Construct_UScriptStruct_FActiveTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActiveTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActiveTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ActiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sub_MetaData[] = {
		{ "Category", "ActiveTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//For UActive\n" },
#endif
		{ "ModuleRelativePath", "ActiveTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For UActive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "BaseStruct", "/Script/i_love_vampires_2.WeaponConfig" },
		{ "Category", "ActiveTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//For AAttackActor\n" },
#endif
		{ "ModuleRelativePath", "ActiveTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For AAttackActor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "BaseStruct", "/Script/i_love_vampires_2.WeaponAttributes" },
		{ "Category", "ActiveTemplate" },
		{ "ModuleRelativePath", "ActiveTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActiveTemplate constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp__sub;
	static const UECodeGen_Private::FStructPropertyParams NewProp__config;
	static const UECodeGen_Private::FStructPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FActiveTemplate constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActiveTemplate_Statics
static_assert(std::is_polymorphic<FActiveTemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FActiveTemplate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActiveTemplate;
class UScriptStruct* FActiveTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActiveTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveTemplate, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("ActiveTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FActiveTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FActiveTemplate Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveTemplate_Statics::NewProp__sub = { "_sub", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveTemplate, _sub), Z_Construct_UScriptStruct_FSubActiveTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sub_MetaData), NewProp__sub_MetaData) }; // 1119737183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveTemplate_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveTemplate, _config), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) }; // 3949785911
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveTemplate_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveTemplate, _attributes), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) }; // 3949785911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveTemplate_Statics::NewProp__sub,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveTemplate_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveTemplate_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FActiveTemplate Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ActiveTemplate",
	Z_Construct_UScriptStruct_FActiveTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveTemplate_Statics::PropPointers),
	sizeof(FActiveTemplate),
	alignof(FActiveTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActiveTemplate.InnerSingleton, Z_Construct_UScriptStruct_FActiveTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActiveTemplate.InnerSingleton);
}
// ********** End ScriptStruct FActiveTemplate *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveTemplate::StaticStruct, Z_Construct_UScriptStruct_FActiveTemplate_Statics::NewStructOps, TEXT("ActiveTemplate"),&Z_Registration_Info_UScriptStruct_FActiveTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveTemplate), 219132246U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveTemplate_h__Script_i_love_vampires_2_2674217280{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
