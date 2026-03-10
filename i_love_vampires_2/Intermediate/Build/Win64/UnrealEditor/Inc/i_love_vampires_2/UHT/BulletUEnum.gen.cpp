// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/BulletUEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBulletUEnum() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EProjectileShape **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileShape;
static UEnum* EProjectileShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EProjectileShape, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EProjectileShape"));
	}
	return Z_Registration_Info_UEnum_EProjectileShape.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileShape>()
{
	return EProjectileShape_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "circle.DisplayName", "circle" },
		{ "circle.Name", "EProjectileShape::circle" },
		{ "ModuleRelativePath", "BulletUEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileShape::circle", (int64)EProjectileShape::circle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EProjectileShape",
	"EProjectileShape",
	Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileShape()
{
	if (!Z_Registration_Info_UEnum_EProjectileShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileShape.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EProjectileShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileShape.InnerSingleton;
}
// ********** End Enum EProjectileShape ************************************************************

// ********** Begin Enum EAttackShape **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackShape;
static UEnum* EAttackShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttackShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttackShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EAttackShape, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EAttackShape"));
	}
	return Z_Registration_Info_UEnum_EAttackShape.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttackShape>()
{
	return EAttackShape_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "fan.DisplayName", "circle" },
		{ "fan.Name", "EAttackShape::fan" },
		{ "ModuleRelativePath", "BulletUEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttackShape::fan", (int64)EAttackShape::fan },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EAttackShape",
	"EAttackShape",
	Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackShape()
{
	if (!Z_Registration_Info_UEnum_EAttackShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackShape.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EAttackShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttackShape.InnerSingleton;
}
// ********** End Enum EAttackShape ****************************************************************

// ********** Begin Enum EProjectileTargeting ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectileTargeting;
static UEnum* EProjectileTargeting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProjectileTargeting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProjectileTargeting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EProjectileTargeting"));
	}
	return Z_Registration_Info_UEnum_EProjectileTargeting.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectileTargeting>()
{
	return EProjectileTargeting_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "closest.DisplayName", "closest" },
		{ "closest.Name", "EProjectileTargeting::closest" },
		{ "ModuleRelativePath", "BulletUEnum.h" },
		{ "random.DisplayName", "random" },
		{ "random.Name", "EProjectileTargeting::random" },
		{ "skillshot.DisplayName", "skillshot" },
		{ "skillshot.Name", "EProjectileTargeting::skillshot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProjectileTargeting::skillshot", (int64)EProjectileTargeting::skillshot },
		{ "EProjectileTargeting::closest", (int64)EProjectileTargeting::closest },
		{ "EProjectileTargeting::random", (int64)EProjectileTargeting::random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EProjectileTargeting",
	"EProjectileTargeting",
	Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting()
{
	if (!Z_Registration_Info_UEnum_EProjectileTargeting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectileTargeting.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProjectileTargeting.InnerSingleton;
}
// ********** End Enum EProjectileTargeting ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BulletUEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProjectileShape_StaticEnum, TEXT("EProjectileShape"), &Z_Registration_Info_UEnum_EProjectileShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 20658499U) },
		{ EAttackShape_StaticEnum, TEXT("EAttackShape"), &Z_Registration_Info_UEnum_EAttackShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3518354426U) },
		{ EProjectileTargeting_StaticEnum, TEXT("EProjectileTargeting"), &Z_Registration_Info_UEnum_EProjectileTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 997212909U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BulletUEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BulletUEnum_h__Script_i_love_vampires_2_950401976{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BulletUEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BulletUEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
