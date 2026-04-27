// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/EnemySpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UEnemySpawner();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UEnemySpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemySpawner ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemySpawner;
UClass* UEnemySpawner::GetPrivateStaticClass()
{
	using TClass = UEnemySpawner;
	if (!Z_Registration_Info_UClass_UEnemySpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemySpawner"),
			Z_Registration_Info_UClass_UEnemySpawner.InnerSingleton,
			StaticRegisterNativesUEnemySpawner,
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
	return Z_Registration_Info_UClass_UEnemySpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemySpawner_NoRegister()
{
	return UEnemySpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemySpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__testEnemy_MetaData[] = {
		{ "Category", "EnemySpawner" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnemySpawner constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__testEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEnemySpawner constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnemySpawner_Statics

// ********** Begin Class UEnemySpawner Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemySpawner_Statics::NewProp__testEnemy = { "_testEnemy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemySpawner, _testEnemy), Z_Construct_UClass_UCombatantTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__testEnemy_MetaData), NewProp__testEnemy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawner_Statics::NewProp__testEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::PropPointers) < 2048);
// ********** End Class UEnemySpawner Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UEnemySpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemySpawner_Statics::ClassParams = {
	&UEnemySpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemySpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemySpawner_Statics::Class_MetaDataParams)
};
void UEnemySpawner::StaticRegisterNativesUEnemySpawner()
{
}
UClass* Z_Construct_UClass_UEnemySpawner()
{
	if (!Z_Registration_Info_UClass_UEnemySpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemySpawner.OuterSingleton, Z_Construct_UClass_UEnemySpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemySpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnemySpawner);
UEnemySpawner::~UEnemySpawner() {}
// ********** End Class UEnemySpawner **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemySpawner, UEnemySpawner::StaticClass, TEXT("UEnemySpawner"), &Z_Registration_Info_UClass_UEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemySpawner), 2258791170U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_1090124204{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
