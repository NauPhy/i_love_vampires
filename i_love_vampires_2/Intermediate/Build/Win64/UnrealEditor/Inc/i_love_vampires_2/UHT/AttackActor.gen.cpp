// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AttackActor.h"
#include "i_love_vampires_2/EffectStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAttackActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseTemplate();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEffectStruct();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
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
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__flipbook_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttackActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAttackActor constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__flipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAttackActor constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAttackActor_Statics

// ********** Begin Class AAttackActor Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__flipbook = { "_flipbook", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _flipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__flipbook_MetaData), NewProp__flipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__flipbook,
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
	0x009000A4u,
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

// ********** Begin Class UAttackConfig ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackConfig;
UClass* UAttackConfig::GetPrivateStaticClass()
{
	using TClass = UAttackConfig;
	if (!Z_Registration_Info_UClass_UAttackConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackConfig"),
			Z_Registration_Info_UClass_UAttackConfig.InnerSingleton,
			StaticRegisterNativesUAttackConfig,
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
	return Z_Registration_Info_UClass_UAttackConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackConfig_NoRegister()
{
	return UAttackConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__statusEffects_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sprite_MetaData[] = {
		{ "Category", "AttackConfig" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackConfig constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp__statusEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__statusEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__sprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackConfig constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackConfig_Statics

// ********** Begin Class UAttackConfig Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects_Inner = { "_statusEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffectStruct, METADATA_PARAMS(0, nullptr) }; // 2921158655
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects = { "_statusEffects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackConfig, _statusEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statusEffects_MetaData), NewProp__statusEffects_MetaData) }; // 2921158655
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__sprite = { "_sprite", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackConfig, _sprite), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sprite_MetaData), NewProp__sprite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__sprite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::PropPointers) < 2048);
// ********** End Class UAttackConfig Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UAttackConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackConfig_Statics::ClassParams = {
	&UAttackConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackConfig_Statics::Class_MetaDataParams)
};
void UAttackConfig::StaticRegisterNativesUAttackConfig()
{
}
UClass* Z_Construct_UClass_UAttackConfig()
{
	if (!Z_Registration_Info_UClass_UAttackConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackConfig.OuterSingleton, Z_Construct_UClass_UAttackConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackConfig);
UAttackConfig::~UAttackConfig() {}
// ********** End Class UAttackConfig **************************************************************

// ********** Begin Class UAttackAttributeData *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackAttributeData;
UClass* UAttackAttributeData::GetPrivateStaticClass()
{
	using TClass = UAttackAttributeData;
	if (!Z_Registration_Info_UClass_UAttackAttributeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackAttributeData"),
			Z_Registration_Info_UClass_UAttackAttributeData.InnerSingleton,
			StaticRegisterNativesUAttackAttributeData,
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
	return Z_Registration_Info_UClass_UAttackAttributeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackAttributeData_NoRegister()
{
	return UAttackAttributeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackAttributeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[] = {
		{ "Category", "AttackAttributeData" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critChance_MetaData[] = {
		{ "Category", "AttackAttributeData" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critMultiplier_MetaData[] = {
		{ "Category", "AttackAttributeData" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "AttackAttributeData" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackAttributeData constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackAttributeData constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackAttributeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackAttributeData_Statics

// ********** Begin Class UAttackAttributeData Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeData, _damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damage_MetaData), NewProp__damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__critChance = { "_critChance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeData, _critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critChance_MetaData), NewProp__critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__critMultiplier = { "_critMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeData, _critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critMultiplier_MetaData), NewProp__critMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributeData, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackAttributeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__critMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributeData_Statics::NewProp__radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeData_Statics::PropPointers) < 2048);
// ********** End Class UAttackAttributeData Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UAttackAttributeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeData,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackAttributeData_Statics::ClassParams = {
	&UAttackAttributeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackAttributeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackAttributeData_Statics::Class_MetaDataParams)
};
void UAttackAttributeData::StaticRegisterNativesUAttackAttributeData()
{
}
UClass* Z_Construct_UClass_UAttackAttributeData()
{
	if (!Z_Registration_Info_UClass_UAttackAttributeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackAttributeData.OuterSingleton, Z_Construct_UClass_UAttackAttributeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackAttributeData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackAttributeData);
UAttackAttributeData::~UAttackAttributeData() {}
// ********** End Class UAttackAttributeData *******************************************************

// ********** Begin Class UAttackTemplate **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackTemplate;
UClass* UAttackTemplate::GetPrivateStaticClass()
{
	using TClass = UAttackTemplate;
	if (!Z_Registration_Info_UClass_UAttackTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackTemplate"),
			Z_Registration_Info_UClass_UAttackTemplate.InnerSingleton,
			StaticRegisterNativesUAttackTemplate,
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
	return Z_Registration_Info_UClass_UAttackTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackTemplate_NoRegister()
{
	return UAttackTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackConfig_MetaData[] = {
		{ "Category", "AttackTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackAttributes_MetaData[] = {
		{ "Category", "AttackTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackTemplate constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackTemplate constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackTemplate_Statics

// ********** Begin Class UAttackTemplate Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackTemplate_Statics::NewProp__attackConfig = { "_attackConfig", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackTemplate, _attackConfig), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackConfig_MetaData), NewProp__attackConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackTemplate_Statics::NewProp__attackAttributes = { "_attackAttributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackTemplate, _attackAttributes), Z_Construct_UClass_UAttackAttributeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackAttributes_MetaData), NewProp__attackAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackTemplate_Statics::NewProp__attackConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackTemplate_Statics::NewProp__attackAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTemplate_Statics::PropPointers) < 2048);
// ********** End Class UAttackTemplate Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UAttackTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackTemplate_Statics::ClassParams = {
	&UAttackTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTemplate_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackTemplate_Statics::Class_MetaDataParams)
};
void UAttackTemplate::StaticRegisterNativesUAttackTemplate()
{
}
UClass* Z_Construct_UClass_UAttackTemplate()
{
	if (!Z_Registration_Info_UClass_UAttackTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackTemplate.OuterSingleton, Z_Construct_UClass_UAttackTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackTemplate);
UAttackTemplate::~UAttackTemplate() {}
// ********** End Class UAttackTemplate ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttackActor, AAttackActor::StaticClass, TEXT("AAttackActor"), &Z_Registration_Info_UClass_AAttackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackActor), 2812872173U) },
		{ Z_Construct_UClass_UAttackConfig, UAttackConfig::StaticClass, TEXT("UAttackConfig"), &Z_Registration_Info_UClass_UAttackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackConfig), 1269853889U) },
		{ Z_Construct_UClass_UAttackAttributeData, UAttackAttributeData::StaticClass, TEXT("UAttackAttributeData"), &Z_Registration_Info_UClass_UAttackAttributeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackAttributeData), 2499489532U) },
		{ Z_Construct_UClass_UAttackTemplate, UAttackTemplate::StaticClass, TEXT("UAttackTemplate"), &Z_Registration_Info_UClass_UAttackTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackTemplate), 1200606268U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_2003936057{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
