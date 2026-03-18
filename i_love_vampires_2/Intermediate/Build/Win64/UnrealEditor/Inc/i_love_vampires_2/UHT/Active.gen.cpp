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
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackFactory_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackFactoryTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class AAttackFactory;\n" },
#endif
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class AAttackFactory;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__factories_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UActive constinit property declarations **********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__factories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__factories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActive constinit property declarations ************************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActive_Statics

// ********** Begin Class UActive Property Definitions *********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActive, _config), Z_Construct_UClass_UWeaponConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__factories_Inner = { "_factories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAttackFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__factories = { "_factories", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActive, _factories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__factories_MetaData), NewProp__factories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__factories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__factories,
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startOnCooldown_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__warmup_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "Active.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWeaponConfig constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static void NewProp__startOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__startOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__warmup;
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
void Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown_SetBit(void* Obj)
{
	((UWeaponConfig*)Obj)->_startOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown = { "_startOnCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponConfig), &Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startOnCooldown_MetaData), NewProp__startOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__warmup = { "_warmup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponConfig, _warmup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__warmup_MetaData), NewProp__warmup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__warmup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponConfig_Statics::PropPointers) < 2048);
// ********** End Class UWeaponConfig Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UWeaponConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
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
	0x001010A0u,
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWeaponConfig);
UWeaponConfig::~UWeaponConfig() {}
// ********** End Class UWeaponConfig **************************************************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData_Inner = { "_attackData", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttackFactoryTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackData_Inner_MetaData), NewProp__attackData_Inner_MetaData) };
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWeaponTemplate);
UWeaponTemplate::~UWeaponTemplate() {}
// ********** End Class UWeaponTemplate ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActive, UActive::StaticClass, TEXT("UActive"), &Z_Registration_Info_UClass_UActive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActive), 663946726U) },
		{ Z_Construct_UClass_UWeaponConfig, UWeaponConfig::StaticClass, TEXT("UWeaponConfig"), &Z_Registration_Info_UClass_UWeaponConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponConfig), 707441556U) },
		{ Z_Construct_UClass_UWeaponTemplate, UWeaponTemplate::StaticClass, TEXT("UWeaponTemplate"), &Z_Registration_Info_UClass_UWeaponTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponTemplate), 3701602904U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_56953991{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
