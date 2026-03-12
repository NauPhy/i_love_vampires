// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExplosiveBullet.h"
#include "i_love_vampires_2/AOEAttributes.h"
#include "i_love_vampires_2/AOEConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExplosiveBullet() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ABullet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveBullet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveBullet_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOEAttributes();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOEConfig();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExplosiveBullet *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExplosiveBullet;
UClass* AExplosiveBullet::GetPrivateStaticClass()
{
	using TClass = AExplosiveBullet;
	if (!Z_Registration_Info_UClass_AExplosiveBullet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveBullet"),
			Z_Registration_Info_UClass_AExplosiveBullet.InnerSingleton,
			StaticRegisterNativesAExplosiveBullet,
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
	return Z_Registration_Info_UClass_AExplosiveBullet.InnerSingleton;
}
UClass* Z_Construct_UClass_AExplosiveBullet_NoRegister()
{
	return AExplosiveBullet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExplosiveBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveBullet.h" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosionData_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosionAttributes_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExplosiveBullet constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp__explosionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp__explosionAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExplosiveBullet constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExplosiveBullet_Statics

// ********** Begin Class AExplosiveBullet Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp__explosionData = { "_explosionData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveBullet, _explosionData), Z_Construct_UScriptStruct_FAOEConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosionData_MetaData), NewProp__explosionData_MetaData) }; // 4214676676
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AExplosiveBullet_Statics::NewProp__explosionAttributes = { "_explosionAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveBullet, _explosionAttributes), Z_Construct_UScriptStruct_FAOEAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosionAttributes_MetaData), NewProp__explosionAttributes_MetaData) }; // 3451436158
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp__explosionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveBullet_Statics::NewProp__explosionAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::PropPointers) < 2048);
// ********** End Class AExplosiveBullet Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AExplosiveBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABullet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveBullet_Statics::ClassParams = {
	&AExplosiveBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExplosiveBullet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AExplosiveBullet_Statics::Class_MetaDataParams)
};
void AExplosiveBullet::StaticRegisterNativesAExplosiveBullet()
{
}
UClass* Z_Construct_UClass_AExplosiveBullet()
{
	if (!Z_Registration_Info_UClass_AExplosiveBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosiveBullet.OuterSingleton, Z_Construct_UClass_AExplosiveBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExplosiveBullet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExplosiveBullet);
AExplosiveBullet::~AExplosiveBullet() {}
// ********** End Class AExplosiveBullet ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExplosiveBullet, AExplosiveBullet::StaticClass, TEXT("AExplosiveBullet"), &Z_Registration_Info_UClass_AExplosiveBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveBullet), 1435790877U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_981064251{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
