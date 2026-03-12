// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Combatant.h"
#include "i_love_vampires_2/CombatantConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatant() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantConfig();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACombatant ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACombatant;
UClass* ACombatant::GetPrivateStaticClass()
{
	using TClass = ACombatant;
	if (!Z_Registration_Info_UClass_ACombatant.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Combatant"),
			Z_Registration_Info_UClass_ACombatant.InnerSingleton,
			StaticRegisterNativesACombatant,
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
	return Z_Registration_Info_UClass_ACombatant.InnerSingleton;
}
UClass* Z_Construct_UClass_ACombatant_NoRegister()
{
	return ACombatant::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACombatant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Combatant.h" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__activeAbilities_MetaData[] = {
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combatantFlipbook_MetaData[] = {
		{ "Category", "ACombatant" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACombatant constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__activeAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__activeAbilities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__combatantFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACombatant constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACombatant_Statics

// ********** Begin Class ACombatant Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _config), Z_Construct_UScriptStruct_FCombatantConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) }; // 222888090
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__activeAbilities_Inner = { "_activeAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__activeAbilities = { "_activeAbilities", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _activeAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__activeAbilities_MetaData), NewProp__activeAbilities_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__combatantFlipbook = { "_combatantFlipbook", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _combatantFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combatantFlipbook_MetaData), NewProp__combatantFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__activeAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__activeAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__combatantFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::PropPointers) < 2048);
// ********** End Class ACombatant Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_ACombatant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatant_Statics::ClassParams = {
	&ACombatant::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACombatant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatant_Statics::Class_MetaDataParams)
};
void ACombatant::StaticRegisterNativesACombatant()
{
}
UClass* Z_Construct_UClass_ACombatant()
{
	if (!Z_Registration_Info_UClass_ACombatant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatant.OuterSingleton, Z_Construct_UClass_ACombatant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombatant.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACombatant);
ACombatant::~ACombatant() {}
// ********** End Class ACombatant *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatant, ACombatant::StaticClass, TEXT("ACombatant"), &Z_Registration_Info_UClass_ACombatant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatant), 1027703664U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_1225229503{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
