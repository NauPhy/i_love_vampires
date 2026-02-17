// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/EnemySubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemySubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UEnemySubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UEnemySubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemySubsystem Function getEnemyCount ***********************************
struct Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics
{
	struct EnemySubsystem_eventgetEnemyCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getEnemyCount constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getEnemyCount constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getEnemyCount Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemySubsystem_eventgetEnemyCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::PropPointers) < 2048);
// ********** End Function getEnemyCount Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemySubsystem, nullptr, "getEnemyCount", 	Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::EnemySubsystem_eventgetEnemyCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::EnemySubsystem_eventgetEnemyCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemySubsystem_getEnemyCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemySubsystem_getEnemyCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemySubsystem::execgetEnemyCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->getEnemyCount();
	P_NATIVE_END;
}
// ********** End Class UEnemySubsystem Function getEnemyCount *************************************

// ********** Begin Class UEnemySubsystem Function registerEnemy ***********************************
struct Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics
{
	struct EnemySubsystem_eventregisterEnemy_Parms
	{
		const AActor* enemy;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enemy_MetaData[] = {
		{ "NativeConst", "" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemySubsystem_eventregisterEnemy_Parms, enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enemy_MetaData), NewProp_enemy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemySubsystem_eventregisterEnemy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::NewProp_enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::PropPointers) < 2048);
// ********** End Function registerEnemy Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemySubsystem, nullptr, "registerEnemy", 	Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::EnemySubsystem_eventregisterEnemy_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::EnemySubsystem_eventregisterEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemySubsystem_registerEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemySubsystem_registerEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemySubsystem::execregisterEnemy)
{
	P_GET_OBJECT(AActor,Z_Param_enemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->registerEnemy(Z_Param_enemy);
	P_NATIVE_END;
}
// ********** End Class UEnemySubsystem Function registerEnemy *************************************

// ********** Begin Class UEnemySubsystem Function removeFromRegister ******************************
struct Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics
{
	struct EnemySubsystem_eventremoveFromRegister_Parms
	{
		int32 key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function removeFromRegister constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function removeFromRegister constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function removeFromRegister Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemySubsystem_eventremoveFromRegister_Parms, key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::NewProp_key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::PropPointers) < 2048);
// ********** End Function removeFromRegister Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UEnemySubsystem, nullptr, "removeFromRegister", 	Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::EnemySubsystem_eventremoveFromRegister_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::EnemySubsystem_eventremoveFromRegister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemySubsystem_removeFromRegister()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemySubsystem_removeFromRegister_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemySubsystem::execremoveFromRegister)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->removeFromRegister(Z_Param_key);
	P_NATIVE_END;
}
// ********** End Class UEnemySubsystem Function removeFromRegister ********************************

// ********** Begin Class UEnemySubsystem **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemySubsystem;
UClass* UEnemySubsystem::GetPrivateStaticClass()
{
	using TClass = UEnemySubsystem;
	if (!Z_Registration_Info_UClass_UEnemySubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemySubsystem"),
			Z_Registration_Info_UClass_UEnemySubsystem.InnerSingleton,
			StaticRegisterNativesUEnemySubsystem,
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
	return Z_Registration_Info_UClass_UEnemySubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemySubsystem_NoRegister()
{
	return UEnemySubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySubsystem.h" },
		{ "ModuleRelativePath", "EnemySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEnemySubsystem constinit property declarations **************************
// ********** End Class UEnemySubsystem constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("getEnemyCount"), .Pointer = &UEnemySubsystem::execgetEnemyCount },
		{ .NameUTF8 = UTF8TEXT("registerEnemy"), .Pointer = &UEnemySubsystem::execregisterEnemy },
		{ .NameUTF8 = UTF8TEXT("removeFromRegister"), .Pointer = &UEnemySubsystem::execremoveFromRegister },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemySubsystem_getEnemyCount, "getEnemyCount" }, // 1541582951
		{ &Z_Construct_UFunction_UEnemySubsystem_registerEnemy, "registerEnemy" }, // 174581108
		{ &Z_Construct_UFunction_UEnemySubsystem_removeFromRegister, "removeFromRegister" }, // 464767308
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEnemySubsystem_Statics
UObject* (*const Z_Construct_UClass_UEnemySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemySubsystem_Statics::ClassParams = {
	&UEnemySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemySubsystem_Statics::Class_MetaDataParams)
};
void UEnemySubsystem::StaticRegisterNativesUEnemySubsystem()
{
	UClass* Class = UEnemySubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UEnemySubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UEnemySubsystem()
{
	if (!Z_Registration_Info_UClass_UEnemySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemySubsystem.OuterSingleton, Z_Construct_UClass_UEnemySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemySubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEnemySubsystem);
UEnemySubsystem::~UEnemySubsystem() {}
// ********** End Class UEnemySubsystem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySubsystem_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemySubsystem, UEnemySubsystem::StaticClass, TEXT("UEnemySubsystem"), &Z_Registration_Info_UClass_UEnemySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemySubsystem), 388879896U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySubsystem_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySubsystem_h__Script_i_love_vampires_2_1005468768{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySubsystem_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemySubsystem_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
