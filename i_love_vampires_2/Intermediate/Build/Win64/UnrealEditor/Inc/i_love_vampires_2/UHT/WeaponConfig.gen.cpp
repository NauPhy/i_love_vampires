// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/WeaponConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponConfig() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

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
		{ "IncludePath", "WeaponConfig.h" },
		{ "ModuleRelativePath", "WeaponConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "WeaponConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startOnCooldown_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "WeaponConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_warmup_MetaData[] = {
		{ "Category", "WeaponConfig" },
		{ "ModuleRelativePath", "WeaponConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWeaponConfig constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponConfig, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
void Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown_SetBit(void* Obj)
{
	((UWeaponConfig*)Obj)->_startOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown = { "_startOnCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponConfig), &Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startOnCooldown_MetaData), NewProp__startOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponConfig_Statics::NewProp_warmup = { "warmup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponConfig, warmup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_warmup_MetaData), NewProp_warmup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp__startOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponConfig_Statics::NewProp_warmup,
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
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponConfig, UWeaponConfig::StaticClass, TEXT("UWeaponConfig"), &Z_Registration_Info_UClass_UWeaponConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponConfig), 4052198638U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_3414806540{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_WeaponConfig_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
