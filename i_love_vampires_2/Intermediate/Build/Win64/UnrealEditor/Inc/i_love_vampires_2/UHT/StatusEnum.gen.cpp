// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/StatusEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStatusEnum() {}

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
		{ "bleed.DisplayName", "bleed" },
		{ "bleed.Name", "EStatus::bleed" },
		{ "blind.Comment", "// Unable to fire projectile attacks\n" },
		{ "blind.DisplayName", "blind" },
		{ "blind.Name", "EStatus::blind" },
		{ "blind.ToolTip", "Unable to fire projectile attacks" },
		{ "BlueprintType", "true" },
		{ "burn.Comment", "// percent maxHP damage twice per second\n" },
		{ "burn.DisplayName", "burn" },
		{ "burn.Name", "EStatus::burn" },
		{ "burn.ToolTip", "percent maxHP damage twice per second" },
		{ "chill.Comment", "// Slows and reduces attack speed by magnitude%\n" },
		{ "chill.DisplayName", "chill" },
		{ "chill.Name", "EStatus::chill" },
		{ "chill.ToolTip", "Slows and reduces attack speed by magnitude%" },
		{ "damage.DisplayName", "damage" },
		{ "damage.Name", "EStatus::damage" },
		{ "decay.Comment", "// Percent missing HP applied with burn\n" },
		{ "decay.DisplayName", "decay" },
		{ "decay.Name", "EStatus::decay" },
		{ "decay.ToolTip", "Percent missing HP applied with burn" },
		{ "decay_instant.Comment", "// Instantaneous %missing HP damage\n" },
		{ "decay_instant.DisplayName", "decay_instant" },
		{ "decay_instant.Name", "EStatus::decay_instant" },
		{ "decay_instant.ToolTip", "Instantaneous %missing HP damage" },
		{ "execute.Comment", "// execute below percentage\n" },
		{ "execute.DisplayName", "execute" },
		{ "execute.Name", "EStatus::execute" },
		{ "execute.ToolTip", "execute below percentage" },
		{ "friendlyFire.Comment", "// flat damage\n" },
		{ "friendlyFire.DisplayName", "friendlyFire" },
		{ "friendlyFire.Name", "EStatus::friendlyFire" },
		{ "friendlyFire.ToolTip", "flat damage" },
		{ "healInstigator.Comment", "// flat healing when enemy is hit\n" },
		{ "healInstigator.DisplayName", "healInstigator" },
		{ "healInstigator.Name", "EStatus::healInstigator" },
		{ "healInstigator.ToolTip", "flat healing when enemy is hit" },
		{ "instantDeath.DisplayName", "instantDeath" },
		{ "instantDeath.Name", "EStatus::instantDeath" },
		{ "INVALID.DisplayName", "INVALID" },
		{ "INVALID.Name", "EStatus::INVALID" },
		{ "ModuleRelativePath", "StatusEnum.h" },
		{ "poison.Comment", "// flat damage once per second, increases exponentially at 10% per tick\n" },
		{ "poison.DisplayName", "poison" },
		{ "poison.Name", "EStatus::poison" },
		{ "poison.ToolTip", "flat damage once per second, increases exponentially at 10% per tick" },
		{ "randomNegativePersistent.DisplayName", "randomNegativePersistent" },
		{ "randomNegativePersistent.Name", "EStatus::randomNegativePersistent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatus::bleed", (int64)EStatus::bleed },
		{ "EStatus::blind", (int64)EStatus::blind },
		{ "EStatus::burn", (int64)EStatus::burn },
		{ "EStatus::chill", (int64)EStatus::chill },
		{ "EStatus::damage", (int64)EStatus::damage },
		{ "EStatus::decay", (int64)EStatus::decay },
		{ "EStatus::decay_instant", (int64)EStatus::decay_instant },
		{ "EStatus::execute", (int64)EStatus::execute },
		{ "EStatus::friendlyFire", (int64)EStatus::friendlyFire },
		{ "EStatus::healInstigator", (int64)EStatus::healInstigator },
		{ "EStatus::instantDeath", (int64)EStatus::instantDeath },
		{ "EStatus::poison", (int64)EStatus::poison },
		{ "EStatus::randomNegativePersistent", (int64)EStatus::randomNegativePersistent },
		{ "EStatus::INVALID", (int64)EStatus::INVALID },
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
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStatus_StaticEnum, TEXT("EStatus"), &Z_Registration_Info_UEnum_EStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3809415991U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEnum_h__Script_i_love_vampires_2_2122739835{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
