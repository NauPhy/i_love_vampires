// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AttackConfig.h"
#include "i_love_vampires_2/EffectStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAttackConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEffectStruct();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttackConfig ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackConfig;
UClass* UAttackConfig::GetPrivateStaticClass()
{
	using TClass = UAttackConfig;
	if (!Z_Registration_Info_UClass_UAttackConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackConfig"),
			Z_Registration_Info_UClass_UAttackConfig.InnerSingleton,
			StaticRegisterNativesUAttackConfig,
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
	return Z_Registration_Info_UClass_UAttackConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackConfig_NoRegister()
{
	return UAttackConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttackConfig.h" },
		{ "ModuleRelativePath", "AttackConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackClass_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ModuleRelativePath", "AttackConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statusEffects_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ModuleRelativePath", "AttackConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackConfig constinit property declarations ****************************
	static const UECodeGen_Private::FClassPropertyParams NewProp__attackClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp__statusEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__statusEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackConfig constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackConfig_Statics

// ********** Begin Class UAttackConfig Property Definitions ***************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__attackClass = { "_attackClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackConfig, _attackClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AAttackActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackClass_MetaData), NewProp__attackClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects_Inner = { "_statusEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffectStruct, METADATA_PARAMS(0, nullptr) }; // 3838480815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects = { "_statusEffects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackConfig, _statusEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statusEffects_MetaData), NewProp__statusEffects_MetaData) }; // 3838480815
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__attackClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::PropPointers) < 2048);
// ********** End Class UAttackConfig Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UAttackConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackConfig_Statics::ClassParams = {
	&UAttackConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackConfig_Statics::Class_MetaDataParams)
};
void UAttackConfig::StaticRegisterNativesUAttackConfig()
{
}
UClass* Z_Construct_UClass_UAttackConfig()
{
	if (!Z_Registration_Info_UClass_UAttackConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackConfig.OuterSingleton, Z_Construct_UClass_UAttackConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackConfig);
UAttackConfig::~UAttackConfig() {}
// ********** End Class UAttackConfig **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackConfig, UAttackConfig::StaticClass, TEXT("UAttackConfig"), &Z_Registration_Info_UClass_UAttackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackConfig), 2020181622U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackConfig_h__Script_i_love_vampires_2_629122234{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackConfig_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackConfig_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
