// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/EnemySpawner.h"
#include "i_love_vampires_2/CombatantTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UEnemySpawner();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UEnemySpawner_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantTemplate();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawner_MyStruct();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEnemySpawner_MyStruct ********************************************
struct Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEnemySpawner_MyStruct); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEnemySpawner_MyStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemyClass_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemyData_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEnemySpawner_MyStruct constinit property declarations ************
	static const UECodeGen_Private::FClassPropertyParams NewProp_enemyClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_enemyData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEnemySpawner_MyStruct constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemySpawner_MyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct;
class UScriptStruct* FEnemySpawner_MyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemySpawner_MyStruct, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EnemySpawner_MyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct.OuterSingleton;
	}

// ********** Begin ScriptStruct FEnemySpawner_MyStruct Property Definitions ***********************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::NewProp_enemyClass = { "enemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemySpawner_MyStruct, enemyClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemyClass_MetaData), NewProp_enemyClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::NewProp_enemyData = { "enemyData", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemySpawner_MyStruct, enemyData), Z_Construct_UScriptStruct_FCombatantTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemyData_MetaData), NewProp_enemyData_MetaData) }; // 2814415407
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::NewProp_enemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::NewProp_enemyData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEnemySpawner_MyStruct Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	&NewStructOps,
	"EnemySpawner_MyStruct",
	Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::PropPointers),
	sizeof(FEnemySpawner_MyStruct),
	alignof(FEnemySpawner_MyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawner_MyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct.InnerSingleton, Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct.InnerSingleton);
}
// ********** End ScriptStruct FEnemySpawner_MyStruct **********************************************

// ********** Begin Class UEnemySpawner ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemySpawner;
UClass* UEnemySpawner::GetPrivateStaticClass()
{
	using TClass = UEnemySpawner;
	if (!Z_Registration_Info_UClass_UEnemySpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemySpawner"),
			Z_Registration_Info_UClass_UEnemySpawner.InnerSingleton,
			StaticRegisterNativesUEnemySpawner,
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
	return Z_Registration_Info_UClass_UEnemySpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemySpawner_NoRegister()
{
	return UEnemySpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemySpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gameReady_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_testEnemy_MetaData[] = {
		{ "Category", "Enemy Spawner" },
		{ "ModuleRelativePath", "EnemySpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnemySpawner constinit property declarations ****************************
	static void NewProp_gameReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_gameReady;
	static const UECodeGen_Private::FStructPropertyParams NewProp_testEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEnemySpawner constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnemySpawner_Statics

// ********** Begin Class UEnemySpawner Property Definitions ***************************************
void Z_Construct_UClass_UEnemySpawner_Statics::NewProp_gameReady_SetBit(void* Obj)
{
	((UEnemySpawner*)Obj)->gameReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemySpawner_Statics::NewProp_gameReady = { "gameReady", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemySpawner), &Z_Construct_UClass_UEnemySpawner_Statics::NewProp_gameReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gameReady_MetaData), NewProp_gameReady_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnemySpawner_Statics::NewProp_testEnemy = { "testEnemy", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemySpawner, testEnemy), Z_Construct_UScriptStruct_FEnemySpawner_MyStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_testEnemy_MetaData), NewProp_testEnemy_MetaData) }; // 2807267099
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawner_Statics::NewProp_gameReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemySpawner_Statics::NewProp_testEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::PropPointers) < 2048);
// ********** End Class UEnemySpawner Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UEnemySpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemySpawner_Statics::ClassParams = {
	&UEnemySpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemySpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemySpawner_Statics::Class_MetaDataParams)
};
void UEnemySpawner::StaticRegisterNativesUEnemySpawner()
{
}
UClass* Z_Construct_UClass_UEnemySpawner()
{
	if (!Z_Registration_Info_UClass_UEnemySpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemySpawner.OuterSingleton, Z_Construct_UClass_UEnemySpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemySpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnemySpawner);
UEnemySpawner::~UEnemySpawner() {}
// ********** End Class UEnemySpawner **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnemySpawner_MyStruct::StaticStruct, Z_Construct_UScriptStruct_FEnemySpawner_MyStruct_Statics::NewStructOps, TEXT("EnemySpawner_MyStruct"),&Z_Registration_Info_UScriptStruct_FEnemySpawner_MyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemySpawner_MyStruct), 2807267099U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemySpawner, UEnemySpawner::StaticClass, TEXT("UEnemySpawner"), &Z_Registration_Info_UClass_UEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemySpawner), 1210068926U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_1020250264{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySpawner_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
