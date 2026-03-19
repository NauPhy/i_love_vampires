// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Projectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProjectile() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackFactory();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectileFactory();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectileFactory_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackFactoryTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileComponent_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileFactoryTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileFactoryTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAttackShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectile **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectile;
UClass* AProjectile::GetPrivateStaticClass()
{
	using TClass = AProjectile;
	if (!Z_Registration_Info_UClass_AProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Projectile"),
			Z_Registration_Info_UClass_AProjectile.InnerSingleton,
			StaticRegisterNativesAProjectile,
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
	return Z_Registration_Info_UClass_AProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectile_NoRegister()
{
	return AProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectile constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectile constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectile_Statics

// ********** Begin Class AProjectile Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp__projectileConfig = { "_projectileConfig", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, _projectileConfig), Z_Construct_UClass_UProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileConfig_MetaData), NewProp__projectileConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Statics::NewProp__projectileAttributes = { "_projectileAttributes", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile, _projectileAttributes), Z_Construct_UClass_UProjectileAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileAttributes_MetaData), NewProp__projectileAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp__projectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Statics::NewProp__projectileAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::PropPointers) < 2048);
// ********** End Class AProjectile Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_AProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAttackActor,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Statics::ClassParams = {
	&AProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectile_Statics::Class_MetaDataParams)
};
void AProjectile::StaticRegisterNativesAProjectile()
{
}
UClass* Z_Construct_UClass_AProjectile()
{
	if (!Z_Registration_Info_UClass_AProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile.OuterSingleton, Z_Construct_UClass_AProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectile);
AProjectile::~AProjectile() {}
// ********** End Class AProjectile ****************************************************************

// ********** Begin Class UProjectileConfig ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileConfig;
UClass* UProjectileConfig::GetPrivateStaticClass()
{
	using TClass = UProjectileConfig;
	if (!Z_Registration_Info_UClass_UProjectileConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileConfig"),
			Z_Registration_Info_UClass_UProjectileConfig.InnerSingleton,
			StaticRegisterNativesUProjectileConfig,
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
	return Z_Registration_Info_UClass_UProjectileConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileConfig_NoRegister()
{
	return UProjectileConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shape_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackShape_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__targeting_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isHoming_MetaData[] = {
		{ "Category", "ProjectileConfig" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileConfig constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__attackShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__attackShape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__targeting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__targeting;
	static void NewProp__isHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isHoming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileConfig constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileConfig_Statics

// ********** Begin Class UProjectileConfig Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _shape), Z_Construct_UEnum_i_love_vampires_2_EProjectileShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 4060094284
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape = { "_attackShape", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _attackShape), Z_Construct_UEnum_i_love_vampires_2_EAttackShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackShape_MetaData), NewProp__attackShape_MetaData) }; // 2235169003
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting = { "_targeting", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _targeting), Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__targeting_MetaData), NewProp__targeting_MetaData) }; // 3327081672
void Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming_SetBit(void* Obj)
{
	((UProjectileConfig*)Obj)->_isHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming = { "_isHoming", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProjectileConfig), &Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isHoming_MetaData), NewProp__isHoming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::PropPointers) < 2048);
