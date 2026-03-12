// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AttackActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAttackActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAttackActor *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAttackActor;
UClass* AAttackActor::GetPrivateStaticClass()
{
	using TClass = AAttackActor;
	if (!Z_Registration_Info_UClass_AAttackActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackActor"),
			Z_Registration_Info_UClass_AAttackActor.InnerSingleton,
			StaticRegisterNativesAAttackActor,
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
	return Z_Registration_Info_UClass_AAttackActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAttackActor_NoRegister()
{
	return AAttackActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAttackActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttackActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pawnRef_MetaData[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__effectedPawns_MetaData[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAttackActor constinit property declarations *****************************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp__pawnRef;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp__effectedPawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__effectedPawns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAttackActor constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAttackActor_Statics

// ********** Begin Class AAttackActor Property Definitions ****************************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__pawnRef = { "_pawnRef", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _pawnRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pawnRef_MetaData), NewProp__pawnRef_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns_Inner = { "_effectedPawns", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns = { "_effectedPawns", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _effectedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__effectedPawns_MetaData), NewProp__effectedPawns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__pawnRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackActor_Statics::PropPointers) < 2048);
// ********** End Class AAttackActor Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_AAttackActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttackActor_Statics::ClassParams = {
	&AAttackActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAttackActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAttackActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttackActor_Statics::Class_MetaDataParams)
};
void AAttackActor::StaticRegisterNativesAAttackActor()
{
}
UClass* Z_Construct_UClass_AAttackActor()
{
	if (!Z_Registration_Info_UClass_AAttackActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttackActor.OuterSingleton, Z_Construct_UClass_AAttackActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAttackActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAttackActor);
AAttackActor::~AAttackActor() {}
// ********** End Class AAttackActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttackActor, AAttackActor::StaticClass, TEXT("AAttackActor"), &Z_Registration_Info_UClass_AAttackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackActor), 540433265U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_1554698284{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
