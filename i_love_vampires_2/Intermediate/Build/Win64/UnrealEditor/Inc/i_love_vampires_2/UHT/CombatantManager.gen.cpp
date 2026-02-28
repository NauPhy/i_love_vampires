// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantManager();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatantManager Function getEnemyCount *********************************
struct Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics
{
	struct CombatantManager_eventgetEnemyCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getEnemyCount constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getEnemyCount constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getEnemyCount Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventgetEnemyCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::PropPointers) < 2048);
// ********** End Function getEnemyCount Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatantManager, nullptr, "getEnemyCount", 	Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::CombatantManager_eventgetEnemyCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::CombatantManager_eventgetEnemyCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatantManager_getEnemyCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatantManager_getEnemyCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatantManager::execgetEnemyCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->getEnemyCount();
	P_NATIVE_END;
}
// ********** End Class UCombatantManager Function getEnemyCount ***********************************

// ********** Begin Class UCombatantManager Function inflictBurn ***********************************
struct Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics
{
	struct CombatantManager_eventinflictBurn_Parms
	{
		ACombatant* target;
		float magnitude;
		float duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function inflictBurn constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_magnitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function inflictBurn constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function inflictBurn Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventinflictBurn_Parms, target), Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::NewProp_magnitude = { "magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventinflictBurn_Parms, magnitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventinflictBurn_Parms, duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::NewProp_magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::NewProp_duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::PropPointers) < 2048);
// ********** End Function inflictBurn Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatantManager, nullptr, "inflictBurn", 	Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::CombatantManager_eventinflictBurn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::CombatantManager_eventinflictBurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatantManager_inflictBurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatantManager_inflictBurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatantManager::execinflictBurn)
{
	P_GET_OBJECT(ACombatant,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_magnitude);
	P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCombatantManager::inflictBurn(Z_Param_target,Z_Param_magnitude,Z_Param_duration);
	P_NATIVE_END;
}
// ********** End Class UCombatantManager Function inflictBurn *************************************

// ********** Begin Class UCombatantManager Function registerEnemy *********************************
struct Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics
{
	struct CombatantManager_eventregisterEnemy_Parms
	{
		ACombatant* enemy;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function registerEnemy constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_enemy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function registerEnemy constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function registerEnemy Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventregisterEnemy_Parms, enemy), Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventregisterEnemy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::NewProp_enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::PropPointers) < 2048);
// ********** End Function registerEnemy Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatantManager, nullptr, "registerEnemy", 	Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::CombatantManager_eventregisterEnemy_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::CombatantManager_eventregisterEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatantManager_registerEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatantManager_registerEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatantManager::execregisterEnemy)
{
	P_GET_OBJECT(ACombatant,Z_Param_enemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->registerEnemy(Z_Param_enemy);
	P_NATIVE_END;
}
// ********** End Class UCombatantManager Function registerEnemy ***********************************

// ********** Begin Class UCombatantManager Function removeFromRegister ****************************
struct Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics
{
	struct CombatantManager_eventremoveFromRegister_Parms
	{
		int32 key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function removeFromRegister constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function removeFromRegister constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function removeFromRegister Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventremoveFromRegister_Parms, key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::NewProp_key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::PropPointers) < 2048);
// ********** End Function removeFromRegister Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatantManager, nullptr, "removeFromRegister", 	Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::CombatantManager_eventremoveFromRegister_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::CombatantManager_eventremoveFromRegister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatantManager_removeFromRegister()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatantManager_removeFromRegister_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatantManager::execremoveFromRegister)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->removeFromRegister(Z_Param_key);
	P_NATIVE_END;
}
// ********** End Class UCombatantManager Function removeFromRegister ******************************

// ********** Begin Class UCombatantManager Function setPlayerRef **********************************
struct Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics
{
	struct CombatantManager_eventsetPlayerRef_Parms
	{
		ACombatant* playerRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function setPlayerRef constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function setPlayerRef constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function setPlayerRef Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::NewProp_playerRef = { "playerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantManager_eventsetPlayerRef_Parms, playerRef), Z_Construct_UClass_ACombatant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::NewProp_playerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::PropPointers) < 2048);
// ********** End Function setPlayerRef Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatantManager, nullptr, "setPlayerRef", 	Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::CombatantManager_eventsetPlayerRef_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::CombatantManager_eventsetPlayerRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatantManager_setPlayerRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatantManager_setPlayerRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatantManager::execsetPlayerRef)
{
	P_GET_OBJECT(ACombatant,Z_Param_playerRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setPlayerRef(Z_Param_playerRef);
	P_NATIVE_END;
}
// ********** End Class UCombatantManager Function setPlayerRef ************************************

// ********** Begin Class UCombatantManager ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantManager;
UClass* UCombatantManager::GetPrivateStaticClass()
{
	using TClass = UCombatantManager;
	if (!Z_Registration_Info_UClass_UCombatantManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantManager"),
			Z_Registration_Info_UClass_UCombatantManager.InnerSingleton,
			StaticRegisterNativesUCombatantManager,
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
	return Z_Registration_Info_UClass_UCombatantManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantManager_NoRegister()
{
	return UCombatantManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CombatantManager.h" },
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gameReady_MetaData[] = {
		{ "Category", "Startup" },
		{ "ModuleRelativePath", "CombatantManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantManager constinit property declarations ************************
	static void NewProp_gameReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_gameReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatantManager constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("getEnemyCount"), .Pointer = &UCombatantManager::execgetEnemyCount },
		{ .NameUTF8 = UTF8TEXT("inflictBurn"), .Pointer = &UCombatantManager::execinflictBurn },
		{ .NameUTF8 = UTF8TEXT("registerEnemy"), .Pointer = &UCombatantManager::execregisterEnemy },
		{ .NameUTF8 = UTF8TEXT("removeFromRegister"), .Pointer = &UCombatantManager::execremoveFromRegister },
		{ .NameUTF8 = UTF8TEXT("setPlayerRef"), .Pointer = &UCombatantManager::execsetPlayerRef },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatantManager_getEnemyCount, "getEnemyCount" }, // 1334079554
		{ &Z_Construct_UFunction_UCombatantManager_inflictBurn, "inflictBurn" }, // 73989735
		{ &Z_Construct_UFunction_UCombatantManager_registerEnemy, "registerEnemy" }, // 507582345
		{ &Z_Construct_UFunction_UCombatantManager_removeFromRegister, "removeFromRegister" }, // 1410442674
		{ &Z_Construct_UFunction_UCombatantManager_setPlayerRef, "setPlayerRef" }, // 1346394431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantManager_Statics

// ********** Begin Class UCombatantManager Property Definitions ***********************************
void Z_Construct_UClass_UCombatantManager_Statics::NewProp_gameReady_SetBit(void* Obj)
{
	((UCombatantManager*)Obj)->gameReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatantManager_Statics::NewProp_gameReady = { "gameReady", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatantManager), &Z_Construct_UClass_UCombatantManager_Statics::NewProp_gameReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gameReady_MetaData), NewProp_gameReady_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatantManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantManager_Statics::NewProp_gameReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::PropPointers) < 2048);
// ********** End Class UCombatantManager Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UCombatantManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantManager_Statics::ClassParams = {
	&UCombatantManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatantManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantManager_Statics::Class_MetaDataParams)
};
void UCombatantManager::StaticRegisterNativesUCombatantManager()
{
	UClass* Class = UCombatantManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCombatantManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCombatantManager()
{
	if (!Z_Registration_Info_UClass_UCombatantManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantManager.OuterSingleton, Z_Construct_UClass_UCombatantManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantManager);
UCombatantManager::~UCombatantManager() {}
// ********** End Class UCombatantManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatantManager, UCombatantManager::StaticClass, TEXT("UCombatantManager"), &Z_Registration_Info_UClass_UCombatantManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantManager), 4271288819U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_2722679249{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
