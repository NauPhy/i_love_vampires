// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AOEConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAOEConfig() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOEShape();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAOEConfig ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAOEConfig;
UClass* UAOEConfig::GetPrivateStaticClass()
{
	using TClass = UAOEConfig;
	if (!Z_Registration_Info_UClass_UAOEConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AOEConfig"),
			Z_Registration_Info_UClass_UAOEConfig.InnerSingleton,
			StaticRegisterNativesUAOEConfig,
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
	return Z_Registration_Info_UClass_UAOEConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UAOEConfig_NoRegister()
{
	return UAOEConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAOEConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AOEConfig.h" },
		{ "ModuleRelativePath", "AOEConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shape_MetaData[] = {
		{ "Category", "AOEConfig" },
		{ "ModuleRelativePath", "AOEConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAOEConfig constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAOEConfig constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOEConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAOEConfig_Statics

// ********** Begin Class UAOEConfig Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEConfig, _shape), Z_Construct_UEnum_i_love_vampires_2_EAOEShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 2987453624
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAOEConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::PropPointers) < 2048);
// ********** End Class UAOEConfig Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UAOEConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAOEConfig_Statics::ClassParams = {
	&UAOEConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAOEConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAOEConfig_Statics::Class_MetaDataParams)
};
void UAOEConfig::StaticRegisterNativesUAOEConfig()
{
}
UClass* Z_Construct_UClass_UAOEConfig()
{
	if (!Z_Registration_Info_UClass_UAOEConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAOEConfig.OuterSingleton, Z_Construct_UClass_UAOEConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAOEConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAOEConfig);
UAOEConfig::~UAOEConfig() {}
// ********** End Class UAOEConfig *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAOEConfig, UAOEConfig::StaticClass, TEXT("UAOEConfig"), &Z_Registration_Info_UClass_UAOEConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAOEConfig), 2492148626U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_365880392{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOEConfig_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
