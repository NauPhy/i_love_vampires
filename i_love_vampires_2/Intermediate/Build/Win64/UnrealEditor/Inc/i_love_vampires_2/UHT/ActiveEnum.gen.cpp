// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ActiveEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActiveEnum() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EActivationType();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EActivationType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActivationType;
static UEnum* EActivationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActivationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActivationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EActivationType, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EActivationType"));
	}
	return Z_Registration_Info_UEnum_EActivationType.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EActivationType>()
{
	return EActivationType_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "burst.DisplayName", "burst" },
		{ "burst.Name", "EActivationType::burst" },
		{ "INVALID.DisplayName", "INVALID" },
		{ "INVALID.Name", "EActivationType::INVALID" },
		{ "ModuleRelativePath", "ActiveEnum.h" },
		{ "single.DisplayName", "single" },
		{ "single.Name", "EActivationType::single" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActivationType::single", (int64)EActivationType::single },
		{ "EActivationType::burst", (int64)EActivationType::burst },
		{ "EActivationType::INVALID", (int64)EActivationType::INVALID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EActivationType",
	"EActivationType",
	Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EActivationType()
{
	if (!Z_Registration_Info_UEnum_EActivationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActivationType.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EActivationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActivationType.InnerSingleton;
}
// ********** End Enum EActivationType *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EActivationType_StaticEnum, TEXT("EActivationType"), &Z_Registration_Info_UEnum_EActivationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1498684364U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_808322340{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
