// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ProjectileConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectileConfig() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileConfig();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponConfig();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FProjectileConfig *************************************************
struct Z_Construct_UScriptStruct_FProjectileConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FProjectileConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FProjectileConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shape_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "ProjectileConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackShape_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "ProjectileConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__targeting_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "ProjectileConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isHoming_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "ProjectileConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FProjectileConfig constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__attackShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__attackShape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__targeting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__targeting;
	static void NewProp__isHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isHoming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FProjectileConfig constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FProjectileConfig_Statics
static_assert(std::is_polymorphic<FProjectileConfig>() == std::is_polymorphic<FWeaponConfig>(), "USTRUCT FProjectileConfig cannot be polymorphic unless super FWeaponConfig is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FProjectileConfig;
class UScriptStruct* FProjectileConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FProjectileConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileConfig, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("ProjectileConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FProjectileConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FProjectileConfig Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileConfig, _shape), Z_Construct_UEnum_i_love_vampires_2_EProjectileShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 4060094284
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__attackShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__attackShape = { "_attackShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileConfig, _attackShape), Z_Construct_UEnum_i_love_vampires_2_EAttackShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackShape_MetaData), NewProp__attackShape_MetaData) }; // 2938459234
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__targeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__targeting = { "_targeting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectileConfig, _targeting), Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__targeting_MetaData), NewProp__targeting_MetaData) }; // 3327081672
void Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__isHoming_SetBit(void* Obj)
{
	((FProjectileConfig*)Obj)->_isHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__isHoming = { "_isHoming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectileConfig), &Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__isHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isHoming_MetaData), NewProp__isHoming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__attackShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__attackShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__targeting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewProp__isHoming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FProjectileConfig Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	Z_Construct_UScriptStruct_FWeaponConfig,
	&NewStructOps,
	"ProjectileConfig",
	Z_Construct_UScriptStruct_FProjectileConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileConfig_Statics::PropPointers),
	sizeof(FProjectileConfig),
	alignof(FProjectileConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FProjectileConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FProjectileConfig.InnerSingleton, Z_Construct_UScriptStruct_FProjectileConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FProjectileConfig.InnerSingleton);
}
// ********** End ScriptStruct FProjectileConfig ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileConfig::StaticStruct, Z_Construct_UScriptStruct_FProjectileConfig_Statics::NewStructOps, TEXT("ProjectileConfig"),&Z_Registration_Info_UScriptStruct_FProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileConfig), 966335809U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_2046880583{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
