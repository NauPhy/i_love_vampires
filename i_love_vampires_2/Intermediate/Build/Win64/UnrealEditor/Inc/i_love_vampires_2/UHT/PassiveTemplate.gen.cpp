// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/PassiveTemplate.h"
#include "GameplayEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePassiveTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierInfo();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For if using the modifiers directly doesn't work out\n//USTRUCT(BlueprintType)\n//struct I_LOVE_VAMPIRES_2_API FPassiveTemplate_Modifier\n//{\n//\x09GENERATED_USTRUCT_BODY()\n//\n//public:\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PassiveTemplate_Modifier\");\n//\x09""FName attributeName;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PassiveTemplate_Modifier\");\n//\x09""FGameplayModifierInfo modifierInfo;\n//};\n" },
#endif
		{ "ModuleRelativePath", "PassiveTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For if using the modifiers directly doesn't work out\nUSTRUCT(BlueprintType)\nstruct I_LOVE_VAMPIRES_2_API FPassiveTemplate_Modifier\n{\n      GENERATED_USTRUCT_BODY()\n\npublic:\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PassiveTemplate_Modifier\");\n      FName attributeName;\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PassiveTemplate_Modifier\");\n      FGameplayModifierInfo modifierInfo;\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "PassiveTemplate" },
		{ "ModuleRelativePath", "PassiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "PassiveTemplate" },
		{ "ModuleRelativePath", "PassiveTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_combatantAttributeModifiers_MetaData[] = {
		{ "Category", "PassiveTemplate" },
		{ "ModuleRelativePath", "PassiveTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPassiveTemplate constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_combatantAttributeModifiers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_combatantAttributeModifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_combatantAttributeModifiers;
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPassiveTemplate, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPassiveTemplate, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_combatantAttributeModifiers_ValueProp = { "combatantAttributeModifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGameplayModifierInfo, METADATA_PARAMS(0, nullptr) }; // 4221895908
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_combatantAttributeModifiers_Key_KeyProp = { "combatantAttributeModifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_combatantAttributeModifiers = { "combatantAttributeModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPassiveTemplate, combatantAttributeModifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_combatantAttributeModifiers_MetaData), NewProp_combatantAttributeModifiers_MetaData) }; // 4221895908
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_combatantAttributeModifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_combatantAttributeModifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewProp_combatantAttributeModifiers,
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
		{ FPassiveTemplate::StaticStruct, Z_Construct_UScriptStruct_FPassiveTemplate_Statics::NewStructOps, TEXT("PassiveTemplate"),&Z_Registration_Info_UScriptStruct_FPassiveTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPassiveTemplate), 283404556U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_203369098{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_PassiveTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
