// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AOEEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAOEEnum() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOEShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOETargeting();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EEffectApplication();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAOEShape *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAOEShape;
static UEnum* EAOEShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAOEShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAOEShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EAOEShape, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EAOEShape"));
	}
	return Z_Registration_Info_UEnum_EAOEShape.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAOEShape>()
{
	return EAOEShape_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "arc.DisplayName", "arc" },
		{ "arc.Name", "EAOEShape::arc" },
		{ "BlueprintType", "true" },
		{ "circle.DisplayName", "circle" },
		{ "circle.Name", "EAOEShape::circle" },
		{ "INVALID.DisplayName", "INVALID" },
		{ "INVALID.Name", "EAOEShape::INVALID" },
		{ "ModuleRelativePath", "AOEEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAOEShape::circle", (int64)EAOEShape::circle },
		{ "EAOEShape::arc", (int64)EAOEShape::arc },
		{ "EAOEShape::INVALID", (int64)EAOEShape::INVALID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EAOEShape",
	"EAOEShape",
	Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOEShape()
{
	if (!Z_Registration_Info_UEnum_EAOEShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAOEShape.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EAOEShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAOEShape.InnerSingleton;
}
// ********** End Enum EAOEShape *******************************************************************

// ********** Begin Enum EAOETargeting *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAOETargeting;
static UEnum* EAOETargeting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAOETargeting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAOETargeting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EAOETargeting, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EAOETargeting"));
	}
	return Z_Registration_Info_UEnum_EAOETargeting.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EAOETargeting>()
{
	return EAOETargeting_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "instigator.DisplayName", "instigator" },
		{ "instigator.Name", "EAOETargeting::instigator" },
		{ "INVALID.DisplayName", "INVALID" },
		{ "INVALID.Name", "EAOETargeting::INVALID" },
		{ "ModuleRelativePath", "AOEEnum.h" },
		{ "random.DisplayName", "random" },
		{ "random.Name", "EAOETargeting::random" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAOETargeting::instigator", (int64)EAOETargeting::instigator },
		{ "EAOETargeting::random", (int64)EAOETargeting::random },
		{ "EAOETargeting::INVALID", (int64)EAOETargeting::INVALID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EAOETargeting",
	"EAOETargeting",
	Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOETargeting()
{
	if (!Z_Registration_Info_UEnum_EAOETargeting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAOETargeting.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EAOETargeting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAOETargeting.InnerSingleton;
}
// ********** End Enum EAOETargeting ***************************************************************

// ********** Begin Enum EEffectApplication ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectApplication;
static UEnum* EEffectApplication_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectApplication.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectApplication.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_EEffectApplication, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EEffectApplication"));
	}
	return Z_Registration_Info_UEnum_EEffectApplication.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<EEffectApplication>()
{
	return EEffectApplication_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dependencies\n// all - AOEFactory\n" },
#endif
		{ "INVALID.DisplayName", "INVALID" },
		{ "INVALID.Name", "EEffectApplication::INVALID" },
		{ "ModuleRelativePath", "AOEEnum.h" },
		{ "once.DisplayName", "once" },
		{ "once.Name", "EEffectApplication::once" },
		{ "tick.DisplayName", "tick" },
		{ "tick.Name", "EEffectApplication::tick" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dependencies\nall - AOEFactory" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEffectApplication::once", (int64)EEffectApplication::once },
		{ "EEffectApplication::tick", (int64)EEffectApplication::tick },
		{ "EEffectApplication::INVALID", (int64)EEffectApplication::INVALID },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"EEffectApplication",
	"EEffectApplication",
	Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_EEffectApplication()
{
	if (!Z_Registration_Info_UEnum_EEffectApplication.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectApplication.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_EEffectApplication_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectApplication.InnerSingleton;
}
// ********** End Enum EEffectApplication **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAOEShape_StaticEnum, TEXT("EAOEShape"), &Z_Registration_Info_UEnum_EAOEShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2715704246U) },
		{ EAOETargeting_StaticEnum, TEXT("EAOETargeting"), &Z_Registration_Info_UEnum_EAOETargeting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2041281939U) },
		{ EEffectApplication_StaticEnum, TEXT("EEffectApplication"), &Z_Registration_Info_UEnum_EEffectApplication, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3034946465U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_1664496274{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
