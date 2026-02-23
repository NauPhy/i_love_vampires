// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExplosiveBullet.h"
#include "GameplayEffectTypes.h"
#include "i_love_vampires_2/AOETemplate.h"
#include "i_love_vampires_2/ProjectileTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExplosiveBullet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ABullet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveBullet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveBullet_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FAOETemplate();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExplosiveBullet Function finishExplosionInitialisation ******************
struct Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics
{
	struct ExplosiveBullet_eventfinishExplosionInitialisation_Parms
	{
		AAOE* aoe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function finishExplosionInitialisation constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aoe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function finishExplosionInitialisation constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function finishExplosionInitialisation Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::NewProp_aoe = { "aoe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventfinishExplosionInitialisation_Parms, aoe), Z_Construct_UClass_AAOE_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::NewProp_aoe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::PropPointers) < 2048);
// ********** End Function finishExplosionInitialisation Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExplosiveBullet, nullptr, "finishExplosionInitialisation", 	Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::ExplosiveBullet_eventfinishExplosionInitialisation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::ExplosiveBullet_eventfinishExplosionInitialisation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExplosiveBullet::execfinishExplosionInitialisation)
{
	P_GET_OBJECT(AAOE,Z_Param_aoe);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->finishExplosionInitialisation(Z_Param_aoe);
	P_NATIVE_END;
}
// ********** End Class AExplosiveBullet Function finishExplosionInitialisation ********************

// ********** Begin Class AExplosiveBullet Function getExplosionRadius *****************************
struct Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics
{
	struct ExplosiveBullet_eventgetExplosionRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getExplosionRadius constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getExplosionRadius constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getExplosionRadius Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventgetExplosionRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::PropPointers) < 2048);
// ********** End Function getExplosionRadius Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExplosiveBullet, nullptr, "getExplosionRadius", 	Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::ExplosiveBullet_eventgetExplosionRadius_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::ExplosiveBullet_eventgetExplosionRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExplosiveBullet::execgetExplosionRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->getExplosionRadius();
	P_NATIVE_END;
}
// ********** End Class AExplosiveBullet Function getExplosionRadius *******************************

// ********** Begin Class AExplosiveBullet Function initialise_AExplosiveBullet ********************
struct Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics
{
	struct ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms
	{
		APawn* pawnRef;
		TArray<FGameplayEffectSpecHandle> effect;
		TArray<float> effectChances;
		float directionX;
		float directionZ;
		FProjectileTemplate projectileData;
		FAOETemplate explosionData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is including attribute mods\n" },
#endif
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is including attribute mods" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_effectChances_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_explosionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialise_AExplosiveBullet constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_effect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_effect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_effectChances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_effectChances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_directionX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_directionZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_projectileData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_explosionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function initialise_AExplosiveBullet constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function initialise_AExplosiveBullet Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_pawnRef = { "pawnRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms, pawnRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effect_Inner = { "effect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2221987375
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms, effect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_effect_MetaData), NewProp_effect_MetaData) }; // 2221987375
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effectChances_Inner = { "effectChances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effectChances = { "effectChances", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms, effectChances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_effectChances_MetaData), NewProp_effectChances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms, directionX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms, directionZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_projectileData = { "projectileData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms, projectileData), Z_Construct_UScriptStruct_FProjectileTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileData_MetaData), NewProp_projectileData_MetaData) }; // 72121466
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_explosionData = { "explosionData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms, explosionData), Z_Construct_UScriptStruct_FAOETemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_explosionData_MetaData), NewProp_explosionData_MetaData) }; // 2339361029
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_pawnRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effectChances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_effectChances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_directionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_directionZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_projectileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::NewProp_explosionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::PropPointers) < 2048);
// ********** End Function initialise_AExplosiveBullet Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExplosiveBullet, nullptr, "initialise_AExplosiveBullet", 	Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::ExplosiveBullet_eventinitialise_AExplosiveBullet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExplosiveBullet::execinitialise_AExplosiveBullet)
{
	P_GET_OBJECT(APawn,Z_Param_pawnRef);
	P_GET_TARRAY_REF(FGameplayEffectSpecHandle,Z_Param_Out_effect);
	P_GET_TARRAY_REF(float,Z_Param_Out_effectChances);
	P_GET_PROPERTY(FFloatProperty,Z_Param_directionX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_directionZ);
	P_GET_STRUCT_REF(FProjectileTemplate,Z_Param_Out_projectileData);
	P_GET_STRUCT_REF(FAOETemplate,Z_Param_Out_explosionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialise_AExplosiveBullet(Z_Param_pawnRef,Z_Param_Out_effect,Z_Param_Out_effectChances,Z_Param_directionX,Z_Param_directionZ,Z_Param_Out_projectileData,Z_Param_Out_explosionData);
	P_NATIVE_END;
}
// ********** End Class AExplosiveBullet Function initialise_AExplosiveBullet **********************

// ********** Begin Class AExplosiveBullet *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExplosiveBullet;
UClass* AExplosiveBullet::GetPrivateStaticClass()
{
	using TClass = AExplosiveBullet;
	if (!Z_Registration_Info_UClass_AExplosiveBullet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExplosiveBullet"),
			Z_Registration_Info_UClass_AExplosiveBullet.InnerSingleton,
			StaticRegisterNativesAExplosiveBullet,
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
	return Z_Registration_Info_UClass_AExplosiveBullet.InnerSingleton;
}
UClass* Z_Construct_UClass_AExplosiveBullet_NoRegister()
{
	return AExplosiveBullet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExplosiveBullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosiveBullet.h" },
		{ "ModuleRelativePath", "ExplosiveBullet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExplosiveBullet constinit property declarations *************************
// ********** End Class AExplosiveBullet constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("finishExplosionInitialisation"), .Pointer = &AExplosiveBullet::execfinishExplosionInitialisation },
		{ .NameUTF8 = UTF8TEXT("getExplosionRadius"), .Pointer = &AExplosiveBullet::execgetExplosionRadius },
		{ .NameUTF8 = UTF8TEXT("initialise_AExplosiveBullet"), .Pointer = &AExplosiveBullet::execinitialise_AExplosiveBullet },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AExplosiveBullet_finishExplosionInitialisation, "finishExplosionInitialisation" }, // 2311232531
		{ &Z_Construct_UFunction_AExplosiveBullet_getExplosionRadius, "getExplosionRadius" }, // 1225974144
		{ &Z_Construct_UFunction_AExplosiveBullet_initialise_AExplosiveBullet, "initialise_AExplosiveBullet" }, // 1018415516
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosiveBullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExplosiveBullet_Statics
UObject* (*const Z_Construct_UClass_AExplosiveBullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABullet,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosiveBullet_Statics::ClassParams = {
	&AExplosiveBullet::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosiveBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AExplosiveBullet_Statics::Class_MetaDataParams)
};
void AExplosiveBullet::StaticRegisterNativesAExplosiveBullet()
{
	UClass* Class = AExplosiveBullet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AExplosiveBullet_Statics::Funcs));
}
UClass* Z_Construct_UClass_AExplosiveBullet()
{
	if (!Z_Registration_Info_UClass_AExplosiveBullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosiveBullet.OuterSingleton, Z_Construct_UClass_AExplosiveBullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExplosiveBullet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExplosiveBullet);
AExplosiveBullet::~AExplosiveBullet() {}
// ********** End Class AExplosiveBullet ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExplosiveBullet, AExplosiveBullet::StaticClass, TEXT("AExplosiveBullet"), &Z_Registration_Info_UClass_AExplosiveBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosiveBullet), 707850941U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_970277352{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
