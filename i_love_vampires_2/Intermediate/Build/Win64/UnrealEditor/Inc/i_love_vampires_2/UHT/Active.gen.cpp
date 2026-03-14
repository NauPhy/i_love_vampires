// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Active.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActive() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackDataRuntime();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackDataRuntime_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyAttackAttributeSet_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttackDataRuntime *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackDataRuntime;
UClass* UAttackDataRuntime::GetPrivateStaticClass()
{
	using TClass = UAttackDataRuntime;
	if (!Z_Registration_Info_UClass_UAttackDataRuntime.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackDataRuntime"),
			Z_Registration_Info_UClass_UAttackDataRuntime.InnerSingleton,
			StaticRegisterNativesUAttackDataRuntime,
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
	return Z_Registration_Info_UClass_UAttackDataRuntime.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackDataRuntime_NoRegister()
{
	return UAttackDataRuntime::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackDataRuntime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributeSet_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackDataRuntime constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackDataRuntime constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackDataRuntime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackDataRuntime_Statics

// ********** Begin Class UAttackDataRuntime Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackDataRuntime_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataRuntime, _config), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackDataRuntime_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataRuntime, _attributes), Z_Construct_UClass_UAttackAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackDataRuntime_Statics::NewProp__attributeSet = { "_attributeSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackDataRuntime, _attributeSet), Z_Construct_UClass_UMyAttackAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributeSet_MetaData), NewProp__attributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackDataRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataRuntime_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataRuntime_Statics::NewProp__attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackDataRuntime_Statics::NewProp__attributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataRuntime_Statics::PropPointers) < 2048);
// ********** End Class UAttackDataRuntime Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UAttackDataRuntime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataRuntime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackDataRuntime_Statics::ClassParams = {
	&UAttackDataRuntime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackDataRuntime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataRuntime_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackDataRuntime_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackDataRuntime_Statics::Class_MetaDataParams)
};
void UAttackDataRuntime::StaticRegisterNativesUAttackDataRuntime()
{
}
UClass* Z_Construct_UClass_UAttackDataRuntime()
{
	if (!Z_Registration_Info_UClass_UAttackDataRuntime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackDataRuntime.OuterSingleton, Z_Construct_UClass_UAttackDataRuntime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackDataRuntime.OuterSingleton;
}
UAttackDataRuntime::UAttackDataRuntime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackDataRuntime);
UAttackDataRuntime::~UAttackDataRuntime() {}
// ********** End Class UAttackDataRuntime *********************************************************

// ********** Begin Class UActive ******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActive;
UClass* UActive::GetPrivateStaticClass()
{
	using TClass = UActive;
	if (!Z_Registration_Info_UClass_UActive.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Active"),
			Z_Registration_Info_UClass_UActive.InnerSingleton,
			StaticRegisterNativesUActive,
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
	return Z_Registration_Info_UClass_UActive.InnerSingleton;
}
UClass* Z_Construct_UClass_UActive_NoRegister()
{
	return UActive::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__myTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackData_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UActive constinit property declarations **********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__myTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__attackData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActive constinit property declarations ************************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActive_Statics

// ********** Begin Class UActive Property Definitions *********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__myTemplate = { "_myTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActive, _myTemplate), Z_Construct_UClass_UWeaponConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__myTemplate_MetaData), NewProp__myTemplate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__attackData_Inner = { "_attackData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttackDataRuntime_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__attackData = { "_attackData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActive, _attackData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackData_MetaData), NewProp__attackData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__myTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__attackData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__attackData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActive_Statics::PropPointers) < 2048);
// ********** End Class UActive Property Definitions ***********************************************
UObject* (*const Z_Construct_UClass_UActive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActive_Statics::ClassParams = {
	&UActive::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActive_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActive_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActive_Statics::Class_MetaDataParams), Z_Construct_UClass_UActive_Statics::Class_MetaDataParams)
};
void UActive::StaticRegisterNativesUActive()
{
}
UClass* Z_Construct_UClass_UActive()
{
	if (!Z_Registration_Info_UClass_UActive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActive.OuterSingleton, Z_Construct_UClass_UActive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActive.OuterSingleton;
}
UActive::UActive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActive);
UActive::~UActive() {}
// ********** End Class UActive ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackDataRuntime, UAttackDataRuntime::StaticClass, TEXT("UAttackDataRuntime"), &Z_Registration_Info_UClass_UAttackDataRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackDataRuntime), 2903331498U) },
		{ Z_Construct_UClass_UActive, UActive::StaticClass, TEXT("UActive"), &Z_Registration_Info_UClass_UActive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActive), 491026989U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_1827890180{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
