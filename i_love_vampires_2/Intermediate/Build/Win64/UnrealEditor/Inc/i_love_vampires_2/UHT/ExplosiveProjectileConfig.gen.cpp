// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExplosiveProjectileConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExplosiveProjectileConfig() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

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
		{ "IncludePath", "ExplosiveProjectileConfig.h" },
		{ "ModuleRelativePath", "ExplosiveProjectileConfig.h" },
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
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
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
UExplosiveProjectileConfig::UExplosiveProjectileConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileConfig);
UExplosiveProjectileConfig::~UExplosiveProjectileConfig() {}
// ********** End Class UExplosiveProjectileConfig *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExplosiveProjectileConfig, UExplosiveProjectileConfig::StaticClass, TEXT("UExplosiveProjectileConfig"), &Z_Registration_Info_UClass_UExplosiveProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileConfig), 1869385244U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_3433455810{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectileConfig_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
