// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/SpriteSorter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSpriteSorter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_USpriteSorter();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_USpriteSorter_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpriteSorter ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USpriteSorter;
UClass* USpriteSorter::GetPrivateStaticClass()
{
	using TClass = USpriteSorter;
	if (!Z_Registration_Info_UClass_USpriteSorter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SpriteSorter"),
			Z_Registration_Info_UClass_USpriteSorter.InnerSingleton,
			StaticRegisterNativesUSpriteSorter,
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
	return Z_Registration_Info_UClass_USpriteSorter.InnerSingleton;
}
UClass* Z_Construct_UClass_USpriteSorter_NoRegister()
{
	return USpriteSorter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpriteSorter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpriteSorter.h" },
		{ "ModuleRelativePath", "SpriteSorter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USpriteSorter constinit property declarations ****************************
// ********** End Class USpriteSorter constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpriteSorter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USpriteSorter_Statics
UObject* (*const Z_Construct_UClass_USpriteSorter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpriteSorter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpriteSorter_Statics::ClassParams = {
	&USpriteSorter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpriteSorter_Statics::Class_MetaDataParams), Z_Construct_UClass_USpriteSorter_Statics::Class_MetaDataParams)
};
void USpriteSorter::StaticRegisterNativesUSpriteSorter()
{
}
UClass* Z_Construct_UClass_USpriteSorter()
{
	if (!Z_Registration_Info_UClass_USpriteSorter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpriteSorter.OuterSingleton, Z_Construct_UClass_USpriteSorter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpriteSorter.OuterSingleton;
}
USpriteSorter::USpriteSorter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USpriteSorter);
USpriteSorter::~USpriteSorter() {}
// ********** End Class USpriteSorter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteSorter_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpriteSorter, USpriteSorter::StaticClass, TEXT("USpriteSorter"), &Z_Registration_Info_UClass_USpriteSorter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpriteSorter), 1239698132U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteSorter_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteSorter_h__Script_i_love_vampires_2_1740474116{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteSorter_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteSorter_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
