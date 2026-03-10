// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantUEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantUEnum() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EStatus();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EStatus *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatus;
static UEnum* EStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EStatus, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EStatus"));
	}
	return Z_Registration_Info_UEnum_EStatus.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EStatus>()
{
	return EStatus_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "bleed.DisplayName", "Bleed" },
		{ "bleed.Name", "EStatus::bleed" },
		{ "BlueprintType", "true" },
		{ "burn.DisplayName", "Burn" },
		{ "burn.Name", "EStatus::burn" },
		{ "damage.DisplayName", "Damage" },
		{ "damage.Name", "EStatus::damage" },
		{ "ModuleRelativePath", "CombatantUEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatus::damage", (int64)EStatus::damage },
		{ "EStatus::bleed", (int64)EStatus::bleed },
		{ "EStatus::burn", (int64)EStatus::burn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EStatus",
	"EStatus",
	Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EStatus()
{
	if (!Z_Registration_Info_UEnum_EStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatus.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatus.InnerSingleton;
}
// ********** End Enum EStatus *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantUEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStatus_StaticEnum, TEXT("EStatus"), &Z_Registration_Info_UEnum_EStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1367986899U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantUEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantUEnum_h__Script_i_love_vampires_2_1408714975{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantUEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantUEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
