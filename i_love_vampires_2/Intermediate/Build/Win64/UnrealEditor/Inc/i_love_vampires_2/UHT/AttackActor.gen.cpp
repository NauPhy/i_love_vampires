// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AttackActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAttackActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributes();
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
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttackActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pawnRef_MetaData[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__effectedPawns_MetaData[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAttackActor constinit property declarations *****************************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp__pawnRef;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp__effectedPawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__effectedPawns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAttackActor constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAttackActor_Statics

// ********** Begin Class AAttackActor Property Definitions ****************************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__pawnRef = { "_pawnRef", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _pawnRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pawnRef_MetaData), NewProp__pawnRef_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns_Inner = { "_effectedPawns", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns = { "_effectedPawns", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _effectedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__effectedPawns_MetaData), NewProp__effectedPawns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _config), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAttackActor_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAttackActor, _attributes), Z_Construct_UClass_UAttackAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAttackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__pawnRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__effectedPawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAttackActor_Statics::NewProp__attributes,
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
	0x008000A4u,
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

// ********** Begin Class UAttackData **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackData;
UClass* UAttackData::GetPrivateStaticClass()
{
	using TClass = UAttackData;
	if (!Z_Registration_Info_UClass_UAttackData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackData"),
			Z_Registration_Info_UClass_UAttackData.InnerSingleton,
			StaticRegisterNativesUAttackData,
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
	return Z_Registration_Info_UClass_UAttackData.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackData_NoRegister()
{
	return UAttackData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FAttackData and FAttackConfig mirror the inheritance of AAttackActor. FAttackData does not mirror the inheritance, because then it would essentially inherit twice, duplicating the properties.\n" },
#endif
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAttackData and FAttackConfig mirror the inheritance of AAttackActor. FAttackData does not mirror the inheritance, because then it would essentially inherit twice, duplicating the properties." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "AttackData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "AttackData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAttackData constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAttackData constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAttackData_Statics

// ********** Begin Class UAttackData Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackData_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackData, _config), Z_Construct_UClass_UAttackConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackData_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackData, _attributes), Z_Construct_UClass_UAttackAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackData_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackData_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackData_Statics::PropPointers) < 2048);
// ********** End Class UAttackData Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_UAttackData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackData_Statics::ClassParams = {
	&UAttackData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackData_Statics::Class_MetaDataParams)
};
void UAttackData::StaticRegisterNativesUAttackData()
{
}
UClass* Z_Construct_UClass_UAttackData()
{
	if (!Z_Registration_Info_UClass_UAttackData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackData.OuterSingleton, Z_Construct_UClass_UAttackData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackData.OuterSingleton;
}
UAttackData::UAttackData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackData);
UAttackData::~UAttackData() {}
// ********** End Class UAttackData ****************************************************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UCLASS(BlueprintType)\n//class I_LOVE_VAMPIRES_2_API UAttackConfig : public UObject\n//{\n//\x09GENERATED_BODY()\n//\n//public:\n//\x09UPROPERTY(EditAnywhere, Category = \"AttackData\")\n//\x09TSubclassOf<AAttackActor> _attackClass;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WeaponConfig\")\n//\x09TArray<FEffectStruct> _statusEffects;\n//\x09UAttackConfig() { _attackClass = AAttackActor::StaticClass(); }\n//};\n" },
#endif
		{ "IncludePath", "AttackActor.h" },
		{ "ModuleRelativePath", "AttackActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCLASS(BlueprintType)\nclass I_LOVE_VAMPIRES_2_API UAttackConfig : public UObject\n{\n       GENERATED_BODY()\n\npublic:\n       UPROPERTY(EditAnywhere, Category = \"AttackData\")\n       TSubclassOf<AAttackActor> _attackClass;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"WeaponConfig\")\n       TArray<FEffectStruct> _statusEffects;\n       UAttackConfig() { _attackClass = AAttackActor::StaticClass(); }\n};" },
#endif
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributes_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributes, _damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damage_MetaData), NewProp__damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributes_Statics::NewProp__critChance = { "_critChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributes, _critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critChance_MetaData), NewProp__critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackAttributes_Statics::NewProp__critMultiplier = { "_critMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackAttributes, _critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critMultiplier_MetaData), NewProp__critMultiplier_MetaData) };
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
	0x001000A0u,
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
UAttackAttributes::UAttackAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAttackAttributes);
UAttackAttributes::~UAttackAttributes() {}
// ********** End Class UAttackAttributes **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttackActor, AAttackActor::StaticClass, TEXT("AAttackActor"), &Z_Registration_Info_UClass_AAttackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackActor), 3227109680U) },
		{ Z_Construct_UClass_UAttackData, UAttackData::StaticClass, TEXT("UAttackData"), &Z_Registration_Info_UClass_UAttackData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackData), 3080213989U) },
		{ Z_Construct_UClass_UAttackAttributes, UAttackAttributes::StaticClass, TEXT("UAttackAttributes"), &Z_Registration_Info_UClass_UAttackAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackAttributes), 2869574812U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_3726422766{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
