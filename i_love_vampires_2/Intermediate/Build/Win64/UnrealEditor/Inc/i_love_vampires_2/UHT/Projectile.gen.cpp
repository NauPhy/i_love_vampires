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
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackLevel();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileAttributeData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileLevel();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileLevel_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileTemplate_NoRegister();
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
#endif // WITH_METADATA

// ********** Begin Class AProjectile constinit property declarations ******************************
// ********** End Class AProjectile constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProjectile_Statics
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isBoomerang_MetaData[] = {
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
	static void NewProp__isBoomerang_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isBoomerang;
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
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _shape), Z_Construct_UEnum_i_love_vampires_2_EProjectileShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 583555012
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape = { "_attackShape", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _attackShape), Z_Construct_UEnum_i_love_vampires_2_EAttackShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackShape_MetaData), NewProp__attackShape_MetaData) }; // 4031634499
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting = { "_targeting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileConfig, _targeting), Z_Construct_UEnum_i_love_vampires_2_EProjectileTargeting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__targeting_MetaData), NewProp__targeting_MetaData) }; // 409546481
void Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming_SetBit(void* Obj)
{
	((UProjectileConfig*)Obj)->_isHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming = { "_isHoming", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProjectileConfig), &Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isHoming_MetaData), NewProp__isHoming_MetaData) };
void Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isBoomerang_SetBit(void* Obj)
{
	((UProjectileConfig*)Obj)->_isBoomerang = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isBoomerang = { "_isBoomerang", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProjectileConfig), &Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isBoomerang_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isBoomerang_MetaData), NewProp__isBoomerang_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__attackShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isHoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileConfig_Statics::NewProp__isBoomerang,
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

