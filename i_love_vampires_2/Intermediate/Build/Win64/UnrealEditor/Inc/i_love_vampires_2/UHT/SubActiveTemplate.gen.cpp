// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/SubActiveTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSubActiveTemplate() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FSubActiveTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSubActiveTemplate ************************************************
struct Z_Construct_UScriptStruct_FSubActiveTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSubActiveTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSubActiveTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SubActiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "ActiveTemplate" },
		{ "ModuleRelativePath", "SubActiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackActorClass_MetaData[] = {
		{ "Category", "ActiveTemplate" },
		{ "ModuleRelativePath", "SubActiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startOnCooldown_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "SubActiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_warmup_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "SubActiveTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSubActiveTemplate constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FClassPropertyParams NewProp__attackActorClass;
	static void NewProp__startOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__startOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_warmup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSubActiveTemplate constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubActiveTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSubActiveTemplate_Statics
static_assert(std::is_polymorphic<FSubActiveTemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSubActiveTemplate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSubActiveTemplate;
class UScriptStruct* FSubActiveTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSubActiveTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSubActiveTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubActiveTemplate, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("SubActiveTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FSubActiveTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FSubActiveTemplate Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubActiveTemplate, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__attackActorClass = { "_attackActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubActiveTemplate, _attackActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AAttackActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackActorClass_MetaData), NewProp__attackActorClass_MetaData) };
void Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__startOnCooldown_SetBit(void* Obj)
{
	((FSubActiveTemplate*)Obj)->_startOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__startOnCooldown = { "_startOnCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSubActiveTemplate), &Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__startOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startOnCooldown_MetaData), NewProp__startOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp_warmup = { "warmup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubActiveTemplate, warmup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_warmup_MetaData), NewProp_warmup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__attackActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp__startOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewProp_warmup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSubActiveTemplate Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SubActiveTemplate",
	Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::PropPointers),
	sizeof(FSubActiveTemplate),
	alignof(FSubActiveTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubActiveTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FSubActiveTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSubActiveTemplate.InnerSingleton, Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSubActiveTemplate.InnerSingleton);
}
// ********** End ScriptStruct FSubActiveTemplate **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SubActiveTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubActiveTemplate::StaticStruct, Z_Construct_UScriptStruct_FSubActiveTemplate_Statics::NewStructOps, TEXT("SubActiveTemplate"),&Z_Registration_Info_UScriptStruct_FSubActiveTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubActiveTemplate), 1119737183U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SubActiveTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SubActiveTemplate_h__Script_i_love_vampires_2_1938883290{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SubActiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SubActiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
