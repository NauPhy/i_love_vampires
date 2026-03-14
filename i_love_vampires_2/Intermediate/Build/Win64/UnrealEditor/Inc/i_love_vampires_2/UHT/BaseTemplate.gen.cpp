// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/BaseTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseTemplate() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseTemplate ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseTemplate;
UClass* UBaseTemplate::GetPrivateStaticClass()
{
	using TClass = UBaseTemplate;
	if (!Z_Registration_Info_UClass_UBaseTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseTemplate"),
			Z_Registration_Info_UClass_UBaseTemplate.InnerSingleton,
			StaticRegisterNativesUBaseTemplate,
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
	return Z_Registration_Info_UClass_UBaseTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseTemplate_NoRegister()
{
	return UBaseTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseTemplate.h" },
		{ "ModuleRelativePath", "BaseTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBaseTemplate constinit property declarations ****************************
// ********** End Class UBaseTemplate constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBaseTemplate_Statics
UObject* (*const Z_Construct_UClass_UBaseTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseTemplate_Statics::ClassParams = {
	&UBaseTemplate::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseTemplate_Statics::Class_MetaDataParams)
};
void UBaseTemplate::StaticRegisterNativesUBaseTemplate()
{
}
UClass* Z_Construct_UClass_UBaseTemplate()
{
	if (!Z_Registration_Info_UClass_UBaseTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseTemplate.OuterSingleton, Z_Construct_UClass_UBaseTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseTemplate.OuterSingleton;
}
UBaseTemplate::UBaseTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBaseTemplate);
UBaseTemplate::~UBaseTemplate() {}
// ********** End Class UBaseTemplate **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseTemplate, UBaseTemplate::StaticClass, TEXT("UBaseTemplate"), &Z_Registration_Info_UClass_UBaseTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseTemplate), 967136173U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseTemplate_h__Script_i_love_vampires_2_305759449{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
