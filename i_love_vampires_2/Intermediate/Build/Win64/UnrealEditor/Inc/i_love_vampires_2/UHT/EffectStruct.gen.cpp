// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/EffectStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEffectStruct() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EStatus();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEffectStruct();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEffectStruct *****************************************************
struct Z_Construct_UScriptStruct_FEffectStruct_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEffectStruct); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEffectStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EffectStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__type_MetaData[] = {
		{ "Category", "EffectStruct" },
		{ "ModuleRelativePath", "EffectStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__magnitude_MetaData[] = {
		{ "Category", "EffectStruct" },
		{ "ModuleRelativePath", "EffectStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__duration_MetaData[] = {
		{ "Category", "EffectStruct" },
		{ "ModuleRelativePath", "EffectStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__chance_MetaData[] = {
		{ "Category", "EffectStruct" },
		{ "ModuleRelativePath", "EffectStruct.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEffectStruct constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__chance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEffectStruct constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEffectStruct_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEffectStruct;
class UScriptStruct* FEffectStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEffectStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEffectStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectStruct, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EffectStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FEffectStruct.OuterSingleton;
	}

// ********** Begin ScriptStruct FEffectStruct Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectStruct, _type), Z_Construct_UEnum_i_love_vampires_2_EStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__type_MetaData), NewProp__type_MetaData) }; // 1380553772
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__magnitude = { "_magnitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectStruct, _magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__magnitude_MetaData), NewProp__magnitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__duration = { "_duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectStruct, _duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__duration_MetaData), NewProp__duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__chance = { "_chance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectStruct, _chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__chance_MetaData), NewProp__chance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectStruct_Statics::NewProp__chance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectStruct_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEffectStruct Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	&NewStructOps,
	"EffectStruct",
	Z_Construct_UScriptStruct_FEffectStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectStruct_Statics::PropPointers),
	sizeof(FEffectStruct),
	alignof(FEffectStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEffectStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEffectStruct.InnerSingleton, Z_Construct_UScriptStruct_FEffectStruct_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEffectStruct.InnerSingleton);
}
// ********** End ScriptStruct FEffectStruct *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EffectStruct_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectStruct::StaticStruct, Z_Construct_UScriptStruct_FEffectStruct_Statics::NewStructOps, TEXT("EffectStruct"),&Z_Registration_Info_UScriptStruct_FEffectStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectStruct), 323975127U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EffectStruct_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EffectStruct_h__Script_i_love_vampires_2_525012831{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EffectStruct_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EffectStruct_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
