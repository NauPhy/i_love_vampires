// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExperienceShard.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExperienceShard() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExperienceShard();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExperienceShard_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExperienceShard *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExperienceShard;
UClass* AExperienceShard::GetPrivateStaticClass()
{
	using TClass = AExperienceShard;
	if (!Z_Registration_Info_UClass_AExperienceShard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExperienceShard"),
			Z_Registration_Info_UClass_AExperienceShard.InnerSingleton,
			StaticRegisterNativesAExperienceShard,
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
	return Z_Registration_Info_UClass_AExperienceShard.InnerSingleton;
}
UClass* Z_Construct_UClass_AExperienceShard_NoRegister()
{
	return AExperienceShard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExperienceShard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExperienceShard.h" },
		{ "ModuleRelativePath", "ExperienceShard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__flipbook_MetaData[] = {
		{ "Category", "ExperienceShard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExperienceShard.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExperienceShard constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__flipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExperienceShard constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperienceShard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExperienceShard_Statics

// ********** Begin Class AExperienceShard Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExperienceShard_Statics::NewProp__flipbook = { "_flipbook", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExperienceShard, _flipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__flipbook_MetaData), NewProp__flipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExperienceShard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExperienceShard_Statics::NewProp__flipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceShard_Statics::PropPointers) < 2048);
// ********** End Class AExperienceShard Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AExperienceShard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceShard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExperienceShard_Statics::ClassParams = {
	&AExperienceShard::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExperienceShard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceShard_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceShard_Statics::Class_MetaDataParams), Z_Construct_UClass_AExperienceShard_Statics::Class_MetaDataParams)
};
void AExperienceShard::StaticRegisterNativesAExperienceShard()
{
}
UClass* Z_Construct_UClass_AExperienceShard()
{
	if (!Z_Registration_Info_UClass_AExperienceShard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExperienceShard.OuterSingleton, Z_Construct_UClass_AExperienceShard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExperienceShard.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExperienceShard);
AExperienceShard::~AExperienceShard() {}
// ********** End Class AExperienceShard ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExperienceShard, AExperienceShard::StaticClass, TEXT("AExperienceShard"), &Z_Registration_Info_UClass_AExperienceShard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExperienceShard), 3897641914U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_3347277935{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
