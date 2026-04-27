// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatGameModeBase();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatGameModeBase_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantManager_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UEnemySpawner_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_USpriteSorter_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACombatGameModeBase Function getCombatantManager *************************
struct Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics
{
	struct CombatGameModeBase_eventgetCombatantManager_Parms
	{
		UCombatantManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getCombatantManager constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getCombatantManager constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getCombatantManager Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGameModeBase_eventgetCombatantManager_Parms, ReturnValue), Z_Construct_UClass_UCombatantManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::PropPointers) < 2048);
// ********** End Function getCombatantManager Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatGameModeBase, nullptr, "getCombatantManager", 	Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::CombatGameModeBase_eventgetCombatantManager_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::CombatGameModeBase_eventgetCombatantManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatGameModeBase::execgetCombatantManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCombatantManager**)Z_Param__Result=P_THIS->getCombatantManager();
	P_NATIVE_END;
}
// ********** End Class ACombatGameModeBase Function getCombatantManager ***************************

// ********** Begin Class ACombatGameModeBase Function getEnemySpawner *****************************
struct Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics
{
	struct CombatGameModeBase_eventgetEnemySpawner_Parms
	{
		UEnemySpawner* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getEnemySpawner constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getEnemySpawner constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getEnemySpawner Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGameModeBase_eventgetEnemySpawner_Parms, ReturnValue), Z_Construct_UClass_UEnemySpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::PropPointers) < 2048);
// ********** End Function getEnemySpawner Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatGameModeBase, nullptr, "getEnemySpawner", 	Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::CombatGameModeBase_eventgetEnemySpawner_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::CombatGameModeBase_eventgetEnemySpawner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatGameModeBase::execgetEnemySpawner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnemySpawner**)Z_Param__Result=P_THIS->getEnemySpawner();
	P_NATIVE_END;
}
// ********** End Class ACombatGameModeBase Function getEnemySpawner *******************************

// ********** Begin Class ACombatGameModeBase Function getSpriteSorter *****************************
struct Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics
{
	struct CombatGameModeBase_eventgetSpriteSorter_Parms
	{
		USpriteSorter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getSpriteSorter constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getSpriteSorter constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getSpriteSorter Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGameModeBase_eventgetSpriteSorter_Parms, ReturnValue), Z_Construct_UClass_USpriteSorter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::PropPointers) < 2048);
// ********** End Function getSpriteSorter Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatGameModeBase, nullptr, "getSpriteSorter", 	Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::CombatGameModeBase_eventgetSpriteSorter_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::CombatGameModeBase_eventgetSpriteSorter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatGameModeBase::execgetSpriteSorter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpriteSorter**)Z_Param__Result=P_THIS->getSpriteSorter();
	P_NATIVE_END;
}
// ********** End Class ACombatGameModeBase Function getSpriteSorter *******************************

