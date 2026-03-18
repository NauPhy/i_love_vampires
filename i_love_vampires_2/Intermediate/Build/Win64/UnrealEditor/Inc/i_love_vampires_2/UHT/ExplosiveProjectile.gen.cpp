// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExplosiveProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExplosiveProjectile() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveProjectile_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveProjectileFactory();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveProjectileFactory_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectileFactory();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEComponent_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileComponent_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileFactoryTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileFactoryTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExplosiveProjectile *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExplosiveProjectile;
UClass* AExplosiveProjectile::GetPrivateStaticClass()
{
	using TClass = AExplosiveProjectile;
	if (!Z_Registration_Info_UClass_AExplosiveProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectile"),
			Z_Registration_Info_UClass_AExplosiveProjectile.InnerSingleton,
			StaticRegisterNativesAExplosiveProjectile,
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
	return Z_Registration_Info_UClass_AExplosiveProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AExplosiveProjectile_NoRegister()
{
	return AExplosiveProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExplosiveProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOE_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosiveProjectileConfig_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosiveProjectileAttributes_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExplosiveProjectile constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOE;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExplosiveProjectile constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExplosiveProjectile_Statics

// ********** Begin Class AExplosiveProjectile Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__AOE = { "_AOE", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectile, _AOE), Z_Construct_UClass_AAOE_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOE_MetaData), NewProp__AOE_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__explosiveProjectileConfig = { "_explosiveProjectileConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectile, _explosiveProjectileConfig), Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileConfig_MetaData), NewProp__explosiveProjectileConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__explosiveProjectileAttributes = { "_explosiveProjectileAttributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectile, _explosiveProjectileAttributes), Z_Construct_UClass_UExplosiveProjectileAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileAttributes_MetaData), NewProp__explosiveProjectileAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__AOE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__explosiveProjectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__explosiveProjectileAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers) < 2048);
// ********** End Class AExplosiveProjectile Property Definitions **********************************
UObject* (*const Z_Construct_UClass_AExplosiveProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveProjectile_Statics::ClassParams = {
	&AExplosiveProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AExplosiveProjectile_Statics::Class_MetaDataParams)
};
void AExplosiveProjectile::StaticRegisterNativesAExplosiveProjectile()
{
}
UClass* Z_Construct_UClass_AExplosiveProjectile()
{
	if (!Z_Registration_Info_UClass_AExplosiveProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosiveProjectile.OuterSingleton, Z_Construct_UClass_AExplosiveProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExplosiveProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExplosiveProjectile);
AExplosiveProjectile::~AExplosiveProjectile() {}
// ********** End Class AExplosiveProjectile *******************************************************

// ********** Begin Class UExplosiveProjectileConfig ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileConfig;
UClass* UExplosiveProjectileConfig::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileConfig;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileConfig"),
			Z_Registration_Info_UClass_UExplosiveProjectileConfig.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileConfig,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister()
{
	return UExplosiveProjectileConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileConfig constinit property declarations ***************
// ********** End Class UExplosiveProjectileConfig constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileConfig_Statics
UObject* (*const Z_Construct_UClass_UExplosiveProjectileConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileConfig_Statics::ClassParams = {
	&UExplosiveProjectileConfig::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileConfig_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileConfig::StaticRegisterNativesUExplosiveProjectileConfig()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileConfig()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileConfig.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileConfig);
UExplosiveProjectileConfig::~UExplosiveProjectileConfig() {}
// ********** End Class UExplosiveProjectileConfig *************************************************

// ********** Begin Class UExplosiveProjectileAttributes *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileAttributes;
UClass* UExplosiveProjectileAttributes::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileAttributes;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileAttributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileAttributes"),
			Z_Registration_Info_UClass_UExplosiveProjectileAttributes.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileAttributes,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileAttributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileAttributes_NoRegister()
{
	return UExplosiveProjectileAttributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileAttributes constinit property declarations ***********
// ********** End Class UExplosiveProjectileAttributes constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileAttributes_Statics
UObject* (*const Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributes,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::ClassParams = {
	&UExplosiveProjectileAttributes::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileAttributes::StaticRegisterNativesUExplosiveProjectileAttributes()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileAttributes()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileAttributes.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileAttributes.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileAttributes);
UExplosiveProjectileAttributes::~UExplosiveProjectileAttributes() {}
// ********** End Class UExplosiveProjectileAttributes *********************************************

// ********** Begin Class UExplosiveProjectileComponent ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileComponent;
UClass* UExplosiveProjectileComponent::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileComponent;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileComponent"),
			Z_Registration_Info_UClass_UExplosiveProjectileComponent.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileComponent,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileComponent_NoRegister()
{
	return UExplosiveProjectileComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileComponent constinit property declarations ************
// ********** End Class UExplosiveProjectileComponent constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileComponent_Statics
UObject* (*const Z_Construct_UClass_UExplosiveProjectileComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileComponent_Statics::ClassParams = {
	&UExplosiveProjectileComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileComponent_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileComponent::StaticRegisterNativesUExplosiveProjectileComponent()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileComponent()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileComponent.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileComponent.OuterSingleton;
}
UExplosiveProjectileComponent::UExplosiveProjectileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileComponent);
UExplosiveProjectileComponent::~UExplosiveProjectileComponent() {}
// ********** End Class UExplosiveProjectileComponent **********************************************

// ********** Begin Class AExplosiveProjectileFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExplosiveProjectileFactory;
UClass* AExplosiveProjectileFactory::GetPrivateStaticClass()
{
	using TClass = AExplosiveProjectileFactory;
	if (!Z_Registration_Info_UClass_AExplosiveProjectileFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileFactory"),
			Z_Registration_Info_UClass_AExplosiveProjectileFactory.InnerSingleton,
			StaticRegisterNativesAExplosiveProjectileFactory,
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
	return Z_Registration_Info_UClass_AExplosiveProjectileFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_AExplosiveProjectileFactory_NoRegister()
{
	return AExplosiveProjectileFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExplosiveProjectileFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosiveProjectileConfig_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosiveProjectileComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEConfig_MetaData[] = {
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExplosiveProjectileFactory constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExplosiveProjectileFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveProjectileFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExplosiveProjectileFactory_Statics

// ********** Begin Class AExplosiveProjectileFactory Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__explosiveProjectileConfig = { "_explosiveProjectileConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectileFactory, _explosiveProjectileConfig), Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileConfig_MetaData), NewProp__explosiveProjectileConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__explosiveProjectileComponent = { "_explosiveProjectileComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectileFactory, _explosiveProjectileComponent), Z_Construct_UClass_UExplosiveProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileComponent_MetaData), NewProp__explosiveProjectileComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__AOEConfig = { "_AOEConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectileFactory, _AOEConfig), Z_Construct_UClass_UAOEConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEConfig_MetaData), NewProp__AOEConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__AOEComponent = { "_AOEComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosiveProjectileFactory, _AOEComponent), Z_Construct_UClass_UAOEComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEComponent_MetaData), NewProp__AOEComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveProjectileFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__explosiveProjectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__explosiveProjectileComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__AOEConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectileFactory_Statics::NewProp__AOEComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectileFactory_Statics::PropPointers) < 2048);
// ********** End Class AExplosiveProjectileFactory Property Definitions ***************************
UObject* (*const Z_Construct_UClass_AExplosiveProjectileFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectileFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectileFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveProjectileFactory_Statics::ClassParams = {
	&AExplosiveProjectileFactory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExplosiveProjectileFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectileFactory_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveProjectileFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_AExplosiveProjectileFactory_Statics::Class_MetaDataParams)
};
void AExplosiveProjectileFactory::StaticRegisterNativesAExplosiveProjectileFactory()
{
}
UClass* Z_Construct_UClass_AExplosiveProjectileFactory()
{
	if (!Z_Registration_Info_UClass_AExplosiveProjectileFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosiveProjectileFactory.OuterSingleton, Z_Construct_UClass_AExplosiveProjectileFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExplosiveProjectileFactory.OuterSingleton;
}
AExplosiveProjectileFactory::AExplosiveProjectileFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExplosiveProjectileFactory);
AExplosiveProjectileFactory::~AExplosiveProjectileFactory() {}
// ********** End Class AExplosiveProjectileFactory ************************************************

// ********** Begin Class UExplosiveProjectileFactoryTemplate **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate;
UClass* UExplosiveProjectileFactoryTemplate::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileFactoryTemplate;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileFactoryTemplate"),
			Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileFactoryTemplate,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_NoRegister()
{
	return UExplosiveProjectileFactoryTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "ExplosiveProjectile.h" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosiveProjectileConfig_MetaData[] = {
		{ "Category", "UExplosiveProjectileFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosiveProjectileAttributes_MetaData[] = {
		{ "Category", "UExplosiveProjectileFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEConfig_MetaData[] = {
		{ "Category", "UExplosiveProjectileFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEAttributes_MetaData[] = {
		{ "Category", "UExplosiveProjectileFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileFactoryTemplate constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileAttributes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UExplosiveProjectileFactoryTemplate constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileFactoryTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics

// ********** Begin Class UExplosiveProjectileFactoryTemplate Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__explosiveProjectileConfig = { "_explosiveProjectileConfig", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileFactoryTemplate, _explosiveProjectileConfig), Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileConfig_MetaData), NewProp__explosiveProjectileConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__explosiveProjectileAttributes = { "_explosiveProjectileAttributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileFactoryTemplate, _explosiveProjectileAttributes), Z_Construct_UClass_UExplosiveProjectileAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileAttributes_MetaData), NewProp__explosiveProjectileAttributes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__AOEConfig = { "_AOEConfig", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileFactoryTemplate, _AOEConfig), Z_Construct_UClass_UAOEConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEConfig_MetaData), NewProp__AOEConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__AOEAttributes = { "_AOEAttributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileFactoryTemplate, _AOEAttributes), Z_Construct_UClass_UAOEAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEAttributes_MetaData), NewProp__AOEAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__explosiveProjectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__explosiveProjectileAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__AOEConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::NewProp__AOEAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::PropPointers) < 2048);
// ********** End Class UExplosiveProjectileFactoryTemplate Property Definitions *******************
UObject* (*const Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileFactoryTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::ClassParams = {
	&UExplosiveProjectileFactoryTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileFactoryTemplate::StaticRegisterNativesUExplosiveProjectileFactoryTemplate()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileFactoryTemplate()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileFactoryTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileFactoryTemplate);
UExplosiveProjectileFactoryTemplate::~UExplosiveProjectileFactoryTemplate() {}
// ********** End Class UExplosiveProjectileFactoryTemplate ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExplosiveProjectile, AExplosiveProjectile::StaticClass, TEXT("AExplosiveProjectile"), &Z_Registration_Info_UClass_AExplosiveProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveProjectile), 3868832140U) },
		{ Z_Construct_UClass_UExplosiveProjectileConfig, UExplosiveProjectileConfig::StaticClass, TEXT("UExplosiveProjectileConfig"), &Z_Registration_Info_UClass_UExplosiveProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileConfig), 2639790154U) },
		{ Z_Construct_UClass_UExplosiveProjectileAttributes, UExplosiveProjectileAttributes::StaticClass, TEXT("UExplosiveProjectileAttributes"), &Z_Registration_Info_UClass_UExplosiveProjectileAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileAttributes), 1620965878U) },
		{ Z_Construct_UClass_UExplosiveProjectileComponent, UExplosiveProjectileComponent::StaticClass, TEXT("UExplosiveProjectileComponent"), &Z_Registration_Info_UClass_UExplosiveProjectileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileComponent), 1232108981U) },
		{ Z_Construct_UClass_AExplosiveProjectileFactory, AExplosiveProjectileFactory::StaticClass, TEXT("AExplosiveProjectileFactory"), &Z_Registration_Info_UClass_AExplosiveProjectileFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveProjectileFactory), 3430620279U) },
		{ Z_Construct_UClass_UExplosiveProjectileFactoryTemplate, UExplosiveProjectileFactoryTemplate::StaticClass, TEXT("UExplosiveProjectileFactoryTemplate"), &Z_Registration_Info_UClass_UExplosiveProjectileFactoryTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileFactoryTemplate), 3122426560U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_1624326016{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
