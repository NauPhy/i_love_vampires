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
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributeSet_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Deprecated in favour of DefinitionLookups.h\n//float getAttributeValue(const FGameplayAttribute& attribute) const;\n" },
#endif
		{ "ModuleRelativePath", "CombatantTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated in favour of DefinitionLookups.h\nfloat getAttributeValue(const FGameplayAttribute& attribute) const;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sprite_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
		{ "ModuleRelativePath", "CombatantTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attributes_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float maxHP;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float damageReduction_flat;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float damageReduction_percent;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float healthRegen_flat;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float healthRegen_percent;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float critChance;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float critMultiplier;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float attackSpeed;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float bonusBounces;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float bonusPierce;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float bonusProjectiles;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float projectileSpeed;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float projectileSize;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float AOESize;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float movementSpeed;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float range;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float contactDamage;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float selfSize;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n\x09""float iFrameDuration;*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CombatantTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float maxHP;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float damageReduction_flat;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float damageReduction_percent;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float healthRegen_flat;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float healthRegen_percent;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float critChance;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float critMultiplier;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float attackSpeed;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float bonusBounces;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float bonusPierce;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float bonusProjectiles;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float projectileSpeed;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float projectileSize;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float AOESize;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float movementSpeed;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float range;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float contactDamage;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float selfSize;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"A_CombatantAttribute\")\n       float iFrameDuration;" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCombatantTemplate constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_sprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_attributes;
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplate, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplate, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_sprite = { "sprite", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplate, sprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sprite_MetaData), NewProp_sprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_attributes = { "attributes", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantTemplate, attributes), Z_Construct_UClass_UCombatantAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attributes_MetaData), NewProp_attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatantTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewProp_attributes,
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
	EStructFlags(0x00000205),
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
		{ FCombatantTemplate::StaticStruct, Z_Construct_UScriptStruct_FCombatantTemplate_Statics::NewStructOps, TEXT("CombatantTemplate"),&Z_Registration_Info_UScriptStruct_FCombatantTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatantTemplate), 2814415407U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_2477493183{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