// ********** Begin Class ACombatGameModeBase Function isReady *************************************
struct CombatGameModeBase_eventisReady_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	CombatGameModeBase_eventisReady_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_ACombatGameModeBase_isReady = FName(TEXT("isReady"));
bool ACombatGameModeBase::isReady() const
{
	UFunction* Func = FindFunctionChecked(NAME_ACombatGameModeBase_isReady);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatGameModeBase_eventisReady_Parms Parms;
		const_cast<ACombatGameModeBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<ACombatGameModeBase*>(this)->isReady_Implementation();
	}
}
struct Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function isReady constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function isReady constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function isReady Property Definitions ******************************************
void Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatGameModeBase_eventisReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatGameModeBase_eventisReady_Parms), &Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::PropPointers) < 2048);
// ********** End Function isReady Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatGameModeBase, nullptr, "isReady", 	Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::PropPointers), 
sizeof(CombatGameModeBase_eventisReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatGameModeBase_eventisReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACombatGameModeBase_isReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatGameModeBase_isReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatGameModeBase::execisReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->isReady_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACombatGameModeBase Function isReady ***************************************

// ********** Begin Class ACombatGameModeBase Function onPlayerDeath *******************************
static FName NAME_ACombatGameModeBase_onPlayerDeath = FName(TEXT("onPlayerDeath"));
void ACombatGameModeBase::onPlayerDeath()
{
	UFunction* Func = FindFunctionChecked(NAME_ACombatGameModeBase_onPlayerDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		onPlayerDeath_Implementation();
	}
}
struct Z_Construct_UFunction_ACombatGameModeBase_onPlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function onPlayerDeath constinit property declarations *************************
// ********** End Function onPlayerDeath constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatGameModeBase_onPlayerDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatGameModeBase, nullptr, "onPlayerDeath", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_onPlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatGameModeBase_onPlayerDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACombatGameModeBase_onPlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatGameModeBase_onPlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatGameModeBase::execonPlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->onPlayerDeath_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACombatGameModeBase Function onPlayerDeath *********************************

// ********** Begin Class ACombatGameModeBase Function setGameReady ********************************
struct Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics
{
	struct CombatGameModeBase_eventsetGameReady_Parms
	{
		bool val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function setGameReady constinit property declarations **************************
	static void NewProp_val_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function setGameReady constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function setGameReady Property Definitions *************************************
void Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::NewProp_val_SetBit(void* Obj)
{
	((CombatGameModeBase_eventsetGameReady_Parms*)Obj)->val = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatGameModeBase_eventsetGameReady_Parms), &Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::NewProp_val_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::PropPointers) < 2048);
// ********** End Function setGameReady Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatGameModeBase, nullptr, "setGameReady", 	Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::CombatGameModeBase_eventsetGameReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::CombatGameModeBase_eventsetGameReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACombatGameModeBase_setGameReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatGameModeBase_setGameReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatGameModeBase::execsetGameReady)
{
	P_GET_UBOOL(Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setGameReady(Z_Param_val);
	P_NATIVE_END;
}
// ********** End Class ACombatGameModeBase Function setGameReady **********************************

// ********** Begin Class ACombatGameModeBase ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACombatGameModeBase;
UClass* ACombatGameModeBase::GetPrivateStaticClass()
{
	using TClass = ACombatGameModeBase;
	if (!Z_Registration_Info_UClass_ACombatGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatGameModeBase"),
			Z_Registration_Info_UClass_ACombatGameModeBase.InnerSingleton,
			StaticRegisterNativesACombatGameModeBase,
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
	return Z_Registration_Info_UClass_ACombatGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ACombatGameModeBase_NoRegister()
{
	return ACombatGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACombatGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CombatGameModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__enemySpawner_MetaData[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combatantManager_MetaData[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__spriteSorter_MetaData[] = {
		{ "ModuleRelativePath", "CombatGameModeBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACombatGameModeBase constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__enemySpawner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__combatantManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__spriteSorter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACombatGameModeBase constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("getCombatantManager"), .Pointer = &ACombatGameModeBase::execgetCombatantManager },
		{ .NameUTF8 = UTF8TEXT("getEnemySpawner"), .Pointer = &ACombatGameModeBase::execgetEnemySpawner },
		{ .NameUTF8 = UTF8TEXT("getSpriteSorter"), .Pointer = &ACombatGameModeBase::execgetSpriteSorter },
		{ .NameUTF8 = UTF8TEXT("isReady"), .Pointer = &ACombatGameModeBase::execisReady },
		{ .NameUTF8 = UTF8TEXT("onPlayerDeath"), .Pointer = &ACombatGameModeBase::execonPlayerDeath },
		{ .NameUTF8 = UTF8TEXT("setGameReady"), .Pointer = &ACombatGameModeBase::execsetGameReady },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACombatGameModeBase_getCombatantManager, "getCombatantManager" }, // 786297690
		{ &Z_Construct_UFunction_ACombatGameModeBase_getEnemySpawner, "getEnemySpawner" }, // 3557539413
		{ &Z_Construct_UFunction_ACombatGameModeBase_getSpriteSorter, "getSpriteSorter" }, // 3637049184
		{ &Z_Construct_UFunction_ACombatGameModeBase_isReady, "isReady" }, // 335285443
		{ &Z_Construct_UFunction_ACombatGameModeBase_onPlayerDeath, "onPlayerDeath" }, // 3403477441
		{ &Z_Construct_UFunction_ACombatGameModeBase_setGameReady, "setGameReady" }, // 3339965129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACombatGameModeBase_Statics

// ********** Begin Class ACombatGameModeBase Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp__enemySpawner = { "_enemySpawner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, _enemySpawner), Z_Construct_UClass_UEnemySpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__enemySpawner_MetaData), NewProp__enemySpawner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp__combatantManager = { "_combatantManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, _combatantManager), Z_Construct_UClass_UCombatantManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combatantManager_MetaData), NewProp__combatantManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp__spriteSorter = { "_spriteSorter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatGameModeBase, _spriteSorter), Z_Construct_UClass_USpriteSorter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spriteSorter_MetaData), NewProp__spriteSorter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp__enemySpawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp__combatantManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatGameModeBase_Statics::NewProp__spriteSorter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers) < 2048);
// ********** End Class ACombatGameModeBase Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_ACombatGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatGameModeBase_Statics::ClassParams = {
	&ACombatGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatGameModeBase_Statics::Class_MetaDataParams)
};
void ACombatGameModeBase::StaticRegisterNativesACombatGameModeBase()
{
	UClass* Class = ACombatGameModeBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ACombatGameModeBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_ACombatGameModeBase()
{
	if (!Z_Registration_Info_UClass_ACombatGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatGameModeBase.OuterSingleton, Z_Construct_UClass_ACombatGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombatGameModeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACombatGameModeBase);
ACombatGameModeBase::~ACombatGameModeBase() {}
// ********** End Class ACombatGameModeBase ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatGameModeBase, ACombatGameModeBase::StaticClass, TEXT("ACombatGameModeBase"), &Z_Registration_Info_UClass_ACombatGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatGameModeBase), 1425200870U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h__Script_i_love_vampires_2_2193616792{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
