// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantManager();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatantManager ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantManager;
UClass* UCombatantManager::GetPrivateStaticClass()
{
	using TClass = UCombatantManager;
	if (!Z_Registration_Info_UClass_UCombatantManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantManager"),
			Z_Registration_Info_UClass_UCombatantManager.InnerSingleton,
			StaticRegisterNativesUCombatantManager,
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
	return Z_Registration_Info_UClass_UCombatantManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantManager_NoRegister()
{
	return UCombatantManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CombatantManager.h" },
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__enemyReferences_MetaData[] = {
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__playerRef_MetaData[] = {
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantManager constinit property declarations ************************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp__enemyReferences_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__enemyReferences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__enemyReferences;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp__playerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatantManager constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantManager_Statics

// ********** Begin Class UCombatantManager Property Definitions ***********************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCombatantManager_Statics::NewProp__enemyReferences_ValueProp = { "_enemyReferences", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCombatantManager_Statics::NewProp__enemyReferences_Key_KeyProp = { "_enemyReferences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCombatantManager_Statics::NewProp__enemyReferences = { "_enemyReferences", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantManager, _enemyReferences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__enemyReferences_MetaData), NewProp__enemyReferences_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCombatantManager_Statics::NewProp__playerRef = { "_playerRef", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantManager, _playerRef), Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__playerRef_MetaData), NewProp__playerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatantManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantManager_Statics::NewProp__enemyReferences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantManager_Statics::NewProp__enemyReferences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantManager_Statics::NewProp__enemyReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantManager_Statics::NewProp__playerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::PropPointers) < 2048);
// ********** End Class UCombatantManager Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UCombatantManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantManager_Statics::ClassParams = {
	&UCombatantManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatantManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantManager_Statics::Class_MetaDataParams)
};
void UCombatantManager::StaticRegisterNativesUCombatantManager()
{
}
UClass* Z_Construct_UClass_UCombatantManager()
{
	if (!Z_Registration_Info_UClass_UCombatantManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantManager.OuterSingleton, Z_Construct_UClass_UCombatantManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantManager);
UCombatantManager::~UCombatantManager() {}
// ********** End Class UCombatantManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatantManager, UCombatantManager::StaticClass, TEXT("UCombatantManager"), &Z_Registration_Info_UClass_UCombatantManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantManager), 1266859120U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_2615456186{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
