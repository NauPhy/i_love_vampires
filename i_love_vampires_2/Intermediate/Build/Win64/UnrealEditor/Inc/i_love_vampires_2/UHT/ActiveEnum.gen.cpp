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
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackType();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAttackType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackType;
static UEnum* EAttackType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttackType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EAttackType, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EAttackType"));
	}
	return Z_Registration_Info_UEnum_EAttackType.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttackType>()
{
	return EAttackType_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "first.Comment", "// The most basic attack type; fires the first attack in the list without checking if there are other attacks.\n" },
		{ "first.DisplayName", "first" },
		{ "first.Name", "EAttackType::first" },
		{ "first.ToolTip", "The most basic attack type; fires the first attack in the list without checking if there are other attacks." },
		{ "ModuleRelativePath", "ActiveEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttackType::first", (int64)EAttackType::first },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EAttackType",
	"EAttackType",
	Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackType()
{
	if (!Z_Registration_Info_UEnum_EAttackType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackType.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EAttackType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttackType.InnerSingleton;
}
// ********** End Enum EAttackType *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttackType_StaticEnum, TEXT("EAttackType"), &Z_Registration_Info_UEnum_EAttackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 809871547U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_52827784{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ActiveEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
