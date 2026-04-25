// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/MyPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AMyPlayer();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UFunction* Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPlayerLevelUp ******************************************************
struct Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the last member function called before BeginPlay()\n//virtual void PostInitializeComponents() override;\n" },
#endif
		{ "ModuleRelativePath", "MyPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the last member function called before BeginPlay()\nvirtual void PostInitializeComponents() override;" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPlayerLevelUp constinit property declarations **********************
// ********** End Delegate FOnPlayerLevelUp constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "OnPlayerLevelUp__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AMyPlayer::FOnPlayerLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerLevelUp)
{
	OnPlayerLevelUp.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPlayerLevelUp ********************************************************

// ********** Begin Class AMyPlayer Function finishAMyActorDeferredSpawn ***************************
struct Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics
{
	struct MyPlayer_eventfinishAMyActorDeferredSpawn_Parms
	{
		AMyPlayer* deferredObject;
		FTransform trans;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function finishAMyActorDeferredSpawn constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_deferredObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function finishAMyActorDeferredSpawn constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function finishAMyActorDeferredSpawn Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::NewProp_deferredObject = { "deferredObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventfinishAMyActorDeferredSpawn_Parms, deferredObject), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventfinishAMyActorDeferredSpawn_Parms, trans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trans_MetaData), NewProp_trans_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::NewProp_deferredObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::NewProp_trans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::PropPointers) < 2048);
// ********** End Function finishAMyActorDeferredSpawn Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "finishAMyActorDeferredSpawn", 	Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::MyPlayer_eventfinishAMyActorDeferredSpawn_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::MyPlayer_eventfinishAMyActorDeferredSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execfinishAMyActorDeferredSpawn)
{
	P_GET_OBJECT(AMyPlayer,Z_Param_deferredObject);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_trans);
	P_FINISH;
	P_NATIVE_BEGIN;
	AMyPlayer::finishAMyActorDeferredSpawn(Z_Param_deferredObject,Z_Param_Out_trans);
	P_NATIVE_END;
}
// ********** End Class AMyPlayer Function finishAMyActorDeferredSpawn *****************************

// ********** Begin Class AMyPlayer Function initialise_AMyPlayer **********************************
struct Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics
{
	struct MyPlayer_eventinitialise_AMyPlayer_Parms
	{
		UCombatantTemplate* data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialise_AMyPlayer constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function initialise_AMyPlayer constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function initialise_AMyPlayer Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventinitialise_AMyPlayer_Parms, data), Z_Construct_UClass_UCombatantTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::PropPointers) < 2048);
// ********** End Function initialise_AMyPlayer Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "initialise_AMyPlayer", 	Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::MyPlayer_eventinitialise_AMyPlayer_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::MyPlayer_eventinitialise_AMyPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execinitialise_AMyPlayer)
{
	P_GET_OBJECT(UCombatantTemplate,Z_Param_data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialise_AMyPlayer(Z_Param_data);
	P_NATIVE_END;
}
// ********** End Class AMyPlayer Function initialise_AMyPlayer ************************************

// ********** Begin Class AMyPlayer Function onOverlapBegin ****************************************
struct Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics
{
	struct MyPlayer_eventonOverlapBegin_Parms
	{
		AActor* left;
		AActor* right;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function onOverlapBegin constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_left;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_right;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function onOverlapBegin constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function onOverlapBegin Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventonOverlapBegin_Parms, left), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventonOverlapBegin_Parms, right), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::NewProp_left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::NewProp_right,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::PropPointers) < 2048);
// ********** End Function onOverlapBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "onOverlapBegin", 	Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::MyPlayer_eventonOverlapBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::MyPlayer_eventonOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayer_onOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_onOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execonOverlapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_left);
	P_GET_OBJECT(AActor,Z_Param_right);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->onOverlapBegin(Z_Param_left,Z_Param_right);
	P_NATIVE_END;
}
// ********** End Class AMyPlayer Function onOverlapBegin ******************************************

// ********** Begin Class AMyPlayer Function spawnAMyActorDeferred *********************************
struct Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics
{
	struct MyPlayer_eventspawnAMyActorDeferred_Parms
	{
		UObject* worldContext;
		FTransform trans;
		AActor* deferredOwner;
		APawn* deferredInstigator;
		AMyPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_deferredInstigator", "None" },
		{ "CPP_Default_deferredOwner", "None" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function spawnAMyActorDeferred constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_worldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trans;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_deferredOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_deferredInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function spawnAMyActorDeferred constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function spawnAMyActorDeferred Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventspawnAMyActorDeferred_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventspawnAMyActorDeferred_Parms, trans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trans_MetaData), NewProp_trans_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_deferredOwner = { "deferredOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventspawnAMyActorDeferred_Parms, deferredOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_deferredInstigator = { "deferredInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventspawnAMyActorDeferred_Parms, deferredInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayer_eventspawnAMyActorDeferred_Parms, ReturnValue), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_worldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_trans,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_deferredOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_deferredInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::PropPointers) < 2048);
// ********** End Function spawnAMyActorDeferred Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "spawnAMyActorDeferred", 	Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::MyPlayer_eventspawnAMyActorDeferred_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::MyPlayer_eventspawnAMyActorDeferred_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execspawnAMyActorDeferred)
{
	P_GET_OBJECT(UObject,Z_Param_worldContext);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_trans);
	P_GET_OBJECT(AActor,Z_Param_deferredOwner);
	P_GET_OBJECT(APawn,Z_Param_deferredInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMyPlayer**)Z_Param__Result=AMyPlayer::spawnAMyActorDeferred(Z_Param_worldContext,Z_Param_Out_trans,Z_Param_deferredOwner,Z_Param_deferredInstigator);
	P_NATIVE_END;
}
// ********** End Class AMyPlayer Function spawnAMyActorDeferred ***********************************

