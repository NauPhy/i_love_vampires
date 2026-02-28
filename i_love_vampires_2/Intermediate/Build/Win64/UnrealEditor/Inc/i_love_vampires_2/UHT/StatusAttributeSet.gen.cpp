// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/StatusAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStatusAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
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
#endif // WITH_METADATA

// ********** Begin Class UStatusAttributeSet constinit property declarations **********************
// ********** End Class UStatusAttributeSet constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStatusAttributeSet_Statics
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UStatusAttributeSet, UStatusAttributeSet::StaticClass, TEXT("UStatusAttributeSet"), &Z_Registration_Info_UClass_UStatusAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusAttributeSet), 1972316641U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_2952133245{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_StatusAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
