// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantAttributes() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantAttributes();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCombatantAttributes **********************************************
struct Z_Construct_UScriptStruct_FCombatantAttributes_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCombatantAttributes); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCombatantAttributes); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// additive and multiplicative indicates the effect this attribute should have on a corresponding attribute on a weapon, projectile, etc.\n// there hopefully will not be any cases in which an attribute modifies two corresponding attributes differently, but if there is, I will\n// specify per object.\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive and multiplicative indicates the effect this attribute should have on a corresponding attribute on a weapon, projectile, etc.\nthere hopefully will not be any cases in which an attribute modifies two corresponding attributes differently, but if there is, I will\nspecify per object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__maxHP_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__currentHP_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damageReduction_flat_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damageReduction_percent_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__healthRegen_flat_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__healthRegen_percent_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critChance_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__critMultiplier_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackSpeed_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bonusBounces_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bonusPierce_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__bonusProjectiles_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileSpeed_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__projectileSize_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__movementSpeed_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__contactDamage_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//additive\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__selfSize_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__iFrameDuration_MetaData[] = {
		{ "Category", "FCombatantTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//multiplicative\n" },
#endif
		{ "ModuleRelativePath", "CombatantAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "multiplicative" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCombatantAttributes constinit property declarations **************
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
// ********** End ScriptStruct FCombatantAttributes constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatantAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCombatantAttributes_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatantAttributes;
class UScriptStruct* FCombatantAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatantAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatantAttributes, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("CombatantAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatantAttributes.OuterSingleton;
	}

// ********** Begin ScriptStruct FCombatantAttributes Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__maxHP = { "_maxHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _maxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__maxHP_MetaData), NewProp__maxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__currentHP = { "_currentHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _currentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__currentHP_MetaData), NewProp__currentHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__damageReduction_flat = { "_damageReduction_flat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _damageReduction_flat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damageReduction_flat_MetaData), NewProp__damageReduction_flat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__damageReduction_percent = { "_damageReduction_percent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _damageReduction_percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damageReduction_percent_MetaData), NewProp__damageReduction_percent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__healthRegen_flat = { "_healthRegen_flat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _healthRegen_flat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__healthRegen_flat_MetaData), NewProp__healthRegen_flat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__healthRegen_percent = { "_healthRegen_percent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _healthRegen_percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__healthRegen_percent_MetaData), NewProp__healthRegen_percent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__critChance = { "_critChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _critChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critChance_MetaData), NewProp__critChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__critMultiplier = { "_critMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _critMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__critMultiplier_MetaData), NewProp__critMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__attackSpeed = { "_attackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _attackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackSpeed_MetaData), NewProp__attackSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__bonusBounces = { "_bonusBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _bonusBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bonusBounces_MetaData), NewProp__bonusBounces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__bonusPierce = { "_bonusPierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _bonusPierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bonusPierce_MetaData), NewProp__bonusPierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__bonusProjectiles = { "_bonusProjectiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _bonusProjectiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__bonusProjectiles_MetaData), NewProp__bonusProjectiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__projectileSpeed = { "_projectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _projectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileSpeed_MetaData), NewProp__projectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__projectileSize = { "_projectileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _projectileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__projectileSize_MetaData), NewProp__projectileSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__movementSpeed = { "_movementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _movementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__movementSpeed_MetaData), NewProp__movementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__range_MetaData), NewProp__range_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__contactDamage = { "_contactDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _contactDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__contactDamage_MetaData), NewProp__contactDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__selfSize = { "_selfSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _selfSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__selfSize_MetaData), NewProp__selfSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__iFrameDuration = { "_iFrameDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatantAttributes, _iFrameDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__iFrameDuration_MetaData), NewProp__iFrameDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatantAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__maxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__currentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__damageReduction_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__damageReduction_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__healthRegen_flat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__healthRegen_percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__critChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__critMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__attackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__bonusBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__bonusPierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__bonusProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__projectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__projectileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__movementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__contactDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__selfSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewProp__iFrameDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantAttributes_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCombatantAttributes Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatantAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	&NewStructOps,
	"CombatantAttributes",
	Z_Construct_UScriptStruct_FCombatantAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantAttributes_Statics::PropPointers),
	sizeof(FCombatantAttributes),
	alignof(FCombatantAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatantAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatantAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatantAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatantAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatantAttributes.InnerSingleton, Z_Construct_UScriptStruct_FCombatantAttributes_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCombatantAttributes.InnerSingleton);
}
// ********** End ScriptStruct FCombatantAttributes ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributes_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatantAttributes::StaticStruct, Z_Construct_UScriptStruct_FCombatantAttributes_Statics::NewStructOps, TEXT("CombatantAttributes"),&Z_Registration_Info_UScriptStruct_FCombatantAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatantAttributes), 1264244631U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributes_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributes_h__Script_i_love_vampires_2_15606923{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantAttributes_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