// ********** Begin Class AMyPlayer ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyPlayer;
UClass* AMyPlayer::GetPrivateStaticClass()
{
	using TClass = AMyPlayer;
	if (!Z_Registration_Info_UClass_AMyPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyPlayer"),
			Z_Registration_Info_UClass_AMyPlayer.InnerSingleton,
			StaticRegisterNativesAMyPlayer,
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
	return Z_Registration_Info_UClass_AMyPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
{
	return AMyPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__onLevelUp_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyPlayer constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__camera;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp__onLevelUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMyPlayer constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("finishAMyActorDeferredSpawn"), .Pointer = &AMyPlayer::execfinishAMyActorDeferredSpawn },
		{ .NameUTF8 = UTF8TEXT("initialise_AMyPlayer"), .Pointer = &AMyPlayer::execinitialise_AMyPlayer },
		{ .NameUTF8 = UTF8TEXT("onOverlapBegin"), .Pointer = &AMyPlayer::execonOverlapBegin },
		{ .NameUTF8 = UTF8TEXT("spawnAMyActorDeferred"), .Pointer = &AMyPlayer::execspawnAMyActorDeferred },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayer_finishAMyActorDeferredSpawn, "finishAMyActorDeferredSpawn" }, // 381760498
		{ &Z_Construct_UFunction_AMyPlayer_initialise_AMyPlayer, "initialise_AMyPlayer" }, // 3296155601
		{ &Z_Construct_UFunction_AMyPlayer_onOverlapBegin, "onOverlapBegin" }, // 3264895144
		{ &Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature, "OnPlayerLevelUp__DelegateSignature" }, // 4077128735
		{ &Z_Construct_UFunction_AMyPlayer_spawnAMyActorDeferred, "spawnAMyActorDeferred" }, // 678798347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyPlayer_Statics

// ********** Begin Class AMyPlayer Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__camera = { "_camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__camera_MetaData), NewProp__camera_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp__onLevelUp = { "_onLevelUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, _onLevelUp), Z_Construct_UDelegateFunction_AMyPlayer_OnPlayerLevelUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__onLevelUp_MetaData), NewProp__onLevelUp_MetaData) }; // 4077128735
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp__onLevelUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers) < 2048);
// ********** End Class AMyPlayer Property Definitions *********************************************
UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACombatant,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
	&AMyPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams)
};
void AMyPlayer::StaticRegisterNativesAMyPlayer()
{
	UClass* Class = AMyPlayer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMyPlayer_Statics::Funcs));
}
UClass* Z_Construct_UClass_AMyPlayer()
{
	if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyPlayer);
AMyPlayer::~AMyPlayer() {}
// ********** End Class AMyPlayer ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 2537123973U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h__Script_i_love_vampires_2_351285394{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
