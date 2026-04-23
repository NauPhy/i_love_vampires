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
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AProjectile();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributeData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributeData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileAttributeData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileLevel();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileLevel_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UExplosiveProjectileTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileLevel();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UProjectileTemplate();
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
#endif // WITH_METADATA

// ********** Begin Class AExplosiveProjectile constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOE;
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosiveProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosiveProjectile_Statics::NewProp__AOE,
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
	0x009000A4u,
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

// ********** Begin Class UExplosiveProjectileAttributeData ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileAttributeData;
UClass* UExplosiveProjectileAttributeData::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileAttributeData;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileAttributeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileAttributeData"),
			Z_Registration_Info_UClass_UExplosiveProjectileAttributeData.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileAttributeData,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileAttributeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileAttributeData_NoRegister()
{
	return UExplosiveProjectileAttributeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics
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

// ********** Begin Class UExplosiveProjectileAttributeData constinit property declarations ********
// ********** End Class UExplosiveProjectileAttributeData constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileAttributeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics
UObject* (*const Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeData,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics::ClassParams = {
	&UExplosiveProjectileAttributeData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileAttributeData::StaticRegisterNativesUExplosiveProjectileAttributeData()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileAttributeData()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileAttributeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileAttributeData.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileAttributeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileAttributeData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileAttributeData);
UExplosiveProjectileAttributeData::~UExplosiveProjectileAttributeData() {}
// ********** End Class UExplosiveProjectileAttributeData ******************************************

// ********** Begin Class UExplosiveProjectileLevel ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileLevel;
UClass* UExplosiveProjectileLevel::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileLevel;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileLevel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileLevel"),
			Z_Registration_Info_UClass_UExplosiveProjectileLevel.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileLevel,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileLevel.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileLevel_NoRegister()
{
	return UExplosiveProjectileLevel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileLevel_Statics
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__explosiveProjectileAttributeOffsets_MetaData[] = {
		{ "Category", "ExplosiveProjectileLevel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEAttributeOffsets_MetaData[] = {
		{ "Category", "ExplosiveProjectileLevel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEAttributeOffsets_attack_MetaData[] = {
		{ "Category", "ExplosiveProjectileLevel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileLevel constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileAttributeOffsets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEAttributeOffsets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEAttributeOffsets_attack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UExplosiveProjectileLevel constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileLevel_Statics

// ********** Begin Class UExplosiveProjectileLevel Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileLevel_Statics::NewProp__explosiveProjectileAttributeOffsets = { "_explosiveProjectileAttributeOffsets", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileLevel, _explosiveProjectileAttributeOffsets), Z_Construct_UClass_UExplosiveProjectileAttributeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileAttributeOffsets_MetaData), NewProp__explosiveProjectileAttributeOffsets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileLevel_Statics::NewProp__AOEAttributeOffsets = { "_AOEAttributeOffsets", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileLevel, _AOEAttributeOffsets), Z_Construct_UClass_UAOEAttributeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEAttributeOffsets_MetaData), NewProp__AOEAttributeOffsets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileLevel_Statics::NewProp__AOEAttributeOffsets_attack = { "_AOEAttributeOffsets_attack", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileLevel, _AOEAttributeOffsets_attack), Z_Construct_UClass_UAttackAttributeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEAttributeOffsets_attack_MetaData), NewProp__AOEAttributeOffsets_attack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExplosiveProjectileLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileLevel_Statics::NewProp__explosiveProjectileAttributeOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileLevel_Statics::NewProp__AOEAttributeOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileLevel_Statics::NewProp__AOEAttributeOffsets_attack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileLevel_Statics::PropPointers) < 2048);
// ********** End Class UExplosiveProjectileLevel Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UExplosiveProjectileLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileLevel,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileLevel_Statics::ClassParams = {
	&UExplosiveProjectileLevel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExplosiveProjectileLevel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileLevel_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileLevel_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileLevel::StaticRegisterNativesUExplosiveProjectileLevel()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileLevel()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileLevel.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileLevel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileLevel);
UExplosiveProjectileLevel::~UExplosiveProjectileLevel() {}
// ********** End Class UExplosiveProjectileLevel **************************************************

// ********** Begin Class UExplosiveProjectileTemplate *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UExplosiveProjectileTemplate;
UClass* UExplosiveProjectileTemplate::GetPrivateStaticClass()
{
	using TClass = UExplosiveProjectileTemplate;
	if (!Z_Registration_Info_UClass_UExplosiveProjectileTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveProjectileTemplate"),
			Z_Registration_Info_UClass_UExplosiveProjectileTemplate.InnerSingleton,
			StaticRegisterNativesUExplosiveProjectileTemplate,
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
	return Z_Registration_Info_UClass_UExplosiveProjectileTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UExplosiveProjectileTemplate_NoRegister()
{
	return UExplosiveProjectileTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UExplosiveProjectileTemplate_Statics
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
		{ "Category", "ExplosiveProjectileTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEConfig_MetaData[] = {
		{ "Category", "ExplosiveProjectileTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Instanced)\n//TObjectPtr<UExplosiveProjectileAttributeData> _explosiveProjectileAttributes;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Instanced)\nTObjectPtr<UExplosiveProjectileAttributeData> _explosiveProjectileAttributes;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEConfig_attack_MetaData[] = {
		{ "Category", "ExplosiveProjectileTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Instanced)\n//TObjectPtr<UAOEAttributeData> _AOEAttributes;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExplosiveProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Instanced)\nTObjectPtr<UAOEAttributeData> _AOEAttributes;" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UExplosiveProjectileTemplate constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__explosiveProjectileConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEConfig_attack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UExplosiveProjectileTemplate constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExplosiveProjectileTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UExplosiveProjectileTemplate_Statics

// ********** Begin Class UExplosiveProjectileTemplate Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::NewProp__explosiveProjectileConfig = { "_explosiveProjectileConfig", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileTemplate, _explosiveProjectileConfig), Z_Construct_UClass_UExplosiveProjectileConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__explosiveProjectileConfig_MetaData), NewProp__explosiveProjectileConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::NewProp__AOEConfig = { "_AOEConfig", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileTemplate, _AOEConfig), Z_Construct_UClass_UAOEConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEConfig_MetaData), NewProp__AOEConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::NewProp__AOEConfig_attack = { "_AOEConfig_attack", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExplosiveProjectileTemplate, _AOEConfig_attack), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEConfig_attack_MetaData), NewProp__AOEConfig_attack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::NewProp__explosiveProjectileConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::NewProp__AOEConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::NewProp__AOEConfig_attack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::PropPointers) < 2048);
// ********** End Class UExplosiveProjectileTemplate Property Definitions **************************
UObject* (*const Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::ClassParams = {
	&UExplosiveProjectileTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::Class_MetaDataParams)
};
void UExplosiveProjectileTemplate::StaticRegisterNativesUExplosiveProjectileTemplate()
{
}
UClass* Z_Construct_UClass_UExplosiveProjectileTemplate()
{
	if (!Z_Registration_Info_UClass_UExplosiveProjectileTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExplosiveProjectileTemplate.OuterSingleton, Z_Construct_UClass_UExplosiveProjectileTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExplosiveProjectileTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UExplosiveProjectileTemplate);
UExplosiveProjectileTemplate::~UExplosiveProjectileTemplate() {}
// ********** End Class UExplosiveProjectileTemplate ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExplosiveProjectile, AExplosiveProjectile::StaticClass, TEXT("AExplosiveProjectile"), &Z_Registration_Info_UClass_AExplosiveProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveProjectile), 1583200939U) },
		{ Z_Construct_UClass_UExplosiveProjectileConfig, UExplosiveProjectileConfig::StaticClass, TEXT("UExplosiveProjectileConfig"), &Z_Registration_Info_UClass_UExplosiveProjectileConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileConfig), 2639790154U) },
		{ Z_Construct_UClass_UExplosiveProjectileAttributeData, UExplosiveProjectileAttributeData::StaticClass, TEXT("UExplosiveProjectileAttributeData"), &Z_Registration_Info_UClass_UExplosiveProjectileAttributeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileAttributeData), 3455000527U) },
		{ Z_Construct_UClass_UExplosiveProjectileLevel, UExplosiveProjectileLevel::StaticClass, TEXT("UExplosiveProjectileLevel"), &Z_Registration_Info_UClass_UExplosiveProjectileLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileLevel), 666109615U) },
		{ Z_Construct_UClass_UExplosiveProjectileTemplate, UExplosiveProjectileTemplate::StaticClass, TEXT("UExplosiveProjectileTemplate"), &Z_Registration_Info_UClass_UExplosiveProjectileTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExplosiveProjectileTemplate), 1101108366U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_1244393470{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveProjectile_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
