// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/BurnEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBurnEffect() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBurnEffect();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBurnEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBurnEffect **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBurnEffect;
UClass* UBurnEffect::GetPrivateStaticClass()
{
	using TClass = UBurnEffect;
	if (!Z_Registration_Info_UClass_UBurnEffect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BurnEffect"),
			Z_Registration_Info_UClass_UBurnEffect.InnerSingleton,
			StaticRegisterNativesUBurnEffect,
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
	return Z_Registration_Info_UClass_UBurnEffect.InnerSingleton;
}
UClass* Z_Construct_UClass_UBurnEffect_NoRegister()
{
	return UBurnEffect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBurnEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BurnEffect.h" },
		{ "ModuleRelativePath", "BurnEffect.h" },
		{ "PrioritizeCategories", "Status Duration GameplayEffect GameplayCues Stacking" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBurnEffect constinit property declarations ******************************
// ********** End Class UBurnEffect constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBurnEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBurnEffect_Statics
UObject* (*const Z_Construct_UClass_UBurnEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBurnEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBurnEffect_Statics::ClassParams = {
	&UBurnEffect::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBurnEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UBurnEffect_Statics::Class_MetaDataParams)
};
void UBurnEffect::StaticRegisterNativesUBurnEffect()
{
}
UClass* Z_Construct_UClass_UBurnEffect()
{
	if (!Z_Registration_Info_UClass_UBurnEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBurnEffect.OuterSingleton, Z_Construct_UClass_UBurnEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBurnEffect.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBurnEffect);
UBurnEffect::~UBurnEffect() {}
// ********** End Class UBurnEffect ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BurnEffect_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBurnEffect, UBurnEffect::StaticClass, TEXT("UBurnEffect"), &Z_Registration_Info_UClass_UBurnEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBurnEffect), 2267424628U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BurnEffect_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BurnEffect_h__Script_i_love_vampires_2_1113087819{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BurnEffect_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BurnEffect_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
