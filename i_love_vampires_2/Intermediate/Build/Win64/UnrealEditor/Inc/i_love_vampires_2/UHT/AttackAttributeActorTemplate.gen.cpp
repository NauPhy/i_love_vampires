// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AttackAttributeActorTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAttackAttributeActorTemplate() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeActorTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeActorTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeActorTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttackAttributeActorTemplate ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackAttributeActorTemplate;
UClass* UAttackAttributeActorTemplate::GetPrivateStaticClass()
{
	using TClass = UAttackAttributeActorTemplate;
	if (!Z_Registration_Info_UClass_UAttackAttributeActorTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackAttributeActorTemplate"),
			Z_Registration_Info_UClass_UAttackAttributeActorTemplate.InnerSingleton,
			StaticRegisterNativesUAttackAttributeActorTemplate,
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
	return Z_Registration_Info_UClass_UAttackAttributeActorTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackAttributeActorTemplate_NoRegister()
{
	return UAttackAttributeActorTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackAttributeActorTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttackAttributeActorTemplate.h" },
		{ "ModuleRelativePath", "AttackAttributeActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "AttackAttributeActorTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackAttributeActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "AttackAttributeActorTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackAttributeActorTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackAttributeActorTemplate constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackAttributeActorTemplate constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackAttributeActorTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackAttributeActorTemplate_Statics

// ********** Begin Class UAttackAttributeActorTemplate Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeActorTemplate, _config), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeActorTemplate, _attributes), Z_Construct_UClass_UAttackAttributeTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::PropPointers) < 2048);
// ********** End Class UAttackAttributeActorTemplate Property Definitions *************************
UObject* (*const Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeActorTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::ClassParams = {
	&UAttackAttributeActorTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::Class_MetaDataParams)
};
void UAttackAttributeActorTemplate::StaticRegisterNativesUAttackAttributeActorTemplate()
{
}
UClass* Z_Construct_UClass_UAttackAttributeActorTemplate()
{
	if (!Z_Registration_Info_UClass_UAttackAttributeActorTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackAttributeActorTemplate.OuterSingleton, Z_Construct_UClass_UAttackAttributeActorTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackAttributeActorTemplate.OuterSingleton;
}
UAttackAttributeActorTemplate::UAttackAttributeActorTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackAttributeActorTemplate);
UAttackAttributeActorTemplate::~UAttackAttributeActorTemplate() {}
// ********** End Class UAttackAttributeActorTemplate **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeActorTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackAttributeActorTemplate, UAttackAttributeActorTemplate::StaticClass, TEXT("UAttackAttributeActorTemplate"), &Z_Registration_Info_UClass_UAttackAttributeActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackAttributeActorTemplate), 2458490650U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeActorTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeActorTemplate_h__Script_i_love_vampires_2_247319818{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeActorTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeActorTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
