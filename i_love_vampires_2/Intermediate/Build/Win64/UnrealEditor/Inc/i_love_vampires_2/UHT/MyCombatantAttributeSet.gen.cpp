// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/MyCombatantAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyCombatantAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyCombatantAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyCombatantAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyCombatantAttributeSet *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyCombatantAttributeSet;
UClass* UMyCombatantAttributeSet::GetPrivateStaticClass()
{
	using TClass = UMyCombatantAttributeSet;
	if (!Z_Registration_Info_UClass_UMyCombatantAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyCombatantAttributeSet"),
			Z_Registration_Info_UClass_UMyCombatantAttributeSet.InnerSingleton,
			StaticRegisterNativesUMyCombatantAttributeSet,
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
	return Z_Registration_Info_UClass_UMyCombatantAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyCombatantAttributeSet_NoRegister()
{
	return UMyCombatantAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyCombatantAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCombatantAttributeSet.h" },
		{ "ModuleRelativePath", "MyCombatantAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyCombatantAttributeSet constinit property declarations *****************
// ********** End Class UMyCombatantAttributeSet constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCombatantAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyCombatantAttributeSet_Statics
UObject* (*const Z_Construct_UClass_UMyCombatantAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMyAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCombatantAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCombatantAttributeSet_Statics::ClassParams = {
	&UMyCombatantAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCombatantAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyCombatantAttributeSet_Statics::Class_MetaDataParams)
};
void UMyCombatantAttributeSet::StaticRegisterNativesUMyCombatantAttributeSet()
{
}
UClass* Z_Construct_UClass_UMyCombatantAttributeSet()
{
	if (!Z_Registration_Info_UClass_UMyCombatantAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCombatantAttributeSet.OuterSingleton, Z_Construct_UClass_UMyCombatantAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyCombatantAttributeSet.OuterSingleton;
}
UMyCombatantAttributeSet::UMyCombatantAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyCombatantAttributeSet);
UMyCombatantAttributeSet::~UMyCombatantAttributeSet() {}
// ********** End Class UMyCombatantAttributeSet ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyCombatantAttributeSet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyCombatantAttributeSet, UMyCombatantAttributeSet::StaticClass, TEXT("UMyCombatantAttributeSet"), &Z_Registration_Info_UClass_UMyCombatantAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCombatantAttributeSet), 1652696806U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyCombatantAttributeSet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyCombatantAttributeSet_h__Script_i_love_vampires_2_2645526893{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyCombatantAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyCombatantAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
