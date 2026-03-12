// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AOEAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAOEAttributes() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOEAttributes();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAttributes();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAOEAttributes ****************************************************
struct Z_Construct_UScriptStruct_FAOEAttributes_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAOEAttributes); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAOEAttributes); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AOEAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "AOEAttributes" },
		{ "ModuleRelativePath", "AOEAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__duration_MetaData[] = {
		{ "Category", "AOEAttributes" },
		{ "ModuleRelativePath", "AOEAttributes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAOEAttributes constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAOEAttributes constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAOEAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAOEAttributes_Statics
static_assert(std::is_polymorphic<FAOEAttributes>() == std::is_polymorphic<FWeaponAttributes>(), "USTRUCT FAOEAttributes cannot be polymorphic unless super FWeaponAttributes is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAOEAttributes;
class UScriptStruct* FAOEAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAOEAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAOEAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAOEAttributes, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("AOEAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_FAOEAttributes.OuterSingleton;
	}

// ********** Begin ScriptStruct FAOEAttributes Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAOEAttributes_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOEAttributes, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAOEAttributes_Statics::NewProp__duration = { "_duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAOEAttributes, _duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__duration_MetaData), NewProp__duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAOEAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOEAttributes_Statics::NewProp__radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAOEAttributes_Statics::NewProp__duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOEAttributes_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAOEAttributes Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAOEAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FWeaponAttributes,
	&NewStructOps,
	"AOEAttributes",
	Z_Construct_UScriptStruct_FAOEAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOEAttributes_Statics::PropPointers),
	sizeof(FAOEAttributes),
	alignof(FAOEAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAOEAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAOEAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAOEAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_FAOEAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAOEAttributes.InnerSingleton, Z_Construct_UScriptStruct_FAOEAttributes_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAOEAttributes.InnerSingleton);
}
// ********** End ScriptStruct FAOEAttributes ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEAttributes_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAOEAttributes::StaticStruct, Z_Construct_UScriptStruct_FAOEAttributes_Statics::NewStructOps, TEXT("AOEAttributes"),&Z_Registration_Info_UScriptStruct_FAOEAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAOEAttributes), 3451436158U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEAttributes_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEAttributes_h__Script_i_love_vampires_2_3924770290{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
