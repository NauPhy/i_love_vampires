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
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileData_NoRegister();
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

// ********** Begin Class UProjectileData **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UProjectileData;
UClass* UProjectileData::GetPrivateStaticClass()
{
	using TClass = UProjectileData;
	if (!Z_Registration_Info_UClass_UProjectileData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ProjectileData"),
			Z_Registration_Info_UClass_UProjectileData.InnerSingleton,
			StaticRegisterNativesUProjectileData,
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
	return Z_Registration_Info_UClass_UProjectileData.InnerSingleton;
}
UClass* Z_Construct_UClass_UProjectileData_NoRegister()
{
	return UProjectileData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UProjectileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "ProjectileData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Projectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UProjectileData constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UProjectileData constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UProjectileData_Statics

// ********** Begin Class UProjectileData Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectileData_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileData, _config), Z_Construct_UClass_UProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectileData_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileData, _attributes), Z_Construct_UClass_UProjectileAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileData_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileData_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileData_Statics::PropPointers) < 2048);
// ********** End Class UProjectileData Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UProjectileData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileData_Statics::ClassParams = {
	&UProjectileData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProjectileData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileData_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileData_Statics::Class_MetaDataParams)
};
void UProjectileData::StaticRegisterNativesUProjectileData()
{
}
UClass* Z_Construct_UClass_UProjectileData()
{
	if (!Z_Registration_Info_UClass_UProjectileData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileData.OuterSingleton, Z_Construct_UClass_UProjectileData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileData.OuterSingleton;
}
UProjectileData::UProjectileData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileData);
UProjectileData::~UProjectileData() {}
// ********** End Class UProjectileData ************************************************************

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
		{ "Comment", "//UCLASS(BlueprintType)\n//class I_LOVE_VAMPIRES_2_API UProjectileConfig : public UAttackConfig\n//{\n//\x09GENERATED_BODY()\n//\n//public:\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n//\x09""EProjectileShape _shape = static_cast<EProjectileShape>(0);\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n//\x09""EAttackShape _attackShape = static_cast<EAttackShape>(0);\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n//\x09""EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n//\x09""bool _isHoming = false;\n//\x09UProjectileConfig() { _attackClass = AProjectile::StaticClass(); }\n//};\n" },
#endif
		{ "IncludePath", "Projectile.h" },
		{ "ModuleRelativePath", "Projectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCLASS(BlueprintType)\nclass I_LOVE_VAMPIRES_2_API UProjectileConfig : public UAttackConfig\n{\n       GENERATED_BODY()\n\npublic:\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n       EProjectileShape _shape = static_cast<EProjectileShape>(0);\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n       EAttackShape _attackShape = static_cast<EAttackShape>(0);\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n       EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"ProjectileConfig\")\n       bool _isHoming = false;\n       UProjectileConfig() { _attackClass = AProjectile::StaticClass(); }\n};" },
#endif
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__spread = { "_spread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _spread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spread_MetaData), NewProp__spread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__range_MetaData), NewProp__range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__pierce = { "_pierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _pierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pierce_MetaData), NewProp__pierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__bounce = { "_bounce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _bounce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bounce_MetaData), NewProp__bounce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProjectileAttributes_Statics::NewProp__projectileCount = { "_projectileCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileAttributes, _projectileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileCount_MetaData), NewProp__projectileCount_MetaData) };
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
	(UObject* (*)())Z_Construct_UClass_UAttackAttributes,
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
	0x001000A0u,
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
UProjectileAttributes::UProjectileAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UProjectileAttributes);
UProjectileAttributes::~UProjectileAttributes() {}
// ********** End Class UProjectileAttributes ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile, AProjectile::StaticClass, TEXT("AProjectile"), &Z_Registration_Info_UClass_AProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile), 1420763185U) },
		{ Z_Construct_UClass_UProjectileData, UProjectileData::StaticClass, TEXT("UProjectileData"), &Z_Registration_Info_UClass_UProjectileData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileData), 3464810531U) },
		{ Z_Construct_UClass_UProjectileAttributes, UProjectileAttributes::StaticClass, TEXT("UProjectileAttributes"), &Z_Registration_Info_UClass_UProjectileAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileAttributes), 1564760478U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_1395805620{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Projectile_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
