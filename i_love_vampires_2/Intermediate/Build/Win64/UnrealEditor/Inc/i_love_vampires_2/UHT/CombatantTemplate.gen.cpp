// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ESprite();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCombatantTemplate ************************************************
struct Z_Construct_UScriptStruct_FCombatantTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCombatantTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCombatantTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CombatantTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sprite_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCombatantTemplate constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FBytePropertyParams NewProp__sprite_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__sprite;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__attributes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp__attributes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCombatantTemplate constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatantTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCombatantTemplate_Statics
static_assert(std::is_polymorphic<FCombatantTemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCombatantTemplate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatantTemplate;
class UScriptStruct* FCombatantTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatantTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatantTemplate, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("CombatantTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatantTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FCombatantTemplate Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplate, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__sprite_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__sprite = { "_sprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplate, _sprite), Z_Construct_UEnum_i_love_vampires_2_ESprite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sprite_MetaData), NewProp__sprite_MetaData) }; // 1816186303
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes_ValueProp = { "_attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes_Key_KeyProp = { "_attributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_i_love_vampires_2_ECombatantAttribute, METADATA_PARAMS(0, nullptr) }; // 3249018120
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplate, _attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) }; // 3249018120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatantTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__sprite_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCombatantTemplate Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CombatantTemplate",
	Z_Construct_UScriptStruct_FCombatantTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantTemplate_Statics::PropPointers),
	sizeof(FCombatantTemplate),
	alignof(FCombatantTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatantTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatantTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatantTemplate.InnerSingleton, Z_Construct_UScriptStruct_FCombatantTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCombatantTemplate.InnerSingleton);
}
// ********** End ScriptStruct FCombatantTemplate **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatantTemplate::StaticStruct, Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewStructOps, TEXT("CombatantTemplate"),&Z_Registration_Info_UScriptStruct_FCombatantTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatantTemplate), 3764530331U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_3648559158{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
