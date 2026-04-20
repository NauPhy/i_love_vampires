// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/DynamicAssetManager.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDynamicAssetManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UDynamicAssetManager();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UDynamicAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDynamicAssetManager *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicAssetManager;
UClass* UDynamicAssetManager::GetPrivateStaticClass()
{
	using TClass = UDynamicAssetManager;
	if (!Z_Registration_Info_UClass_UDynamicAssetManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DynamicAssetManager"),
			Z_Registration_Info_UClass_UDynamicAssetManager.InnerSingleton,
			StaticRegisterNativesUDynamicAssetManager,
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
	return Z_Registration_Info_UClass_UDynamicAssetManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UDynamicAssetManager_NoRegister()
{
	return UDynamicAssetManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDynamicAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicAssetManager.h" },
		{ "ModuleRelativePath", "DynamicAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__templateMap_MetaData[] = {
		{ "ModuleRelativePath", "DynamicAssetManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynamicAssetManager constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__templateMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__templateMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__templateMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDynamicAssetManager constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDynamicAssetManager_Statics

// ********** Begin Class UDynamicAssetManager Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicAssetManager_Statics::NewProp__templateMap_ValueProp = { "_templateMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBaseTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDynamicAssetManager_Statics::NewProp__templateMap_Key_KeyProp = { "_templateMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDynamicAssetManager_Statics::NewProp__templateMap = { "_templateMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicAssetManager, _templateMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__templateMap_MetaData), NewProp__templateMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicAssetManager_Statics::NewProp__templateMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicAssetManager_Statics::NewProp__templateMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicAssetManager_Statics::NewProp__templateMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAssetManager_Statics::PropPointers) < 2048);
// ********** End Class UDynamicAssetManager Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UDynamicAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicAssetManager_Statics::ClassParams = {
	&UDynamicAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDynamicAssetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAssetManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicAssetManager_Statics::Class_MetaDataParams)
};
void UDynamicAssetManager::StaticRegisterNativesUDynamicAssetManager()
{
}
UClass* Z_Construct_UClass_UDynamicAssetManager()
{
	if (!Z_Registration_Info_UClass_UDynamicAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicAssetManager.OuterSingleton, Z_Construct_UClass_UDynamicAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicAssetManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicAssetManager);
UDynamicAssetManager::~UDynamicAssetManager() {}
// ********** End Class UDynamicAssetManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DynamicAssetManager_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicAssetManager, UDynamicAssetManager::StaticClass, TEXT("UDynamicAssetManager"), &Z_Registration_Info_UClass_UDynamicAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicAssetManager), 1088684387U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DynamicAssetManager_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DynamicAssetManager_h__Script_i_love_vampires_2_20275290{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DynamicAssetManager_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DynamicAssetManager_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
