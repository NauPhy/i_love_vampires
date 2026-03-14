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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackDataRuntime();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackDataRuntime_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyAttackAttributeSet_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate_NoRegister();
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
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackData_Inner_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackData_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Active.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData_Inner = { "_attackData", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttackData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackData_Inner_MetaData), NewProp__attackData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData = { "_attackData", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _attackData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackData_MetaData), NewProp__attackData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers) < 2048);
// ********** End Class UWeaponTemplate Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UWeaponTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
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

// ********** Begin Class UWeaponConfig ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponConfig;
UClass* UWeaponConfig::GetPrivateStaticClass()
{
	using TClass = UWeaponConfig;
	if (!Z_Registration_Info_UClass_UWeaponConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WeaponConfig"),
			Z_Registration_Info_UClass_UWeaponConfig.InnerSingleton,
			StaticRegisterNativesUWeaponConfig,
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
	return Z_Registration_Info_UClass_UWeaponConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponConfig_NoRegister()
{
	return UWeaponConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackActorClass_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startOnCooldown_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_warmup_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "Active.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWeaponConfig constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FClassPropertyParams NewProp__attackActorClass_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__attackActorClass;
	static void NewProp__startOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__startOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_warmup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWeaponConfig constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWeaponConfig_Statics

// ********** Begin Class UWeaponConfig Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponConfig, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__attackActorClass_Inner = { "_attackActorClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AAttackActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__attackActorClass = { "_attackActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponConfig, _attackActorClass), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackActorClass_MetaData), NewProp__attackActorClass_MetaData) };
void Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown_SetBit(void* Obj)
{
	((UWeaponConfig*)Obj)->_startOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown = { "_startOnCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponConfig), &Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startOnCooldown_MetaData), NewProp__startOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp_warmup = { "warmup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponConfig, warmup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_warmup_MetaData), NewProp_warmup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__attackActorClass_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__attackActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp_warmup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponConfig_Statics::PropPointers) < 2048);
// ********** End Class UWeaponConfig Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UWeaponConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponConfig_Statics::ClassParams = {
	&UWeaponConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponConfig_Statics::Class_MetaDataParams)
};
void UWeaponConfig::StaticRegisterNativesUWeaponConfig()
{
}
UClass* Z_Construct_UClass_UWeaponConfig()
{
	if (!Z_Registration_Info_UClass_UWeaponConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponConfig.OuterSingleton, Z_Construct_UClass_UWeaponConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponConfig.OuterSingleton;
}
UWeaponConfig::UWeaponConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWeaponConfig);
UWeaponConfig::~UWeaponConfig() {}
// ********** End Class UWeaponConfig **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackDataRuntime, UAttackDataRuntime::StaticClass, TEXT("UAttackDataRuntime"), &Z_Registration_Info_UClass_UAttackDataRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackDataRuntime), 2903331498U) },
		{ Z_Construct_UClass_UActive, UActive::StaticClass, TEXT("UActive"), &Z_Registration_Info_UClass_UActive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActive), 491026989U) },
		{ Z_Construct_UClass_UWeaponTemplate, UWeaponTemplate::StaticClass, TEXT("UWeaponTemplate"), &Z_Registration_Info_UClass_UWeaponTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponTemplate), 2326207891U) },
		{ Z_Construct_UClass_UWeaponConfig, UWeaponConfig::StaticClass, TEXT("UWeaponConfig"), &Z_Registration_Info_UClass_UWeaponConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponConfig), 787399491U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_2452373331{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
