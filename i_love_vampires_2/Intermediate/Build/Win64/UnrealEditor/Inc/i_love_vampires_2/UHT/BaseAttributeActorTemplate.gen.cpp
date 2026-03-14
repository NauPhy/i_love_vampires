// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/BaseAttributeActorTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseAttributeActorTemplate() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeActorTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeActorTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseAttributeActorTemplate **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseAttributeActorTemplate;
UClass* UBaseAttributeActorTemplate::GetPrivateStaticClass()
{
	using TClass = UBaseAttributeActorTemplate;
	if (!Z_Registration_Info_UClass_UBaseAttributeActorTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseAttributeActorTemplate"),
			Z_Registration_Info_UClass_UBaseAttributeActorTemplate.InnerSingleton,
			StaticRegisterNativesUBaseAttributeActorTemplate,
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
	return Z_Registration_Info_UClass_UBaseAttributeActorTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseAttributeActorTemplate_NoRegister()
{
	return UBaseAttributeActorTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseAttributeActorTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseAttributeActorTemplate.h" },
		{ "ModuleRelativePath", "BaseAttributeActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributeSetClass_MetaData[] = {
		{ "ModuleRelativePath", "BaseAttributeActorTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBaseAttributeActorTemplate constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp__attributeSetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBaseAttributeActorTemplate constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeActorTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBaseAttributeActorTemplate_Statics

// ********** Begin Class UBaseAttributeActorTemplate Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::NewProp__attributeSetClass = { "_attributeSetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeActorTemplate, _attributeSetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UBaseAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributeSetClass_MetaData), NewProp__attributeSetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::NewProp__attributeSetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::PropPointers) < 2048);
// ********** End Class UBaseAttributeActorTemplate Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::ClassParams = {
	&UBaseAttributeActorTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::Class_MetaDataParams)
};
void UBaseAttributeActorTemplate::StaticRegisterNativesUBaseAttributeActorTemplate()
{
}
UClass* Z_Construct_UClass_UBaseAttributeActorTemplate()
{
	if (!Z_Registration_Info_UClass_UBaseAttributeActorTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeActorTemplate.OuterSingleton, Z_Construct_UClass_UBaseAttributeActorTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributeActorTemplate.OuterSingleton;
}
UBaseAttributeActorTemplate::UBaseAttributeActorTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBaseAttributeActorTemplate);
UBaseAttributeActorTemplate::~UBaseAttributeActorTemplate() {}
// ********** End Class UBaseAttributeActorTemplate ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeActorTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeActorTemplate, UBaseAttributeActorTemplate::StaticClass, TEXT("UBaseAttributeActorTemplate"), &Z_Registration_Info_UClass_UBaseAttributeActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeActorTemplate), 918126363U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeActorTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeActorTemplate_h__Script_i_love_vampires_2_4007977179{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeActorTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeActorTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