// ********** Begin Class UProjectileAttributeData *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileAttributeData;
UClass* UProjectileAttributeData::GetPrivateStaticClass()
{
	using TClass = UProjectileAttributeData;
	if (!Z_Registration_Info_UClass_UProjectileAttributeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileAttributeData"),
			Z_Registration_Info_UClass_UProjectileAttributeData.InnerSingleton,
			StaticRegisterNativesUProjectileAttributeData,
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
	return Z_Registration_Info_UClass_UProjectileAttributeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileAttributeData_NoRegister()
{
	return UProjectileAttributeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileAttributeData_Statics
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
		{ "Category", "ProjectileAttributeData" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "Category", "ProjectileAttributeData" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[] = {
		{ "Category", "ProjectileAttributeData" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pierce_MetaData[] = {
		{ "Category", "ProjectileAttributeData" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bounce_MetaData[] = {
		{ "Category", "ProjectileAttributeData" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileCount_MetaData[] = {
		{ "Category", "ProjectileAttributeData" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileAttributeData constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__spread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__pierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__bounce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__projectileCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileAttributeData constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileAttributeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileAttributeData_Statics

// ********** Begin Class UProjectileAttributeData Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__spread = { "_spread", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributeData, _spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spread_MetaData), NewProp__spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributeData, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributeData, _range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__range_MetaData), NewProp__range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__pierce = { "_pierce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributeData, _pierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pierce_MetaData), NewProp__pierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__bounce = { "_bounce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributeData, _bounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bounce_MetaData), NewProp__bounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__projectileCount = { "_projectileCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributeData, _projectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileCount_MetaData), NewProp__projectileCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileAttributeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__spread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__pierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__bounce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileAttributeData_Statics::NewProp__projectileCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributeData_Statics::PropPointers) < 2048);
// ********** End Class UProjectileAttributeData Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UProjectileAttributeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeData,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileAttributeData_Statics::ClassParams = {
	&UProjectileAttributeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileAttributeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributeData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileAttributeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileAttributeData_Statics::Class_MetaDataParams)
};
void UProjectileAttributeData::StaticRegisterNativesUProjectileAttributeData()
{
}
UClass* Z_Construct_UClass_UProjectileAttributeData()
{
	if (!Z_Registration_Info_UClass_UProjectileAttributeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileAttributeData.OuterSingleton, Z_Construct_UClass_UProjectileAttributeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileAttributeData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileAttributeData);
UProjectileAttributeData::~UProjectileAttributeData() {}
// ********** End Class UProjectileAttributeData ***************************************************

// ********** Begin Class UProjectileLevel *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileLevel;
UClass* UProjectileLevel::GetPrivateStaticClass()
{
	using TClass = UProjectileLevel;
	if (!Z_Registration_Info_UClass_UProjectileLevel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileLevel"),
			Z_Registration_Info_UClass_UProjectileLevel.InnerSingleton,
			StaticRegisterNativesUProjectileLevel,
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
	return Z_Registration_Info_UClass_UProjectileLevel.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileLevel_NoRegister()
{
	return UProjectileLevel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileLevel_Statics
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileOffsets_MetaData[] = {
		{ "Category", "ProjectileLevel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileLevel constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileLevel constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileLevel_Statics

// ********** Begin Class UProjectileLevel Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectileLevel_Statics::NewProp__projectileOffsets = { "_projectileOffsets", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileLevel, _projectileOffsets), Z_Construct_UClass_UProjectileAttributeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileOffsets_MetaData), NewProp__projectileOffsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileLevel_Statics::NewProp__projectileOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileLevel_Statics::PropPointers) < 2048);
// ********** End Class UProjectileLevel Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UProjectileLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttackLevel,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileLevel_Statics::ClassParams = {
	&UProjectileLevel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileLevel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileLevel_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileLevel_Statics::Class_MetaDataParams)
};
void UProjectileLevel::StaticRegisterNativesUProjectileLevel()
{
}
UClass* Z_Construct_UClass_UProjectileLevel()
{
	if (!Z_Registration_Info_UClass_UProjectileLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileLevel.OuterSingleton, Z_Construct_UClass_UProjectileLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileLevel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileLevel);
UProjectileLevel::~UProjectileLevel() {}
// ********** End Class UProjectileLevel ***********************************************************

// ********** Begin Class UProjectileTemplate ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileTemplate;
UClass* UProjectileTemplate::GetPrivateStaticClass()
{
	using TClass = UProjectileTemplate;
	if (!Z_Registration_Info_UClass_UProjectileTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileTemplate"),
			Z_Registration_Info_UClass_UProjectileTemplate.InnerSingleton,
			StaticRegisterNativesUProjectileTemplate,
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
	return Z_Registration_Info_UClass_UProjectileTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileTemplate_NoRegister()
{
	return UProjectileTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileTemplate_Statics
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
		{ "Category", "ProjectileTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileTemplate constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__projectileConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileTemplate constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileTemplate_Statics

// ********** Begin Class UProjectileTemplate Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectileTemplate_Statics::NewProp__projectileConfig = { "_projectileConfig", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileTemplate, _projectileConfig), Z_Construct_UClass_UProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileConfig_MetaData), NewProp__projectileConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileTemplate_Statics::NewProp__projectileConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileTemplate_Statics::PropPointers) < 2048);
// ********** End Class UProjectileTemplate Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UProjectileTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttackTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileTemplate_Statics::ClassParams = {
	&UProjectileTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileTemplate_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileTemplate_Statics::Class_MetaDataParams)
};
void UProjectileTemplate::StaticRegisterNativesUProjectileTemplate()
{
}
UClass* Z_Construct_UClass_UProjectileTemplate()
{
	if (!Z_Registration_Info_UClass_UProjectileTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileTemplate.OuterSingleton, Z_Construct_UClass_UProjectileTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileTemplate);
UProjectileTemplate::~UProjectileTemplate() {}
// ********** End Class UProjectileTemplate ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, AProjectile::StaticClass, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 338003140U) },
		{ Z_Construct_UClass_UProjectileConfig, UProjectileConfig::StaticClass, TEXT("UProjectileConfig"), &Z_Registration_Info_UClass_UProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileConfig), 3116492247U) },
		{ Z_Construct_UClass_UProjectileAttributeData, UProjectileAttributeData::StaticClass, TEXT("UProjectileAttributeData"), &Z_Registration_Info_UClass_UProjectileAttributeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileAttributeData), 3096532316U) },
		{ Z_Construct_UClass_UProjectileLevel, UProjectileLevel::StaticClass, TEXT("UProjectileLevel"), &Z_Registration_Info_UClass_UProjectileLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileLevel), 1802959565U) },
		{ Z_Construct_UClass_UProjectileTemplate, UProjectileTemplate::StaticClass, TEXT("UProjectileTemplate"), &Z_Registration_Info_UClass_UProjectileTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileTemplate), 4192591165U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_3237331914{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
