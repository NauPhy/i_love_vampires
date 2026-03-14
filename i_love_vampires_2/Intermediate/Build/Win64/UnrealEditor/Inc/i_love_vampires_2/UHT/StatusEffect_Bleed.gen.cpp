// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/StatusEffect_Bleed.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStatusEffect_Bleed() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusEffect();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusEffect_Bleed();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusEffect_Bleed_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatusEffect_Bleed ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UStatusEffect_Bleed;
UClass* UStatusEffect_Bleed::GetPrivateStaticClass()
{
	using TClass = UStatusEffect_Bleed;
	if (!Z_Registration_Info_UClass_UStatusEffect_Bleed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StatusEffect_Bleed"),
			Z_Registration_Info_UClass_UStatusEffect_Bleed.InnerSingleton,
			StaticRegisterNativesUStatusEffect_Bleed,
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
	return Z_Registration_Info_UClass_UStatusEffect_Bleed.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatusEffect_Bleed_NoRegister()
{
	return UStatusEffect_Bleed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatusEffect_Bleed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatusEffect_Bleed.h" },
		{ "ModuleRelativePath", "StatusEffect_Bleed.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStatusEffect_Bleed constinit property declarations **********************
// ********** End Class UStatusEffect_Bleed constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusEffect_Bleed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStatusEffect_Bleed_Statics
UObject* (*const Z_Construct_UClass_UStatusEffect_Bleed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatusEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Bleed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffect_Bleed_Statics::ClassParams = {
	&UStatusEffect_Bleed::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Bleed_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusEffect_Bleed_Statics::Class_MetaDataParams)
};
void UStatusEffect_Bleed::StaticRegisterNativesUStatusEffect_Bleed()
{
}
UClass* Z_Construct_UClass_UStatusEffect_Bleed()
{
	if (!Z_Registration_Info_UClass_UStatusEffect_Bleed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusEffect_Bleed.OuterSingleton, Z_Construct_UClass_UStatusEffect_Bleed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusEffect_Bleed.OuterSingleton;
}
UStatusEffect_Bleed::UStatusEffect_Bleed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStatusEffect_Bleed);
UStatusEffect_Bleed::~UStatusEffect_Bleed() {}
// ********** End Class UStatusEffect_Bleed ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Bleed_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusEffect_Bleed, UStatusEffect_Bleed::StaticClass, TEXT("UStatusEffect_Bleed"), &Z_Registration_Info_UClass_UStatusEffect_Bleed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusEffect_Bleed), 3942690840U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Bleed_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Bleed_h__Script_i_love_vampires_2_3455131959{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Bleed_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Bleed_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
