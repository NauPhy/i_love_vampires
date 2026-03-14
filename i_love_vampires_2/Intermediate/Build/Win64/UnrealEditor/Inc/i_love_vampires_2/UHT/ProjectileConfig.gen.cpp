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
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UProjectileConfig ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileConfig;
UClass* UProjectileConfig::GetPrivateStaticClass()
{
	using TClass = UProjectileConfig;
	if (!Z_Registration_Info_UClass_UProjectileConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileConfig"),
			Z_Registration_Info_UClass_UProjectileConfig.InnerSingleton,
			StaticRegisterNativesUProjectileConfig,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UProjectileConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileConfig_NoRegister()
{
	return UProjectileConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProjectileConfig.h" },
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

// ********** Begin Class UProjectileConfig constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__attackShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__attackShape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__targeting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__targeting;
	static void NewProp__isHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isHoming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileConfig constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileConfig_Statics

// ********** Begin Class UProjectileConfig Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _shape), Z_Construct_UEnum_i_love_vampires_2_EProjectileShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 4060094284
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape = { "_attackShape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _attackShape), Z_Construct_UEnum_i_love_vampires_2_EAttackShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackShape_MetaData), NewProp__attackShape_MetaData) }; // 2938459234
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting = { "_targeting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _targeting), Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__targeting_MetaData), NewProp__targeting_MetaData) }; // 3327081672
void Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming_SetBit(void* Obj)
{
	((UProjectileConfig*)Obj)->_isHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming = { "_isHoming", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProjectileConfig), &Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isHoming_MetaData), NewProp__isHoming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::PropPointers) < 2048);
// ********** End Class UProjectileConfig Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UProjectileConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileConfig_Statics::ClassParams = {
	&UProjectileConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileConfig_Statics::Class_MetaDataParams)
};
void UProjectileConfig::StaticRegisterNativesUProjectileConfig()
{
}
UClass* Z_Construct_UClass_UProjectileConfig()
{
	if (!Z_Registration_Info_UClass_UProjectileConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileConfig.OuterSingleton, Z_Construct_UClass_UProjectileConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileConfig.OuterSingleton;
}
UProjectileConfig::UProjectileConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileConfig);
UProjectileConfig::~UProjectileConfig() {}
// ********** End Class UProjectileConfig **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileConfig, UProjectileConfig::StaticClass, TEXT("UProjectileConfig"), &Z_Registration_Info_UClass_UProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileConfig), 1444024556U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_218716006{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ProjectileConfig_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
