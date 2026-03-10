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
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__ID_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shape_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackShape_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__spread_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__targeting_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isHoming_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pierce_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bounce_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileCount_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isExplosive_MetaData[] = {
		{ "Category", "ProjectileTemplate" },
		{ "ModuleRelativePath", "ProjectileTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileTemplate constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp__ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__attackShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__attackShape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp__targeting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__targeting;
	static void NewProp__isHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isHoming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__pierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__bounce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__projectileCount;
	static void NewProp__isExplosive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isExplosive;
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
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__ID = { "_ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__ID_MetaData), NewProp__ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _shape), Z_Construct_UEnum_i_love_vampires_2_EProjectileShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 20658499
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__attackShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__attackShape = { "_attackShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _attackShape), Z_Construct_UEnum_i_love_vampires_2_EAttackShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackShape_MetaData), NewProp__attackShape_MetaData) }; // 3518354426
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__spread = { "_spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spread_MetaData), NewProp__spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__targeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__targeting = { "_targeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _targeting), Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__targeting_MetaData), NewProp__targeting_MetaData) }; // 997212909
void Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isHoming_SetBit(void* Obj)
{
	((FProjectileTemplate*)Obj)->_isHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isHoming = { "_isHoming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileTemplate), &Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isHoming_MetaData), NewProp__isHoming_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__range_MetaData), NewProp__range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__pierce = { "_pierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _pierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pierce_MetaData), NewProp__pierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__bounce = { "_bounce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _bounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bounce_MetaData), NewProp__bounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__projectileCount = { "_projectileCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileTemplate, _projectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileCount_MetaData), NewProp__projectileCount_MetaData) };
void Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isExplosive_SetBit(void* Obj)
{
	((FProjectileTemplate*)Obj)->_isExplosive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isExplosive = { "_isExplosive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileTemplate), &Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isExplosive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isExplosive_MetaData), NewProp__isExplosive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__attackShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__attackShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__targeting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isHoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__pierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__bounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__projectileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewProp__isExplosive,
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
		{ FProjectileTemplate::StaticStruct, Z_Construct_UScriptStruct_FProjectileTemplate_Statics::NewStructOps, TEXT("ProjectileTemplate"),&Z_Registration_Info_UScriptStruct_FProjectileTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileTemplate), 3354212655U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_765382299{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileTemplate_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