// ********** End Class UProjectileConfig Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UProjectileConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileConfig_Statics::ClassParams = {
	&UProjectileConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileConfig_Statics::Class_MetaDataParams)
};
void UProjectileConfig::StaticRegisterNativesUProjectileConfig()
{
}
UClass* Z_Construct_UClass_UProjectileConfig()
{
	if (!Z_Registration_Info_UClass_UProjectileConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileConfig.OuterSingleton, Z_Construct_UClass_UProjectileConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileConfig);
UProjectileConfig::~UProjectileConfig() {}
// ********** End Class UProjectileConfig **********************************************************

// ********** Begin Class UProjectileAttributes ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileAttributes;
UClass* UProjectileAttributes::GetPrivateStaticClass()
{
	using TClass = UProjectileAttributes;
	if (!Z_Registration_Info_UClass_UProjectileAttributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileAttributes"),
			Z_Registration_Info_UClass_UProjectileAttributes.InnerSingleton,
			StaticRegisterNativesUProjectileAttributes,
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
	return Z_Registration_Info_UClass_UProjectileAttributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileAttributes_NoRegister()
{
	return UProjectileAttributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__spread_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pierce_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bounce_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileCount_MetaData[] = {
		{ "Category", "ProjectileAttributes" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileAttributes constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__pierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__bounce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__projectileCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileAttributes constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileAttributes_Statics

// ********** Begin Class UProjectileAttributes Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__spread = { "_spread", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spread_MetaData), NewProp__spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__range_MetaData), NewProp__range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__pierce = { "_pierce", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _pierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pierce_MetaData), NewProp__pierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__bounce = { "_bounce", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _bounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bounce_MetaData), NewProp__bounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__projectileCount = { "_projectileCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _projectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileCount_MetaData), NewProp__projectileCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__pierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__bounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__projectileCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributes_Statics::PropPointers) < 2048);
// ********** End Class UProjectileAttributes Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UProjectileAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributes,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileAttributes_Statics::ClassParams = {
	&UProjectileAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributes_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileAttributes_Statics::Class_MetaDataParams)
};
void UProjectileAttributes::StaticRegisterNativesUProjectileAttributes()
{
}
UClass* Z_Construct_UClass_UProjectileAttributes()
{
	if (!Z_Registration_Info_UClass_UProjectileAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileAttributes.OuterSingleton, Z_Construct_UClass_UProjectileAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileAttributes.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileAttributes);
UProjectileAttributes::~UProjectileAttributes() {}
// ********** End Class UProjectileAttributes ******************************************************

// ********** Begin Class UProjectileComponent *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileComponent;
UClass* UProjectileComponent::GetPrivateStaticClass()
{
	using TClass = UProjectileComponent;
	if (!Z_Registration_Info_UClass_UProjectileComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileComponent"),
			Z_Registration_Info_UClass_UProjectileComponent.InnerSingleton,
			StaticRegisterNativesUProjectileComponent,
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
	return Z_Registration_Info_UClass_UProjectileComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileComponent_NoRegister()
{
	return UProjectileComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileComponent constinit property declarations *********************
// ********** End Class UProjectileComponent constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileComponent_Statics
UObject* (*const Z_Construct_UClass_UProjectileComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileComponent_Statics::ClassParams = {
	&UProjectileComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileComponent_Statics::Class_MetaDataParams)
};
void UProjectileComponent::StaticRegisterNativesUProjectileComponent()
{
}
UClass* Z_Construct_UClass_UProjectileComponent()
{
	if (!Z_Registration_Info_UClass_UProjectileComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileComponent.OuterSingleton, Z_Construct_UClass_UProjectileComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileComponent.OuterSingleton;
}
UProjectileComponent::UProjectileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileComponent);
UProjectileComponent::~UProjectileComponent() {}
// ********** End Class UProjectileComponent *******************************************************

// ********** Begin Class AProjectileFactory *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectileFactory;
UClass* AProjectileFactory::GetPrivateStaticClass()
{
	using TClass = AProjectileFactory;
	if (!Z_Registration_Info_UClass_AProjectileFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileFactory"),
			Z_Registration_Info_UClass_AProjectileFactory.InnerSingleton,
			StaticRegisterNativesAProjectileFactory,
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
	return Z_Registration_Info_UClass_AProjectileFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectileFactory_NoRegister()
{
	return AProjectileFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectileFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileConfig_MetaData[] = {
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AProjectileFactory constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AProjectileFactory constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectileFactory_Statics

// ********** Begin Class AProjectileFactory Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileFactory_Statics::NewProp__projectileConfig = { "_projectileConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileFactory, _projectileConfig), Z_Construct_UClass_UProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileConfig_MetaData), NewProp__projectileConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileFactory_Statics::NewProp__projectileComponent = { "_projectileComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileFactory, _projectileComponent), Z_Construct_UClass_UProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileComponent_MetaData), NewProp__projectileComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileFactory_Statics::NewProp__projectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileFactory_Statics::NewProp__projectileComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileFactory_Statics::PropPointers) < 2048);
// ********** End Class AProjectileFactory Property Definitions ************************************
UObject* (*const Z_Construct_UClass_AProjectileFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAttackFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileFactory_Statics::ClassParams = {
	&AProjectileFactory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectileFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileFactory_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileFactory_Statics::Class_MetaDataParams)
};
void AProjectileFactory::StaticRegisterNativesAProjectileFactory()
{
}
UClass* Z_Construct_UClass_AProjectileFactory()
{
	if (!Z_Registration_Info_UClass_AProjectileFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileFactory.OuterSingleton, Z_Construct_UClass_AProjectileFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileFactory.OuterSingleton;
}
AProjectileFactory::AProjectileFactory() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProjectileFactory);
AProjectileFactory::~AProjectileFactory() {}
// ********** End Class AProjectileFactory *********************************************************

// ********** Begin Class UProjectileFactoryTemplate ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileFactoryTemplate;
UClass* UProjectileFactoryTemplate::GetPrivateStaticClass()
{
	using TClass = UProjectileFactoryTemplate;
	if (!Z_Registration_Info_UClass_UProjectileFactoryTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileFactoryTemplate"),
			Z_Registration_Info_UClass_UProjectileFactoryTemplate.InnerSingleton,
			StaticRegisterNativesUProjectileFactoryTemplate,
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
	return Z_Registration_Info_UClass_UProjectileFactoryTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileFactoryTemplate_NoRegister()
{
	return UProjectileFactoryTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileFactoryTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileConfig_MetaData[] = {
		{ "Category", "UProjectileFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileAttributes_MetaData[] = {
		{ "Category", "UProjectileFactoryTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileFactoryTemplate constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileFactoryTemplate constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileFactoryTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileFactoryTemplate_Statics

// ********** Begin Class UProjectileFactoryTemplate Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectileFactoryTemplate_Statics::NewProp__projectileConfig = { "_projectileConfig", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileFactoryTemplate, _projectileConfig), Z_Construct_UClass_UProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileConfig_MetaData), NewProp__projectileConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectileFactoryTemplate_Statics::NewProp__projectileAttributes = { "_projectileAttributes", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileFactoryTemplate, _projectileAttributes), Z_Construct_UClass_UProjectileAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileAttributes_MetaData), NewProp__projectileAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileFactoryTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileFactoryTemplate_Statics::NewProp__projectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileFactoryTemplate_Statics::NewProp__projectileAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileFactoryTemplate_Statics::PropPointers) < 2048);
// ********** End Class UProjectileFactoryTemplate Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UProjectileFactoryTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttackFactoryTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileFactoryTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileFactoryTemplate_Statics::ClassParams = {
	&UProjectileFactoryTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileFactoryTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileFactoryTemplate_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileFactoryTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileFactoryTemplate_Statics::Class_MetaDataParams)
};
void UProjectileFactoryTemplate::StaticRegisterNativesUProjectileFactoryTemplate()
{
}
UClass* Z_Construct_UClass_UProjectileFactoryTemplate()
{
	if (!Z_Registration_Info_UClass_UProjectileFactoryTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileFactoryTemplate.OuterSingleton, Z_Construct_UClass_UProjectileFactoryTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileFactoryTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileFactoryTemplate);
UProjectileFactoryTemplate::~UProjectileFactoryTemplate() {}
// ********** End Class UProjectileFactoryTemplate *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, AProjectile::StaticClass, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 1126326546U) },
		{ Z_Construct_UClass_UProjectileConfig, UProjectileConfig::StaticClass, TEXT("UProjectileConfig"), &Z_Registration_Info_UClass_UProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileConfig), 68281729U) },
		{ Z_Construct_UClass_UProjectileAttributes, UProjectileAttributes::StaticClass, TEXT("UProjectileAttributes"), &Z_Registration_Info_UClass_UProjectileAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileAttributes), 3619395518U) },
		{ Z_Construct_UClass_UProjectileComponent, UProjectileComponent::StaticClass, TEXT("UProjectileComponent"), &Z_Registration_Info_UClass_UProjectileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileComponent), 4053368194U) },
		{ Z_Construct_UClass_AProjectileFactory, AProjectileFactory::StaticClass, TEXT("AProjectileFactory"), &Z_Registration_Info_UClass_AProjectileFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileFactory), 2250104678U) },
		{ Z_Construct_UClass_UProjectileFactoryTemplate, UProjectileFactoryTemplate::StaticClass, TEXT("UProjectileFactoryTemplate"), &Z_Registration_Info_UClass_UProjectileFactoryTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileFactoryTemplate), 910299897U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_4154601546{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
