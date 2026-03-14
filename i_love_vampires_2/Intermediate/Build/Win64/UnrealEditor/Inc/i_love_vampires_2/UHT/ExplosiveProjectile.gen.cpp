// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExplosiveProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExplosiveProjectile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveProjectile_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExplosiveProjectile *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExplosiveProjectile;
UClass* AExplosiveProjectile::GetPrivateStaticClass()
{
	using TClass = AExplosiveProjectile;
	if (!Z_Registration_Info_UClass_AExplosiveProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectile"),
			Z_Registration_Info_UClass_AExplosiveProjectile.InnerSingleton,
			StaticRegisterNativesAExplosiveProjectile,
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
	return Z_Registration_Info_UClass_AExplosiveProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AExplosiveProjectile_NoRegister()
{
	return AExplosiveProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExplosiveProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__aoe_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExplosiveProjectile constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__aoe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExplosiveProjectile constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExplosiveProjectile_Statics

// ********** Begin Class AExplosiveProjectile Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__aoe = { "_aoe", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectile, _aoe), Z_Construct_UClass_AAOE_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__aoe_MetaData), NewProp__aoe_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__aoe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers) < 2048);
// ********** End Class AExplosiveProjectile Property Definitions **********************************
UObject* (*const Z_Construct_UClass_AExplosiveProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveProjectile_Statics::ClassParams = {
	&AExplosiveProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AExplosiveProjectile_Statics::Class_MetaDataParams)
};
void AExplosiveProjectile::StaticRegisterNativesAExplosiveProjectile()
{
}
UClass* Z_Construct_UClass_AExplosiveProjectile()
{
	if (!Z_Registration_Info_UClass_AExplosiveProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosiveProjectile.OuterSingleton, Z_Construct_UClass_AExplosiveProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExplosiveProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExplosiveProjectile);
AExplosiveProjectile::~AExplosiveProjectile() {}
// ********** End Class AExplosiveProjectile *******************************************************

// ********** Begin Class UExplosiveProjectileData *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileData;
UClass* UExplosiveProjectileData::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileData;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileData"),
			Z_Registration_Info_UClass_UExplosiveProjectileData.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileData,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileData.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileData_NoRegister()
{
	return UExplosiveProjectileData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "ExplosiveProjectileData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "ExplosiveProjectileData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileData constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UExplosiveProjectileData constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileData_Statics

// ********** Begin Class UExplosiveProjectileData Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileData_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileData, _config), Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileData_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileData, _attributes), Z_Construct_UClass_UExplosiveProjectileAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExplosiveProjectileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileData_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileData_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileData_Statics::PropPointers) < 2048);
// ********** End Class UExplosiveProjectileData Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UExplosiveProjectileData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileData_Statics::ClassParams = {
	&UExplosiveProjectileData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExplosiveProjectileData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileData_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileData_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileData::StaticRegisterNativesUExplosiveProjectileData()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileData()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileData.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileData.OuterSingleton;
}
UExplosiveProjectileData::UExplosiveProjectileData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileData);
UExplosiveProjectileData::~UExplosiveProjectileData() {}
// ********** End Class UExplosiveProjectileData ***************************************************

// ********** Begin Class UExplosiveProjectileConfig ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileConfig;
UClass* UExplosiveProjectileConfig::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileConfig;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileConfig"),
			Z_Registration_Info_UClass_UExplosiveProjectileConfig.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileConfig,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister()
{
	return UExplosiveProjectileConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileConfig constinit property declarations ***************
// ********** End Class UExplosiveProjectileConfig constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileConfig_Statics
UObject* (*const Z_Construct_UClass_UExplosiveProjectileConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileConfig_Statics::ClassParams = {
	&UExplosiveProjectileConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileConfig_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileConfig::StaticRegisterNativesUExplosiveProjectileConfig()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileConfig()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileConfig.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileConfig);
UExplosiveProjectileConfig::~UExplosiveProjectileConfig() {}
// ********** End Class UExplosiveProjectileConfig *************************************************

// ********** Begin Class UExplosiveProjectileAttributes *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileAttributes;
UClass* UExplosiveProjectileAttributes::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileAttributes;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileAttributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileAttributes"),
			Z_Registration_Info_UClass_UExplosiveProjectileAttributes.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileAttributes,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileAttributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileAttributes_NoRegister()
{
	return UExplosiveProjectileAttributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileAttributes constinit property declarations ***********
// ********** End Class UExplosiveProjectileAttributes constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileAttributes_Statics
UObject* (*const Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileAttributes,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::ClassParams = {
	&UExplosiveProjectileAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileAttributes::StaticRegisterNativesUExplosiveProjectileAttributes()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileAttributes()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileAttributes.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileAttributes.OuterSingleton;
}
UExplosiveProjectileAttributes::UExplosiveProjectileAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileAttributes);
UExplosiveProjectileAttributes::~UExplosiveProjectileAttributes() {}
// ********** End Class UExplosiveProjectileAttributes *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExplosiveProjectile, AExplosiveProjectile::StaticClass, TEXT("AExplosiveProjectile"), &Z_Registration_Info_UClass_AExplosiveProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveProjectile), 3840322796U) },
		{ Z_Construct_UClass_UExplosiveProjectileData, UExplosiveProjectileData::StaticClass, TEXT("UExplosiveProjectileData"), &Z_Registration_Info_UClass_UExplosiveProjectileData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileData), 3859867488U) },
		{ Z_Construct_UClass_UExplosiveProjectileConfig, UExplosiveProjectileConfig::StaticClass, TEXT("UExplosiveProjectileConfig"), &Z_Registration_Info_UClass_UExplosiveProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileConfig), 2889929701U) },
		{ Z_Construct_UClass_UExplosiveProjectileAttributes, UExplosiveProjectileAttributes::StaticClass, TEXT("UExplosiveProjectileAttributes"), &Z_Registration_Info_UClass_UExplosiveProjectileAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileAttributes), 3768250681U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_1229078881{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
