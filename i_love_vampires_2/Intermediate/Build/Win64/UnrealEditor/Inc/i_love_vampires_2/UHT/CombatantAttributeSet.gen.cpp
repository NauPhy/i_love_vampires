// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantAttributeSet.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributeSet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatantAttributeSet ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantAttributeSet;
UClass* UCombatantAttributeSet::GetPrivateStaticClass()
{
	using TClass = UCombatantAttributeSet;
	if (!Z_Registration_Info_UClass_UCombatantAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantAttributeSet"),
			Z_Registration_Info_UClass_UCombatantAttributeSet.InnerSingleton,
			StaticRegisterNativesUCombatantAttributeSet,
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
	return Z_Registration_Info_UClass_UCombatantAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantAttributeSet_NoRegister()
{
	return UCombatantAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CombatantAttributeSet.h" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageReduction_flat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damageReduction_percent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_healthRegen_flat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_healthRegen_percent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Defense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_critChance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Offense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_critMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Offense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Offense" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bonusBounces_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bonusPierce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bonusProjectiles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AOESize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AOE" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_contactDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exactly as mutable as the others in practice\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exactly as mutable as the others in practice" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantAttributeSet constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_maxHP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_damageReduction_flat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_damageReduction_percent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_healthRegen_flat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_healthRegen_percent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_critChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_critMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_attackSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bonusBounces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bonusPierce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bonusProjectiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_projectileSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_projectileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AOESize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_movementSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_contactDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_currentHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatantAttributeSet constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantAttributeSet_Statics

// ********** Begin Class UCombatantAttributeSet Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_maxHP = { "maxHP", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, maxHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHP_MetaData), NewProp_maxHP_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_damageReduction_flat = { "damageReduction_flat", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, damageReduction_flat), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageReduction_flat_MetaData), NewProp_damageReduction_flat_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_damageReduction_percent = { "damageReduction_percent", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, damageReduction_percent), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damageReduction_percent_MetaData), NewProp_damageReduction_percent_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_healthRegen_flat = { "healthRegen_flat", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, healthRegen_flat), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_healthRegen_flat_MetaData), NewProp_healthRegen_flat_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_healthRegen_percent = { "healthRegen_percent", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, healthRegen_percent), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_healthRegen_percent_MetaData), NewProp_healthRegen_percent_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_critChance = { "critChance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, critChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_critChance_MetaData), NewProp_critChance_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_critMultiplier = { "critMultiplier", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, critMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_critMultiplier_MetaData), NewProp_critMultiplier_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_attackSpeed = { "attackSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, attackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attackSpeed_MetaData), NewProp_attackSpeed_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_bonusBounces = { "bonusBounces", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, bonusBounces), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bonusBounces_MetaData), NewProp_bonusBounces_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_bonusPierce = { "bonusPierce", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, bonusPierce), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bonusPierce_MetaData), NewProp_bonusPierce_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_bonusProjectiles = { "bonusProjectiles", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, bonusProjectiles), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bonusProjectiles_MetaData), NewProp_bonusProjectiles_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_projectileSpeed = { "projectileSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, projectileSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileSpeed_MetaData), NewProp_projectileSpeed_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_projectileSize = { "projectileSize", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, projectileSize), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileSize_MetaData), NewProp_projectileSize_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_AOESize = { "AOESize", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, AOESize), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AOESize_MetaData), NewProp_AOESize_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_movementSpeed = { "movementSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, movementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementSpeed_MetaData), NewProp_movementSpeed_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, range), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_range_MetaData), NewProp_range_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_contactDamage = { "contactDamage", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, contactDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_contactDamage_MetaData), NewProp_contactDamage_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_currentHP = { "currentHP", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantAttributeSet, currentHP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHP_MetaData), NewProp_currentHP_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatantAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_maxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_damageReduction_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_damageReduction_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_healthRegen_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_healthRegen_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_critMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_attackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_bonusBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_bonusPierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_bonusProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_projectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_projectileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_AOESize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_movementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_contactDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantAttributeSet_Statics::NewProp_currentHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributeSet_Statics::PropPointers) < 2048);
// ********** End Class UCombatantAttributeSet Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UCombatantAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantAttributeSet_Statics::ClassParams = {
	&UCombatantAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatantAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantAttributeSet_Statics::Class_MetaDataParams)
};
void UCombatantAttributeSet::StaticRegisterNativesUCombatantAttributeSet()
{
}
UClass* Z_Construct_UClass_UCombatantAttributeSet()
{
	if (!Z_Registration_Info_UClass_UCombatantAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantAttributeSet.OuterSingleton, Z_Construct_UClass_UCombatantAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantAttributeSet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantAttributeSet);
UCombatantAttributeSet::~UCombatantAttributeSet() {}
// ********** End Class UCombatantAttributeSet *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatantAttributeSet, UCombatantAttributeSet::StaticClass, TEXT("UCombatantAttributeSet"), &Z_Registration_Info_UClass_UCombatantAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantAttributeSet), 2840510990U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_1856641022{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributeSet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
