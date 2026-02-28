// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatantAttributeSet ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantAttributeSet;
UClass* UCombatantAttributeSet::GetPrivateStaticClass()
{
	using TClass = UCombatantAttributeSet;
	if (!Z_Registration_Info_UClass_UCombatantAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantAttributeSet"),
			Z_Registration_Info_UClass_UCombatantAttributeSet.InnerSingleton,
			StaticRegisterNativesUCombatantAttributeSet,
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
	return Z_Registration_Info_UClass_UCombatantAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantAttributeSet_NoRegister()
{
	return UCombatantAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CombatantAttributeSet.h" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantAttributeSet constinit property declarations *******************
// ********** End Class UCombatantAttributeSet constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantAttributeSet_Statics
UObject* (*const Z_Construct_UClass_UCombatantAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantAttributeSet_Statics::ClassParams = {
	&UCombatantAttributeSet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantAttributeSet_Statics::Class_MetaDataParams)
};
void UCombatantAttributeSet::StaticRegisterNativesUCombatantAttributeSet()
{
}
UClass* Z_Construct_UClass_UCombatantAttributeSet()
{
	if (!Z_Registration_Info_UClass_UCombatantAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantAttributeSet.OuterSingleton, Z_Construct_UClass_UCombatantAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantAttributeSet);
UCombatantAttributeSet::~UCombatantAttributeSet() {}
// ********** End Class UCombatantAttributeSet *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatantAttributeSet, UCombatantAttributeSet::StaticClass, TEXT("UCombatantAttributeSet"), &Z_Registration_Info_UClass_UCombatantAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantAttributeSet), 2189679819U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_783946893{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
