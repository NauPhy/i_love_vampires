// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/StatusEffect_Burn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStatusEffect_Burn() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusEffect();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusEffect_Burn();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusEffect_Burn_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatusEffect_Burn *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UStatusEffect_Burn;
UClass* UStatusEffect_Burn::GetPrivateStaticClass()
{
	using TClass = UStatusEffect_Burn;
	if (!Z_Registration_Info_UClass_UStatusEffect_Burn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StatusEffect_Burn"),
			Z_Registration_Info_UClass_UStatusEffect_Burn.InnerSingleton,
			StaticRegisterNativesUStatusEffect_Burn,
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
	return Z_Registration_Info_UClass_UStatusEffect_Burn.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatusEffect_Burn_NoRegister()
{
	return UStatusEffect_Burn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatusEffect_Burn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatusEffect_Burn.h" },
		{ "ModuleRelativePath", "StatusEffect_Burn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStatusEffect_Burn constinit property declarations ***********************
// ********** End Class UStatusEffect_Burn constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusEffect_Burn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStatusEffect_Burn_Statics
UObject* (*const Z_Construct_UClass_UStatusEffect_Burn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatusEffect,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Burn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffect_Burn_Statics::ClassParams = {
	&UStatusEffect_Burn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Burn_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusEffect_Burn_Statics::Class_MetaDataParams)
};
void UStatusEffect_Burn::StaticRegisterNativesUStatusEffect_Burn()
{
}
UClass* Z_Construct_UClass_UStatusEffect_Burn()
{
	if (!Z_Registration_Info_UClass_UStatusEffect_Burn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusEffect_Burn.OuterSingleton, Z_Construct_UClass_UStatusEffect_Burn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusEffect_Burn.OuterSingleton;
}
UStatusEffect_Burn::UStatusEffect_Burn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStatusEffect_Burn);
UStatusEffect_Burn::~UStatusEffect_Burn() {}
// ********** End Class UStatusEffect_Burn *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Burn_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusEffect_Burn, UStatusEffect_Burn::StaticClass, TEXT("UStatusEffect_Burn"), &Z_Registration_Info_UClass_UStatusEffect_Burn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusEffect_Burn), 3027575176U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Burn_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Burn_h__Script_i_love_vampires_2_2032815226{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Burn_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusEffect_Burn_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
