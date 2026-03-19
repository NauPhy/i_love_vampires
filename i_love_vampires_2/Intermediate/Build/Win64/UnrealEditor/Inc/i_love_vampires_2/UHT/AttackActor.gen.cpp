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
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackFactory();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackFactory_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ABaseAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackFactoryTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackFactoryTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeSetTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ESprite();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEffectStruct();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttackActor" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AttackActor" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAttackActor constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__flipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAttackActor constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAttackActor_Statics

// ********** Begin Class AAttackActor Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__flipbook = { "_flipbook", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _flipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__flipbook_MetaData), NewProp__flipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__attackConfig = { "_attackConfig", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _attackConfig), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackConfig_MetaData), NewProp__attackConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__attackAttributes = { "_attackAttributes", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _attackAttributes), Z_Construct_UClass_UAttackAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackAttributes_MetaData), NewProp__attackAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__flipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__attackConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__attackAttributes,
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
		{ "Category", "UAttackConfig" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__sprite_MetaData[] = {
		{ "Category", "UAttackConfig" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackConfig constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp__statusEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__statusEffects;
	static const UECodeGen_Private::FBytePropertyParams NewProp__sprite_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__sprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackConfig constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackConfig_Statics

// ********** Begin Class UAttackConfig Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects_Inner = { "_statusEffects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffectStruct, METADATA_PARAMS(0, nullptr) }; // 3838480815
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects = { "_statusEffects", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackConfig, _statusEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__statusEffects_MetaData), NewProp__statusEffects_MetaData) }; // 3838480815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__sprite_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackConfig_Statics::NewProp__sprite = { "_sprite", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackConfig, _sprite), Z_Construct_UEnum_i_love_vampires_2_ESprite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__sprite_MetaData), NewProp__sprite_MetaData) }; // 3639681666
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__statusEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackConfig_Statics::NewProp__sprite_Underlying,
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

// ********** Begin Class UAttackAttributes ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackAttributes;
UClass* UAttackAttributes::GetPrivateStaticClass()
{
	using TClass = UAttackAttributes;
	if (!Z_Registration_Info_UClass_UAttackAttributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackAttributes"),
			Z_Registration_Info_UClass_UAttackAttributes.InnerSingleton,
			StaticRegisterNativesUAttackAttributes,
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
	return Z_Registration_Info_UClass_UAttackAttributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackAttributes_NoRegister()
{
	return UAttackAttributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critChance_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critMultiplier_MetaData[] = {
		{ "Category", "WeaponAttributes" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackAttributes constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__critMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackAttributes constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackAttributes_Statics

// ********** Begin Class UAttackAttributes Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributes_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributes, _damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damage_MetaData), NewProp__damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributes_Statics::NewProp__critChance = { "_critChance", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributes, _critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critChance_MetaData), NewProp__critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributes_Statics::NewProp__critMultiplier = { "_critMultiplier", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributes, _critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critMultiplier_MetaData), NewProp__critMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributes_Statics::NewProp__damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributes_Statics::NewProp__critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAttributes_Statics::NewProp__critMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributes_Statics::PropPointers) < 2048);
// ********** End Class UAttackAttributes Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UAttackAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributes,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackAttributes_Statics::ClassParams = {
	&UAttackAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributes_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackAttributes_Statics::Class_MetaDataParams)
};
void UAttackAttributes::StaticRegisterNativesUAttackAttributes()
{
}
UClass* Z_Construct_UClass_UAttackAttributes()
{
	if (!Z_Registration_Info_UClass_UAttackAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackAttributes.OuterSingleton, Z_Construct_UClass_UAttackAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackAttributes.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackAttributes);
UAttackAttributes::~UAttackAttributes() {}
// ********** End Class UAttackAttributes **********************************************************

// ********** Begin Class UAttackComponent *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackComponent;
UClass* UAttackComponent::GetPrivateStaticClass()
{
	using TClass = UAttackComponent;
	if (!Z_Registration_Info_UClass_UAttackComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackComponent"),
			Z_Registration_Info_UClass_UAttackComponent.InnerSingleton,
			StaticRegisterNativesUAttackComponent,
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
	return Z_Registration_Info_UClass_UAttackComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackComponent_NoRegister()
{
	return UAttackComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackComponent constinit property declarations *************************
// ********** End Class UAttackComponent constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackComponent_Statics
UObject* (*const Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackComponent_Statics::ClassParams = {
	&UAttackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams)
};
void UAttackComponent::StaticRegisterNativesUAttackComponent()
{
}
UClass* Z_Construct_UClass_UAttackComponent()
{
	if (!Z_Registration_Info_UClass_UAttackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackComponent.OuterSingleton, Z_Construct_UClass_UAttackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackComponent.OuterSingleton;
}
UAttackComponent::UAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackComponent);
UAttackComponent::~UAttackComponent() {}
// ********** End Class UAttackComponent ***********************************************************

// ********** Begin Class AAttackFactory ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAttackFactory;
UClass* AAttackFactory::GetPrivateStaticClass()
{
	using TClass = AAttackFactory;
	if (!Z_Registration_Info_UClass_AAttackFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackFactory"),
			Z_Registration_Info_UClass_AAttackFactory.InnerSingleton,
			StaticRegisterNativesAAttackFactory,
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
	return Z_Registration_Info_UClass_AAttackFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_AAttackFactory_NoRegister()
{
	return AAttackFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAttackFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackConfig_MetaData[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAttackFactory constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAttackFactory constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAttackFactory_Statics

// ********** Begin Class AAttackFactory Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackFactory_Statics::NewProp__attackConfig = { "_attackConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackFactory, _attackConfig), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackConfig_MetaData), NewProp__attackConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackFactory_Statics::NewProp__attackComponent = { "_attackComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackFactory, _attackComponent), Z_Construct_UClass_UAttackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackComponent_MetaData), NewProp__attackComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttackFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackFactory_Statics::NewProp__attackConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackFactory_Statics::NewProp__attackComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackFactory_Statics::PropPointers) < 2048);
// ********** End Class AAttackFactory Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AAttackFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttackFactory_Statics::ClassParams = {
	&AAttackFactory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAttackFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAttackFactory_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttackFactory_Statics::Class_MetaDataParams)
};
void AAttackFactory::StaticRegisterNativesAAttackFactory()
{
}
UClass* Z_Construct_UClass_AAttackFactory()
{
	if (!Z_Registration_Info_UClass_AAttackFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttackFactory.OuterSingleton, Z_Construct_UClass_AAttackFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAttackFactory.OuterSingleton;
}
AAttackFactory::AAttackFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAttackFactory);
AAttackFactory::~AAttackFactory() {}
// ********** End Class AAttackFactory *************************************************************

// ********** Begin Class UAttackFactoryTemplate ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackFactoryTemplate;
UClass* UAttackFactoryTemplate::GetPrivateStaticClass()
{
	using TClass = UAttackFactoryTemplate;
	if (!Z_Registration_Info_UClass_UAttackFactoryTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackFactoryTemplate"),
			Z_Registration_Info_UClass_UAttackFactoryTemplate.InnerSingleton,
			StaticRegisterNativesUAttackFactoryTemplate,
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
	return Z_Registration_Info_UClass_UAttackFactoryTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackFactoryTemplate_NoRegister()
{
	return UAttackFactoryTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackFactoryTemplate_Statics
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
		{ "Category", "UAttackFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackAttributes_MetaData[] = {
		{ "Category", "UAttackFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackFactoryTemplate constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackFactoryTemplate constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackFactoryTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackFactoryTemplate_Statics

// ********** Begin Class UAttackFactoryTemplate Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackFactoryTemplate_Statics::NewProp__attackConfig = { "_attackConfig", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackFactoryTemplate, _attackConfig), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackConfig_MetaData), NewProp__attackConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackFactoryTemplate_Statics::NewProp__attackAttributes = { "_attackAttributes", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackFactoryTemplate, _attackAttributes), Z_Construct_UClass_UAttackAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackAttributes_MetaData), NewProp__attackAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackFactoryTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackFactoryTemplate_Statics::NewProp__attackConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackFactoryTemplate_Statics::NewProp__attackAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackFactoryTemplate_Statics::PropPointers) < 2048);
// ********** End Class UAttackFactoryTemplate Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UAttackFactoryTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeSetTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackFactoryTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackFactoryTemplate_Statics::ClassParams = {
	&UAttackFactoryTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackFactoryTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackFactoryTemplate_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackFactoryTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackFactoryTemplate_Statics::Class_MetaDataParams)
};
void UAttackFactoryTemplate::StaticRegisterNativesUAttackFactoryTemplate()
{
}
UClass* Z_Construct_UClass_UAttackFactoryTemplate()
{
	if (!Z_Registration_Info_UClass_UAttackFactoryTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackFactoryTemplate.OuterSingleton, Z_Construct_UClass_UAttackFactoryTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackFactoryTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackFactoryTemplate);
UAttackFactoryTemplate::~UAttackFactoryTemplate() {}
// ********** End Class UAttackFactoryTemplate *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttackActor, AAttackActor::StaticClass, TEXT("AAttackActor"), &Z_Registration_Info_UClass_AAttackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackActor), 2966237404U) },
		{ Z_Construct_UClass_UAttackConfig, UAttackConfig::StaticClass, TEXT("UAttackConfig"), &Z_Registration_Info_UClass_UAttackConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackConfig), 4046060452U) },
		{ Z_Construct_UClass_UAttackAttributes, UAttackAttributes::StaticClass, TEXT("UAttackAttributes"), &Z_Registration_Info_UClass_UAttackAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackAttributes), 2139564852U) },
		{ Z_Construct_UClass_UAttackComponent, UAttackComponent::StaticClass, TEXT("UAttackComponent"), &Z_Registration_Info_UClass_UAttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackComponent), 3274013899U) },
		{ Z_Construct_UClass_AAttackFactory, AAttackFactory::StaticClass, TEXT("AAttackFactory"), &Z_Registration_Info_UClass_AAttackFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackFactory), 3810931682U) },
		{ Z_Construct_UClass_UAttackFactoryTemplate, UAttackFactoryTemplate::StaticClass, TEXT("UAttackFactoryTemplate"), &Z_Registration_Info_UClass_UAttackFactoryTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackFactoryTemplate), 4007144259U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_1999971140{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
