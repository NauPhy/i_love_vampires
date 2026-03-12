// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/WeaponAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponAttributes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAttributes();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponAttributes *************************************************
struct Z_Construct_UScriptStruct_FWeaponAttributes_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWeaponAttributes); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWeaponAttributes); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "WeaponAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_critChance_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "WeaponAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_critMultiplier_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "WeaponAttributes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWeaponAttributes constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_critChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_critMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWeaponAttributes constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWeaponAttributes_Statics
static_assert(std::is_polymorphic<FWeaponAttributes>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWeaponAttributes cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponAttributes;
class UScriptStruct* FWeaponAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAttributes, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("WeaponAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponAttributes.OuterSingleton;
	}

// ********** Begin ScriptStruct FWeaponAttributes Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAttributes, damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damage_MetaData), NewProp_damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_critChance = { "critChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAttributes, critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_critChance_MetaData), NewProp_critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_critMultiplier = { "critMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponAttributes, critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_critMultiplier_MetaData), NewProp_critMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewProp_critMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWeaponAttributes Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"WeaponAttributes",
	Z_Construct_UScriptStruct_FWeaponAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::PropPointers),
	sizeof(FWeaponAttributes),
	alignof(FWeaponAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponAttributes.InnerSingleton, Z_Construct_UScriptStruct_FWeaponAttributes_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWeaponAttributes.InnerSingleton);
}
// ********** End ScriptStruct FWeaponAttributes ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponAttributes_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponAttributes::StaticStruct, Z_Construct_UScriptStruct_FWeaponAttributes_Statics::NewStructOps, TEXT("WeaponAttributes"),&Z_Registration_Info_UScriptStruct_FWeaponAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponAttributes), 4094864289U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponAttributes_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponAttributes_h__Script_i_love_vampires_2_829613077{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
