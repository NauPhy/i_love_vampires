// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ProjectileTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectileTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProjectileTemplate ***********************************************
struct Z_Construct_UScriptStruct_FProjectileTemplate_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileTemplate); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileTemplate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shape_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0 is circle\n" },
#endif
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 is circle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attackShape_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0 is fan\n" },
#endif
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 is fan" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spread_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targeting_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0 is skillshot\n//1 is closest\n//2 is random\n" },
#endif
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 is skillshot\n1 is closest\n2 is random" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isHoming_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pierce_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bounce_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileCount_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isExplosive_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileTemplate constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_shape;
	static const UECodeGen_Private::FIntPropertyParams NewProp_attackShape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_targeting;
	static void NewProp_isHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isHoming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bounce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_projectileCount;
	static void NewProp_isExplosive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isExplosive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileTemplate constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileTemplate_Statics
static_assert(std::is_polymorphic<FProjectileTemplate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FProjectileTemplate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileTemplate;
class UScriptStruct* FProjectileTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileTemplate, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("ProjectileTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileTemplate.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileTemplate Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, shape), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shape_MetaData), NewProp_shape_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_attackShape = { "attackShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, attackShape), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attackShape_MetaData), NewProp_attackShape_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_spread = { "spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spread_MetaData), NewProp_spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radius_MetaData), NewProp_radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_targeting = { "targeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, targeting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targeting_MetaData), NewProp_targeting_MetaData) };
void Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isHoming_SetBit(void* Obj)
{
	((FProjectileTemplate*)Obj)->isHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isHoming = { "isHoming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileTemplate), &Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isHoming_MetaData), NewProp_isHoming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_range_MetaData), NewProp_range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_pierce = { "pierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, pierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pierce_MetaData), NewProp_pierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_bounce = { "bounce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, bounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bounce_MetaData), NewProp_bounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_projectileCount = { "projectileCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, projectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileCount_MetaData), NewProp_projectileCount_MetaData) };
void Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isExplosive_SetBit(void* Obj)
{
	((FProjectileTemplate*)Obj)->isExplosive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isExplosive = { "isExplosive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileTemplate), &Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isExplosive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isExplosive_MetaData), NewProp_isExplosive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_attackShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isHoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_pierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_bounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_projectileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp_isExplosive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTemplate_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileTemplate Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ProjectileTemplate",
	Z_Construct_UScriptStruct_FProjectileTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTemplate_Statics::PropPointers),
	sizeof(FProjectileTemplate),
	alignof(FProjectileTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileTemplate.InnerSingleton, Z_Construct_UScriptStruct_FProjectileTemplate_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileTemplate.InnerSingleton);
}
// ********** End ScriptStruct FProjectileTemplate *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileTemplate::StaticStruct, Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewStructOps, TEXT("ProjectileTemplate"),&Z_Registration_Info_UScriptStruct_FProjectileTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileTemplate), 72121466U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_3348916702{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
