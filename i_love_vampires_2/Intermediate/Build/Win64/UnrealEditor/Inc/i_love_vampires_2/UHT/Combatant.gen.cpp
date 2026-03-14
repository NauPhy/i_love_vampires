// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Combatant.h"
#include "UObject/PrimaryAssetId.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatant() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UActive_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UMyCombatantAttributeSet_NoRegister();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ESprite();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributeSet_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributeSet;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _config), Z_Construct_UClass_UCombatantConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _attributes), Z_Construct_UClass_UCombatantAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__attributeSet = { "_attributeSet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _attributeSet), Z_Construct_UClass_UMyCombatantAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributeSet_MetaData), NewProp__attributeSet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__activeAbilities_Inner = { "_activeAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActive_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__activeAbilities = { "_activeAbilities", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _activeAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__activeAbilities_MetaData), NewProp__activeAbilities_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__combatantFlipbook = { "_combatantFlipbook", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _combatantFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combatantFlipbook_MetaData), NewProp__combatantFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__attributeSet,
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

// ********** Begin Class UCombatantTemplate *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantTemplate;
UClass* UCombatantTemplate::GetPrivateStaticClass()
{
	using TClass = UCombatantTemplate;
	if (!Z_Registration_Info_UClass_UCombatantTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantTemplate"),
			Z_Registration_Info_UClass_UCombatantTemplate.InnerSingleton,
			StaticRegisterNativesUCombatantTemplate,
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
	return Z_Registration_Info_UClass_UCombatantTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantTemplate_NoRegister()
{
	return UCombatantTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Combatant.h" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "UCombatantTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "UCombatantTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantTemplate constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatantTemplate constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantTemplate_Statics

// ********** Begin Class UCombatantTemplate Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatantTemplate_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantTemplate, _config), Z_Construct_UClass_UCombatantConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatantTemplate_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantTemplate, _attributes), Z_Construct_UClass_UCombatantAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatantTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantTemplate_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantTemplate_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantTemplate_Statics::PropPointers) < 2048);
// ********** End Class UCombatantTemplate Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UCombatantTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantTemplate_Statics::ClassParams = {
	&UCombatantTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatantTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantTemplate_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantTemplate_Statics::Class_MetaDataParams)
};
void UCombatantTemplate::StaticRegisterNativesUCombatantTemplate()
{
}
UClass* Z_Construct_UClass_UCombatantTemplate()
{
	if (!Z_Registration_Info_UClass_UCombatantTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantTemplate.OuterSingleton, Z_Construct_UClass_UCombatantTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantTemplate.OuterSingleton;
}
UCombatantTemplate::UCombatantTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantTemplate);
UCombatantTemplate::~UCombatantTemplate() {}
// ********** End Class UCombatantTemplate *********************************************************

// ********** Begin Class UCombatantConfig *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantConfig;
UClass* UCombatantConfig::GetPrivateStaticClass()
{
	using TClass = UCombatantConfig;
	if (!Z_Registration_Info_UClass_UCombatantConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantConfig"),
			Z_Registration_Info_UClass_UCombatantConfig.InnerSingleton,
			StaticRegisterNativesUCombatantConfig,
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
	return Z_Registration_Info_UClass_UCombatantConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantConfig_NoRegister()
{
	return UCombatantConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Combatant.h" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combatantClass_MetaData[] = {
		{ "Category", "UCombatantTemplate" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "UCombatantConfig" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sprite_MetaData[] = {
		{ "Category", "UCombatantConfig" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startingWeapons_MetaData[] = {
		{ "Category", "UCombatantConfig" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantConfig constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp__combatantClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FBytePropertyParams NewProp__sprite_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp__startingWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__startingWeapons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatantConfig constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantConfig_Statics

// ********** Begin Class UCombatantConfig Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatantConfig_Statics::NewProp__combatantClass = { "_combatantClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantConfig, _combatantClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combatantClass_MetaData), NewProp__combatantClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCombatantConfig_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantConfig, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatantConfig_Statics::NewProp__sprite_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatantConfig_Statics::NewProp__sprite = { "_sprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantConfig, _sprite), Z_Construct_UEnum_i_love_vampires_2_ESprite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sprite_MetaData), NewProp__sprite_MetaData) }; // 3639681666
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantConfig_Statics::NewProp__startingWeapons_Inner = { "_startingWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) }; // 265326925
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatantConfig_Statics::NewProp__startingWeapons = { "_startingWeapons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantConfig, _startingWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startingWeapons_MetaData), NewProp__startingWeapons_MetaData) }; // 265326925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatantConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantConfig_Statics::NewProp__combatantClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantConfig_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantConfig_Statics::NewProp__sprite_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantConfig_Statics::NewProp__sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantConfig_Statics::NewProp__startingWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantConfig_Statics::NewProp__startingWeapons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantConfig_Statics::PropPointers) < 2048);
// ********** End Class UCombatantConfig Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UCombatantConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantConfig_Statics::ClassParams = {
	&UCombatantConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatantConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantConfig_Statics::Class_MetaDataParams)
};
void UCombatantConfig::StaticRegisterNativesUCombatantConfig()
{
}
UClass* Z_Construct_UClass_UCombatantConfig()
{
	if (!Z_Registration_Info_UClass_UCombatantConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantConfig.OuterSingleton, Z_Construct_UClass_UCombatantConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantConfig.OuterSingleton;
}
UCombatantConfig::UCombatantConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantConfig);
UCombatantConfig::~UCombatantConfig() {}
// ********** End Class UCombatantConfig ***********************************************************

// ********** Begin Class UCombatantAttributes *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantAttributes;
UClass* UCombatantAttributes::GetPrivateStaticClass()
{
	using TClass = UCombatantAttributes;
	if (!Z_Registration_Info_UClass_UCombatantAttributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantAttributes"),
			Z_Registration_Info_UClass_UCombatantAttributes.InnerSingleton,
			StaticRegisterNativesUCombatantAttributes,
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
	return Z_Registration_Info_UClass_UCombatantAttributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantAttributes_NoRegister()
{
	return UCombatantAttributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Combatant.h" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__maxHP_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__currentHP_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damageReduction_flat_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damageReduction_percent_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__healthRegen_flat_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__healthRegen_percent_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critChance_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critMultiplier_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackSpeed_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bonusBounces_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bonusPierce_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bonusProjectiles_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileSpeed_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileSize_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__movementSpeed_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__contactDamage_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__selfSize_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__iFrameDuration_MetaData[] = {
		{ "Category", "UCombatantAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "Combatant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantAttributes constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__maxHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__currentHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damageReduction_flat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damageReduction_percent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__healthRegen_flat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__healthRegen_percent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__attackSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__bonusBounces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__bonusPierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__bonusProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__projectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__projectileSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__movementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__contactDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__selfSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__iFrameDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatantAttributes constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantAttributes_Statics

// ********** Begin Class UCombatantAttributes Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__maxHP = { "_maxHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _maxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__maxHP_MetaData), NewProp__maxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__currentHP = { "_currentHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _currentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__currentHP_MetaData), NewProp__currentHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__damageReduction_flat = { "_damageReduction_flat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _damageReduction_flat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damageReduction_flat_MetaData), NewProp__damageReduction_flat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__damageReduction_percent = { "_damageReduction_percent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _damageReduction_percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damageReduction_percent_MetaData), NewProp__damageReduction_percent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__healthRegen_flat = { "_healthRegen_flat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _healthRegen_flat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__healthRegen_flat_MetaData), NewProp__healthRegen_flat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__healthRegen_percent = { "_healthRegen_percent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _healthRegen_percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__healthRegen_percent_MetaData), NewProp__healthRegen_percent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__critChance = { "_critChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critChance_MetaData), NewProp__critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__critMultiplier = { "_critMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critMultiplier_MetaData), NewProp__critMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__attackSpeed = { "_attackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _attackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackSpeed_MetaData), NewProp__attackSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__bonusBounces = { "_bonusBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _bonusBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bonusBounces_MetaData), NewProp__bonusBounces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__bonusPierce = { "_bonusPierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _bonusPierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bonusPierce_MetaData), NewProp__bonusPierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__bonusProjectiles = { "_bonusProjectiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _bonusProjectiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bonusProjectiles_MetaData), NewProp__bonusProjectiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__projectileSpeed = { "_projectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _projectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileSpeed_MetaData), NewProp__projectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__projectileSize = { "_projectileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _projectileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileSize_MetaData), NewProp__projectileSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__movementSpeed = { "_movementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _movementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__movementSpeed_MetaData), NewProp__movementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__range_MetaData), NewProp__range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__contactDamage = { "_contactDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _contactDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__contactDamage_MetaData), NewProp__contactDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__selfSize = { "_selfSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _selfSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__selfSize_MetaData), NewProp__selfSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__iFrameDuration = { "_iFrameDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributes, _iFrameDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__iFrameDuration_MetaData), NewProp__iFrameDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatantAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__maxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__currentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__damageReduction_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__damageReduction_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__healthRegen_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__healthRegen_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__critMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__attackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__bonusBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__bonusPierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__bonusProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__projectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__projectileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__movementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__contactDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__selfSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributes_Statics::NewProp__iFrameDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributes_Statics::PropPointers) < 2048);
// ********** End Class UCombatantAttributes Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UCombatantAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantAttributes_Statics::ClassParams = {
	&UCombatantAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatantAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributes_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantAttributes_Statics::Class_MetaDataParams)
};
void UCombatantAttributes::StaticRegisterNativesUCombatantAttributes()
{
}
UClass* Z_Construct_UClass_UCombatantAttributes()
{
	if (!Z_Registration_Info_UClass_UCombatantAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantAttributes.OuterSingleton, Z_Construct_UClass_UCombatantAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantAttributes.OuterSingleton;
}
UCombatantAttributes::UCombatantAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantAttributes);
UCombatantAttributes::~UCombatantAttributes() {}
// ********** End Class UCombatantAttributes *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatant, ACombatant::StaticClass, TEXT("ACombatant"), &Z_Registration_Info_UClass_ACombatant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatant), 3466274195U) },
		{ Z_Construct_UClass_UCombatantTemplate, UCombatantTemplate::StaticClass, TEXT("UCombatantTemplate"), &Z_Registration_Info_UClass_UCombatantTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantTemplate), 378584446U) },
		{ Z_Construct_UClass_UCombatantConfig, UCombatantConfig::StaticClass, TEXT("UCombatantConfig"), &Z_Registration_Info_UClass_UCombatantConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantConfig), 1145088371U) },
		{ Z_Construct_UClass_UCombatantAttributes, UCombatantAttributes::StaticClass, TEXT("UCombatantAttributes"), &Z_Registration_Info_UClass_UCombatantAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantAttributes), 1555784308U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_2698617230{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
