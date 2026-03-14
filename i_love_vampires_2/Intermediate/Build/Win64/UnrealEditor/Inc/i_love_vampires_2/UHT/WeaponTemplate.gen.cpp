// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/WeaponTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponTemplate() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeActorTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponTemplate **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponTemplate;
UClass* UWeaponTemplate::GetPrivateStaticClass()
{
	using TClass = UWeaponTemplate;
	if (!Z_Registration_Info_UClass_UWeaponTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WeaponTemplate"),
			Z_Registration_Info_UClass_UWeaponTemplate.InnerSingleton,
			StaticRegisterNativesUWeaponTemplate,
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
	return Z_Registration_Info_UClass_UWeaponTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponTemplate_NoRegister()
{
	return UWeaponTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponTemplate.h" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackData_Inner_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackData_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWeaponTemplate constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__attackData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWeaponTemplate constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWeaponTemplate_Statics

// ********** Begin Class UWeaponTemplate Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _config), Z_Construct_UClass_UWeaponConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData_Inner = { "_attackData", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttackAttributeActorTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackData_Inner_MetaData), NewProp__attackData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData = { "_attackData", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _attackData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackData_MetaData), NewProp__attackData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers) < 2048);
// ********** End Class UWeaponTemplate Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UWeaponTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponTemplate_Statics::ClassParams = {
	&UWeaponTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponTemplate_Statics::Class_MetaDataParams)
};
void UWeaponTemplate::StaticRegisterNativesUWeaponTemplate()
{
}
UClass* Z_Construct_UClass_UWeaponTemplate()
{
	if (!Z_Registration_Info_UClass_UWeaponTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponTemplate.OuterSingleton, Z_Construct_UClass_UWeaponTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponTemplate.OuterSingleton;
}
UWeaponTemplate::UWeaponTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWeaponTemplate);
UWeaponTemplate::~UWeaponTemplate() {}
// ********** End Class UWeaponTemplate ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponTemplate, UWeaponTemplate::StaticClass, TEXT("UWeaponTemplate"), &Z_Registration_Info_UClass_UWeaponTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponTemplate), 2121254977U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_935232415{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
