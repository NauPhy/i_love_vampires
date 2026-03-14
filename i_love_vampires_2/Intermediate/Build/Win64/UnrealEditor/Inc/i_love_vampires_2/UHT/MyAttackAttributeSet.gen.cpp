// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/MyAttackAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyAttackAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyAttackAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyAttackAttributeSet_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyAttributeSet();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyAttackAttributeSet ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyAttackAttributeSet;
UClass* UMyAttackAttributeSet::GetPrivateStaticClass()
{
	using TClass = UMyAttackAttributeSet;
	if (!Z_Registration_Info_UClass_UMyAttackAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyAttackAttributeSet"),
			Z_Registration_Info_UClass_UMyAttackAttributeSet.InnerSingleton,
			StaticRegisterNativesUMyAttackAttributeSet,
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
	return Z_Registration_Info_UClass_UMyAttackAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyAttackAttributeSet_NoRegister()
{
	return UMyAttackAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyAttackAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyAttackAttributeSet.h" },
		{ "ModuleRelativePath", "MyAttackAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyAttackAttributeSet constinit property declarations ********************
// ********** End Class UMyAttackAttributeSet constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAttackAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyAttackAttributeSet_Statics
UObject* (*const Z_Construct_UClass_UMyAttackAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMyAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAttackAttributeSet_Statics::ClassParams = {
	&UMyAttackAttributeSet::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttackAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAttackAttributeSet_Statics::Class_MetaDataParams)
};
void UMyAttackAttributeSet::StaticRegisterNativesUMyAttackAttributeSet()
{
}
UClass* Z_Construct_UClass_UMyAttackAttributeSet()
{
	if (!Z_Registration_Info_UClass_UMyAttackAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAttackAttributeSet.OuterSingleton, Z_Construct_UClass_UMyAttackAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAttackAttributeSet.OuterSingleton;
}
UMyAttackAttributeSet::UMyAttackAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyAttackAttributeSet);
UMyAttackAttributeSet::~UMyAttackAttributeSet() {}
// ********** End Class UMyAttackAttributeSet ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyAttackAttributeSet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAttackAttributeSet, UMyAttackAttributeSet::StaticClass, TEXT("UMyAttackAttributeSet"), &Z_Registration_Info_UClass_UMyAttackAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAttackAttributeSet), 3141641394U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyAttackAttributeSet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyAttackAttributeSet_h__Script_i_love_vampires_2_1912320424{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyAttackAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyAttackAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
