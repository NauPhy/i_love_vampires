// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/StatusAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStatusAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UStatusAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatusAttributeSet ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UStatusAttributeSet;
UClass* UStatusAttributeSet::GetPrivateStaticClass()
{
	using TClass = UStatusAttributeSet;
	if (!Z_Registration_Info_UClass_UStatusAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StatusAttributeSet"),
			Z_Registration_Info_UClass_UStatusAttributeSet.InnerSingleton,
			StaticRegisterNativesUStatusAttributeSet,
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
	return Z_Registration_Info_UClass_UStatusAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatusAttributeSet_NoRegister()
{
	return UStatusAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatusAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatusAttributeSet.h" },
		{ "ModuleRelativePath", "StatusAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bleed_MetaData[] = {
		{ "Category", "StatusAttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bleed is continuous. Magnitude is dps.\n" },
#endif
		{ "ModuleRelativePath", "StatusAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bleed is continuous. Magnitude is dps." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_burn_MetaData[] = {
		{ "Category", "StatusAttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Burn is once per second. Magnitude is %max hp per tick.\n" },
#endif
		{ "ModuleRelativePath", "StatusAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Burn is once per second. Magnitude is %max hp per tick." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UStatusAttributeSet constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_bleed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_burn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UStatusAttributeSet constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStatusAttributeSet_Statics

// ********** Begin Class UStatusAttributeSet Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_bleed = { "bleed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusAttributeSet, bleed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bleed_MetaData), NewProp_bleed_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_burn = { "burn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusAttributeSet, burn), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_burn_MetaData), NewProp_burn_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_bleed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusAttributeSet_Statics::NewProp_burn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UStatusAttributeSet Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UStatusAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusAttributeSet_Statics::ClassParams = {
	&UStatusAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusAttributeSet_Statics::Class_MetaDataParams)
};
void UStatusAttributeSet::StaticRegisterNativesUStatusAttributeSet()
{
}
UClass* Z_Construct_UClass_UStatusAttributeSet()
{
	if (!Z_Registration_Info_UClass_UStatusAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusAttributeSet.OuterSingleton, Z_Construct_UClass_UStatusAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStatusAttributeSet);
UStatusAttributeSet::~UStatusAttributeSet() {}
// ********** End Class UStatusAttributeSet ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusAttributeSet, UStatusAttributeSet::StaticClass, TEXT("UStatusAttributeSet"), &Z_Registration_Info_UClass_UStatusAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusAttributeSet), 1341963035U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_3009771114{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
