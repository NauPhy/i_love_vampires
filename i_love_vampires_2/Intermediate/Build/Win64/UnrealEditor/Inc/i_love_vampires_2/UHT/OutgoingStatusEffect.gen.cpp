// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/OutgoingStatusEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOutgoingStatusEffect() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EStatusEffect();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FOutgoingStatusEffect();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOutgoingStatusEffect *********************************************
struct Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOutgoingStatusEffect); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOutgoingStatusEffect); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OutgoingStatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "OutgoingStatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chance_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "OutgoingStatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_magnitude_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "OutgoingStatusEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "OutgoingStatusEffect.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOutgoingStatusEffect constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_chance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOutgoingStatusEffect constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutgoingStatusEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect;
class UScriptStruct* FOutgoingStatusEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutgoingStatusEffect, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("OutgoingStatusEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect.OuterSingleton;
	}

// ********** Begin ScriptStruct FOutgoingStatusEffect Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutgoingStatusEffect, type), Z_Construct_UEnum_i_love_vampires_2_EStatusEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) }; // 1052355698
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_chance = { "chance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutgoingStatusEffect, chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chance_MetaData), NewProp_chance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_magnitude = { "magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutgoingStatusEffect, magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_magnitude_MetaData), NewProp_magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutgoingStatusEffect, duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_duration_MetaData), NewProp_duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_chance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewProp_duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOutgoingStatusEffect Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	&NewStructOps,
	"OutgoingStatusEffect",
	Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::PropPointers),
	sizeof(FOutgoingStatusEffect),
	alignof(FOutgoingStatusEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOutgoingStatusEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect.InnerSingleton, Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect.InnerSingleton);
}
// ********** End ScriptStruct FOutgoingStatusEffect ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_OutgoingStatusEffect_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOutgoingStatusEffect::StaticStruct, Z_Construct_UScriptStruct_FOutgoingStatusEffect_Statics::NewStructOps, TEXT("OutgoingStatusEffect"),&Z_Registration_Info_UScriptStruct_FOutgoingStatusEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutgoingStatusEffect), 2778772122U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_OutgoingStatusEffect_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_OutgoingStatusEffect_h__Script_i_love_vampires_2_613965219{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_OutgoingStatusEffect_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_OutgoingStatusEffect_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
