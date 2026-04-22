// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/BaseUpgradeContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseUpgradeContainer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseUpgradeContainer();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseUpgradeContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseUpgradeContainer ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseUpgradeContainer;
UClass* UBaseUpgradeContainer::GetPrivateStaticClass()
{
	using TClass = UBaseUpgradeContainer;
	if (!Z_Registration_Info_UClass_UBaseUpgradeContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseUpgradeContainer"),
			Z_Registration_Info_UClass_UBaseUpgradeContainer.InnerSingleton,
			StaticRegisterNativesUBaseUpgradeContainer,
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
	return Z_Registration_Info_UClass_UBaseUpgradeContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseUpgradeContainer_NoRegister()
{
	return UBaseUpgradeContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseUpgradeContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseUpgradeContainer.h" },
		{ "ModuleRelativePath", "BaseUpgradeContainer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBaseUpgradeContainer constinit property declarations ********************
// ********** End Class UBaseUpgradeContainer constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUpgradeContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBaseUpgradeContainer_Statics
UObject* (*const Z_Construct_UClass_UBaseUpgradeContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUpgradeContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUpgradeContainer_Statics::ClassParams = {
	&UBaseUpgradeContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUpgradeContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUpgradeContainer_Statics::Class_MetaDataParams)
};
void UBaseUpgradeContainer::StaticRegisterNativesUBaseUpgradeContainer()
{
}
UClass* Z_Construct_UClass_UBaseUpgradeContainer()
{
	if (!Z_Registration_Info_UClass_UBaseUpgradeContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUpgradeContainer.OuterSingleton, Z_Construct_UClass_UBaseUpgradeContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseUpgradeContainer.OuterSingleton;
}
UBaseUpgradeContainer::UBaseUpgradeContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBaseUpgradeContainer);
UBaseUpgradeContainer::~UBaseUpgradeContainer() {}
// ********** End Class UBaseUpgradeContainer ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseUpgradeContainer_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUpgradeContainer, UBaseUpgradeContainer::StaticClass, TEXT("UBaseUpgradeContainer"), &Z_Registration_Info_UClass_UBaseUpgradeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUpgradeContainer), 1120156360U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseUpgradeContainer_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseUpgradeContainer_h__Script_i_love_vampires_2_3413081831{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseUpgradeContainer_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseUpgradeContainer_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
