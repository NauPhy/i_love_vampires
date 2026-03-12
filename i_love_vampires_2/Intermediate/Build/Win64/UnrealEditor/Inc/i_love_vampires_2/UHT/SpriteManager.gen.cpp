// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/SpriteManager.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSpriteManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_USpriteManager();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_USpriteManager_NoRegister();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ESprite();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpriteManager ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USpriteManager;
UClass* USpriteManager::GetPrivateStaticClass()
{
	using TClass = USpriteManager;
	if (!Z_Registration_Info_UClass_USpriteManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SpriteManager"),
			Z_Registration_Info_UClass_USpriteManager.InnerSingleton,
			StaticRegisterNativesUSpriteManager,
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
	return Z_Registration_Info_UClass_USpriteManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USpriteManager_NoRegister()
{
	return USpriteManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpriteManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpriteManager.h" },
		{ "ModuleRelativePath", "SpriteManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sprites_MetaData[] = {
		{ "ModuleRelativePath", "SpriteManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USpriteManager constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sprites_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp__sprites_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__sprites_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp__sprites;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USpriteManager constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpriteManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USpriteManager_Statics

// ********** Begin Class USpriteManager Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites_ValueProp = { "_sprites", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites_Key_KeyProp = { "_sprites_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_i_love_vampires_2_ESprite, METADATA_PARAMS(0, nullptr) }; // 3639681666
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites = { "_sprites", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpriteManager, _sprites), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sprites_MetaData), NewProp__sprites_MetaData) }; // 3639681666
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpriteManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpriteManager_Statics::NewProp__sprites,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpriteManager_Statics::PropPointers) < 2048);
// ********** End Class USpriteManager Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_USpriteManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpriteManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpriteManager_Statics::ClassParams = {
	&USpriteManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpriteManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpriteManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpriteManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USpriteManager_Statics::Class_MetaDataParams)
};
void USpriteManager::StaticRegisterNativesUSpriteManager()
{
}
UClass* Z_Construct_UClass_USpriteManager()
{
	if (!Z_Registration_Info_UClass_USpriteManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpriteManager.OuterSingleton, Z_Construct_UClass_USpriteManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpriteManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USpriteManager);
USpriteManager::~USpriteManager() {}
// ********** End Class USpriteManager *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteManager_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpriteManager, USpriteManager::StaticClass, TEXT("USpriteManager"), &Z_Registration_Info_UClass_USpriteManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpriteManager), 2404973802U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteManager_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteManager_h__Script_i_love_vampires_2_2955123925{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteManager_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteManager_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
