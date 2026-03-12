// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AssetRefs.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAssetRefs() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAssetRefs();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAssetRefs_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetRefs ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetRefs;
UClass* UAssetRefs::GetPrivateStaticClass()
{
	using TClass = UAssetRefs;
	if (!Z_Registration_Info_UClass_UAssetRefs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AssetRefs"),
			Z_Registration_Info_UClass_UAssetRefs.InnerSingleton,
			StaticRegisterNativesUAssetRefs,
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
	return Z_Registration_Info_UClass_UAssetRefs.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetRefs_NoRegister()
{
	return UAssetRefs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetRefs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AssetRefs.h" },
		{ "ModuleRelativePath", "AssetRefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__keyboardInputMappingContext_MetaData[] = {
		{ "Category", "AssetRefs" },
		{ "ModuleRelativePath", "AssetRefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__activeTable_MetaData[] = {
		{ "Category", "AssetRefs" },
		{ "ModuleRelativePath", "AssetRefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combatantTable_MetaData[] = {
		{ "Category", "AssetRefs" },
		{ "ModuleRelativePath", "AssetRefs.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAssetRefs constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__keyboardInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__activeTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__combatantTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAssetRefs constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetRefs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAssetRefs_Statics

// ********** Begin Class UAssetRefs Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetRefs_Statics::NewProp__keyboardInputMappingContext = { "_keyboardInputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetRefs, _keyboardInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__keyboardInputMappingContext_MetaData), NewProp__keyboardInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetRefs_Statics::NewProp__activeTable = { "_activeTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetRefs, _activeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__activeTable_MetaData), NewProp__activeTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetRefs_Statics::NewProp__combatantTable = { "_combatantTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetRefs, _combatantTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combatantTable_MetaData), NewProp__combatantTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetRefs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetRefs_Statics::NewProp__keyboardInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetRefs_Statics::NewProp__activeTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetRefs_Statics::NewProp__combatantTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRefs_Statics::PropPointers) < 2048);
// ********** End Class UAssetRefs Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UAssetRefs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRefs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetRefs_Statics::ClassParams = {
	&UAssetRefs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetRefs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRefs_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetRefs_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetRefs_Statics::Class_MetaDataParams)
};
void UAssetRefs::StaticRegisterNativesUAssetRefs()
{
}
UClass* Z_Construct_UClass_UAssetRefs()
{
	if (!Z_Registration_Info_UClass_UAssetRefs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetRefs.OuterSingleton, Z_Construct_UClass_UAssetRefs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetRefs.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAssetRefs);
UAssetRefs::~UAssetRefs() {}
// ********** End Class UAssetRefs *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AssetRefs_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetRefs, UAssetRefs::StaticClass, TEXT("UAssetRefs"), &Z_Registration_Info_UClass_UAssetRefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetRefs), 181764417U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AssetRefs_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AssetRefs_h__Script_i_love_vampires_2_1756497953{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AssetRefs_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AssetRefs_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
