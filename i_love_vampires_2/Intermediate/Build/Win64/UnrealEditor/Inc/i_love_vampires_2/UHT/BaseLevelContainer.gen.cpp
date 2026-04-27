// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/BaseLevelContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseLevelContainer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseLevelContainer();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseLevelContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseLevelContainer ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseLevelContainer;
UClass* UBaseLevelContainer::GetPrivateStaticClass()
{
	using TClass = UBaseLevelContainer;
	if (!Z_Registration_Info_UClass_UBaseLevelContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseLevelContainer"),
			Z_Registration_Info_UClass_UBaseLevelContainer.InnerSingleton,
			StaticRegisterNativesUBaseLevelContainer,
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
	return Z_Registration_Info_UClass_UBaseLevelContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseLevelContainer_NoRegister()
{
	return UBaseLevelContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseLevelContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseLevelContainer.h" },
		{ "ModuleRelativePath", "BaseLevelContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBaseLevelContainer constinit property declarations **********************
// ********** End Class UBaseLevelContainer constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLevelContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBaseLevelContainer_Statics
UObject* (*const Z_Construct_UClass_UBaseLevelContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseLevelContainer_Statics::ClassParams = {
	&UBaseLevelContainer::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseLevelContainer_Statics::Class_MetaDataParams)
};
void UBaseLevelContainer::StaticRegisterNativesUBaseLevelContainer()
{
}
UClass* Z_Construct_UClass_UBaseLevelContainer()
{
	if (!Z_Registration_Info_UClass_UBaseLevelContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseLevelContainer.OuterSingleton, Z_Construct_UClass_UBaseLevelContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseLevelContainer.OuterSingleton;
}
UBaseLevelContainer::UBaseLevelContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBaseLevelContainer);
UBaseLevelContainer::~UBaseLevelContainer() {}
// ********** End Class UBaseLevelContainer ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseLevelContainer_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseLevelContainer, UBaseLevelContainer::StaticClass, TEXT("UBaseLevelContainer"), &Z_Registration_Info_UClass_UBaseLevelContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseLevelContainer), 3207462622U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseLevelContainer_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseLevelContainer_h__Script_i_love_vampires_2_599972685{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseLevelContainer_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseLevelContainer_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
