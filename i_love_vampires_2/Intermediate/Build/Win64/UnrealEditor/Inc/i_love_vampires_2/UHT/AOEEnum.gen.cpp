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

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAOEShape_StaticEnum, TEXT("EAOEShape"), &Z_Registration_Info_UEnum_EAOEShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3835588796U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_3316410338{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
