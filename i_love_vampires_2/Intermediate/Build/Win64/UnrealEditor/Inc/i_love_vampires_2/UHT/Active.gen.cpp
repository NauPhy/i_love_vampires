// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Active.h"
#include "i_love_vampires_2/SubActiveTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActive() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FSubActiveTemplate();
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
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__myTemplate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// I may at some point need separate _config and MyAttributeSet for UActive, but for now the only float I have is warmup.\n" },
#endif
		{ "ModuleRelativePath", "Active.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I may at some point need separate _config and MyAttributeSet for UActive, but for now the only float I have is warmup." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pawnRef_MetaData[] = {
		{ "ModuleRelativePath", "Active.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UActive constinit property declarations **********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp__myTemplate;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp__pawnRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActive constinit property declarations ************************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActive_Statics

// ********** Begin Class UActive Property Definitions *********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__myTemplate = { "_myTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActive, _myTemplate), Z_Construct_UScriptStruct_FSubActiveTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__myTemplate_MetaData), NewProp__myTemplate_MetaData) }; // 1119737183
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UActive_Statics::NewProp__pawnRef = { "_pawnRef", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActive, _pawnRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pawnRef_MetaData), NewProp__pawnRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__myTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActive_Statics::NewProp__pawnRef,
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

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActive, UActive::StaticClass, TEXT("UActive"), &Z_Registration_Info_UClass_UActive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActive), 4030955265U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_524033873{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
