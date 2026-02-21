// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Definitions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDefinitions() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EStatusEffect();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EStatusEffect *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatusEffect;
static UEnum* EStatusEffect_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatusEffect.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatusEffect.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EStatusEffect, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EStatusEffect"));
	}
	return Z_Registration_Info_UEnum_EStatusEffect.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EStatusEffect>()
{
	return EStatusEffect_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "bleed.DisplayName", "Bleed" },
		{ "bleed.Name", "EStatusEffect::bleed" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Definitions.h" },
		{ "none.DisplayName", "None" },
		{ "none.Name", "EStatusEffect::none" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatusEffect::none", (int64)EStatusEffect::none },
		{ "EStatusEffect::bleed", (int64)EStatusEffect::bleed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EStatusEffect",
	"EStatusEffect",
	Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EStatusEffect()
{
	if (!Z_Registration_Info_UEnum_EStatusEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatusEffect.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EStatusEffect_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatusEffect.InnerSingleton;
}
// ********** End Enum EStatusEffect ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Definitions_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStatusEffect_StaticEnum, TEXT("EStatusEffect"), &Z_Registration_Info_UEnum_EStatusEffect, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 640858373U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Definitions_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Definitions_h__Script_i_love_vampires_2_338989240{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Definitions_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Definitions_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
