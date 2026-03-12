// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ProjectileAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectileAttributes() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileAttributes();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAttributes();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProjectileAttributes *********************************************
struct Z_Construct_UScriptStruct_FProjectileAttributes_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileAttributes); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileAttributes); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__spread_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pierce_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bounce_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileCount_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "ProjectileAttributes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileAttributes constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__pierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__bounce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__projectileCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileAttributes constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileAttributes_Statics
static_assert(std::is_polymorphic<FProjectileAttributes>() == std::is_polymorphic<FWeaponAttributes>(), "USTRUCT FProjectileAttributes cannot be polymorphic unless super FWeaponAttributes is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileAttributes;
class UScriptStruct* FProjectileAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileAttributes, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("ProjectileAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileAttributes.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileAttributes Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__spread = { "_spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileAttributes, _spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spread_MetaData), NewProp__spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileAttributes, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileAttributes, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileAttributes, _range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__range_MetaData), NewProp__range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__pierce = { "_pierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileAttributes, _pierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pierce_MetaData), NewProp__pierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__bounce = { "_bounce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileAttributes, _bounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bounce_MetaData), NewProp__bounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__projectileCount = { "_projectileCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileAttributes, _projectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileCount_MetaData), NewProp__projectileCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__pierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__bounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewProp__projectileCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileAttributes_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileAttributes Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FWeaponAttributes,
	&NewStructOps,
	"ProjectileAttributes",
	Z_Construct_UScriptStruct_FProjectileAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileAttributes_Statics::PropPointers),
	sizeof(FProjectileAttributes),
	alignof(FProjectileAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileAttributes.InnerSingleton, Z_Construct_UScriptStruct_FProjectileAttributes_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileAttributes.InnerSingleton);
}
// ********** End ScriptStruct FProjectileAttributes ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileAttributes_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileAttributes::StaticStruct, Z_Construct_UScriptStruct_FProjectileAttributes_Statics::NewStructOps, TEXT("ProjectileAttributes"),&Z_Registration_Info_UScriptStruct_FProjectileAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileAttributes), 90252618U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileAttributes_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileAttributes_h__Script_i_love_vampires_2_626013070{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
