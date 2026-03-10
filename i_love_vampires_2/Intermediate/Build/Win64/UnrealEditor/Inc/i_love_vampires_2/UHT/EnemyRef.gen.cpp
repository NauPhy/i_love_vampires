// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/EnemyRef.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemyRef() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyRef();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEnemyRef *********************************************************
struct Z_Construct_UScriptStruct_FEnemyRef_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FEnemyRef); }
	static inline consteval int16 GetStructAlignment() { return alignof(FEnemyRef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "EnemyRef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__enemyClass_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "EnemyRef.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__enemyID_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "EnemyRef.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FEnemyRef constinit property declarations *************************
	static const UECodeGen_Private::FClassPropertyParams NewProp__enemyClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp__enemyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FEnemyRef constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FEnemyRef_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEnemyRef;
class UScriptStruct* FEnemyRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemyRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEnemyRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyRef, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("EnemyRef"));
	}
	return Z_Registration_Info_UScriptStruct_FEnemyRef.OuterSingleton;
	}

// ********** Begin ScriptStruct FEnemyRef Property Definitions ************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEnemyRef_Statics::NewProp__enemyClass = { "_enemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyRef, _enemyClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__enemyClass_MetaData), NewProp__enemyClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnemyRef_Statics::NewProp__enemyID = { "_enemyID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyRef, _enemyID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__enemyID_MetaData), NewProp__enemyID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyRef_Statics::NewProp__enemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyRef_Statics::NewProp__enemyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyRef_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FEnemyRef Property Definitions **************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	&NewStructOps,
	"EnemyRef",
	Z_Construct_UScriptStruct_FEnemyRef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyRef_Statics::PropPointers),
	sizeof(FEnemyRef),
	alignof(FEnemyRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnemyRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnemyRef()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemyRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEnemyRef.InnerSingleton, Z_Construct_UScriptStruct_FEnemyRef_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FEnemyRef.InnerSingleton);
}
// ********** End ScriptStruct FEnemyRef ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyRef_h__Script_i_love_vampires_2_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnemyRef::StaticStruct, Z_Construct_UScriptStruct_FEnemyRef_Statics::NewStructOps, TEXT("EnemyRef"),&Z_Registration_Info_UScriptStruct_FEnemyRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyRef), 542635178U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyRef_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyRef_h__Script_i_love_vampires_2_1172917970{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyRef_h__Script_i_love_vampires_2_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyRef_h__Script_i_love_vampires_2_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
