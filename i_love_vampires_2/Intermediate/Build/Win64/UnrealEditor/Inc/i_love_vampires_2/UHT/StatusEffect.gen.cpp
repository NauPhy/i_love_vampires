// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/StatusEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStatusEffect() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EStatusEffect();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffect();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FStatusEffect *****************************************************
struct Z_Construct_UScriptStruct_FStatusEffect_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FStatusEffect); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStatusEffect); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "StatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "StatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chance_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "StatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_magnitude_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "StatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "StatusEffect.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStatusEffect constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_chance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStatusEffect constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FStatusEffect_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStatusEffect;
class UScriptStruct* FStatusEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStatusEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStatusEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusEffect, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("StatusEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FStatusEffect.OuterSingleton;
	}

// ********** Begin ScriptStruct FStatusEffect Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatusEffect, type), Z_Construct_UEnum_i_love_vampires_2_EStatusEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) }; // 640858373
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_chance = { "chance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatusEffect, chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chance_MetaData), NewProp_chance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_magnitude = { "magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatusEffect, magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_magnitude_MetaData), NewProp_magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatusEffect, duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_duration_MetaData), NewProp_duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatusEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_chance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FStatusEffect Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	&NewStructOps,
	"StatusEffect",
	Z_Construct_UScriptStruct_FStatusEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::PropPointers),
	sizeof(FStatusEffect),
	alignof(FStatusEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatusEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatusEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FStatusEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStatusEffect.InnerSingleton, Z_Construct_UScriptStruct_FStatusEffect_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStatusEffect.InnerSingleton);
}
// ********** End ScriptStruct FStatusEffect *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatusEffect::StaticStruct, Z_Construct_UScriptStruct_FStatusEffect_Statics::NewStructOps, TEXT("StatusEffect"),&Z_Registration_Info_UScriptStruct_FStatusEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatusEffect), 3899883765U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_h__Script_i_love_vampires_2_2085802026{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
