// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AttackAttributeTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAttackAttributeTemplate() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttackAttributeTemplate *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackAttributeTemplate;
UClass* UAttackAttributeTemplate::GetPrivateStaticClass()
{
	using TClass = UAttackAttributeTemplate;
	if (!Z_Registration_Info_UClass_UAttackAttributeTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackAttributeTemplate"),
			Z_Registration_Info_UClass_UAttackAttributeTemplate.InnerSingleton,
			StaticRegisterNativesUAttackAttributeTemplate,
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
	return Z_Registration_Info_UClass_UAttackAttributeTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackAttributeTemplate_NoRegister()
{
	return UAttackAttributeTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackAttributeTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttackAttributeTemplate.h" },
		{ "ModuleRelativePath", "AttackAttributeTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "AttackAttributeTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critChance_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "AttackAttributeTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critMultiplier_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "AttackAttributeTemplate.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackAttributeTemplate constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackAttributeTemplate constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackAttributeTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackAttributeTemplate_Statics

// ********** Begin Class UAttackAttributeTemplate Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributeTemplate_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeTemplate, _damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damage_MetaData), NewProp__damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributeTemplate_Statics::NewProp__critChance = { "_critChance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeTemplate, _critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critChance_MetaData), NewProp__critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributeTemplate_Statics::NewProp__critMultiplier = { "_critMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeTemplate, _critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critMultiplier_MetaData), NewProp__critMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackAttributeTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeTemplate_Statics::NewProp__damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeTemplate_Statics::NewProp__critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeTemplate_Statics::NewProp__critMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeTemplate_Statics::PropPointers) < 2048);
// ********** End Class UAttackAttributeTemplate Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UAttackAttributeTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackAttributeTemplate_Statics::ClassParams = {
	&UAttackAttributeTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackAttributeTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackAttributeTemplate_Statics::Class_MetaDataParams)
};
void UAttackAttributeTemplate::StaticRegisterNativesUAttackAttributeTemplate()
{
}
UClass* Z_Construct_UClass_UAttackAttributeTemplate()
{
	if (!Z_Registration_Info_UClass_UAttackAttributeTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackAttributeTemplate.OuterSingleton, Z_Construct_UClass_UAttackAttributeTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackAttributeTemplate.OuterSingleton;
}
UAttackAttributeTemplate::UAttackAttributeTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackAttributeTemplate);
UAttackAttributeTemplate::~UAttackAttributeTemplate() {}
// ********** End Class UAttackAttributeTemplate ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeTemplate_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackAttributeTemplate, UAttackAttributeTemplate::StaticClass, TEXT("UAttackAttributeTemplate"), &Z_Registration_Info_UClass_UAttackAttributeTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackAttributeTemplate), 1236554687U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeTemplate_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeTemplate_h__Script_i_love_vampires_2_3169285068{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackAttributeTemplate_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
