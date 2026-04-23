// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AutomaticAssetRefs.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAutomaticAssetRefs() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAutomaticAssetRefs();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAutomaticAssetRefs_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UPassiveData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAutomaticAssetRefs Function getRandomPassive ****************************
struct Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics
{
	struct AutomaticAssetRefs_eventgetRandomPassive_Parms
	{
		TArray<UPassiveData*> ignored;
		const UPassiveData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutomaticAssetRefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ignored_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function getRandomPassive constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ignored_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ignored;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getRandomPassive constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getRandomPassive Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::NewProp_ignored_Inner = { "ignored", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPassiveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::NewProp_ignored = { "ignored", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomaticAssetRefs_eventgetRandomPassive_Parms, ignored), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ignored_MetaData), NewProp_ignored_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomaticAssetRefs_eventgetRandomPassive_Parms, ReturnValue), Z_Construct_UClass_UPassiveData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::NewProp_ignored_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::NewProp_ignored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::PropPointers) < 2048);
// ********** End Function getRandomPassive Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAutomaticAssetRefs, nullptr, "getRandomPassive", 	Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::AutomaticAssetRefs_eventgetRandomPassive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::AutomaticAssetRefs_eventgetRandomPassive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomaticAssetRefs::execgetRandomPassive)
{
	P_GET_TARRAY_REF(UPassiveData*,Z_Param_Out_ignored);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UPassiveData**)Z_Param__Result=P_THIS->getRandomPassive(Z_Param_Out_ignored);
	P_NATIVE_END;
}
// ********** End Class UAutomaticAssetRefs Function getRandomPassive ******************************

// ********** Begin Class UAutomaticAssetRefs Function getRandomWeapon *****************************
struct Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics
{
	struct AutomaticAssetRefs_eventgetRandomWeapon_Parms
	{
		TArray<UWeaponTemplate*> ignored;
		const UWeaponTemplate* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AutomaticAssetRefs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ignored_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function getRandomWeapon constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ignored_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ignored;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getRandomWeapon constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getRandomWeapon Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::NewProp_ignored_Inner = { "ignored", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWeaponTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::NewProp_ignored = { "ignored", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomaticAssetRefs_eventgetRandomWeapon_Parms, ignored), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ignored_MetaData), NewProp_ignored_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutomaticAssetRefs_eventgetRandomWeapon_Parms, ReturnValue), Z_Construct_UClass_UWeaponTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::NewProp_ignored_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::NewProp_ignored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::PropPointers) < 2048);
// ********** End Function getRandomWeapon Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAutomaticAssetRefs, nullptr, "getRandomWeapon", 	Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::AutomaticAssetRefs_eventgetRandomWeapon_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::AutomaticAssetRefs_eventgetRandomWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutomaticAssetRefs::execgetRandomWeapon)
{
	P_GET_TARRAY_REF(UWeaponTemplate*,Z_Param_Out_ignored);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UWeaponTemplate**)Z_Param__Result=P_THIS->getRandomWeapon(Z_Param_Out_ignored);
	P_NATIVE_END;
}
// ********** End Class UAutomaticAssetRefs Function getRandomWeapon *******************************

// ********** Begin Class UAutomaticAssetRefs ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAutomaticAssetRefs;
UClass* UAutomaticAssetRefs::GetPrivateStaticClass()
{
	using TClass = UAutomaticAssetRefs;
	if (!Z_Registration_Info_UClass_UAutomaticAssetRefs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AutomaticAssetRefs"),
			Z_Registration_Info_UClass_UAutomaticAssetRefs.InnerSingleton,
			StaticRegisterNativesUAutomaticAssetRefs,
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
	return Z_Registration_Info_UClass_UAutomaticAssetRefs.InnerSingleton;
}
UClass* Z_Construct_UClass_UAutomaticAssetRefs_NoRegister()
{
	return UAutomaticAssetRefs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAutomaticAssetRefs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AutomaticAssetRefs.h" },
		{ "ModuleRelativePath", "AutomaticAssetRefs.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAutomaticAssetRefs constinit property declarations **********************
// ********** End Class UAutomaticAssetRefs constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("getRandomPassive"), .Pointer = &UAutomaticAssetRefs::execgetRandomPassive },
		{ .NameUTF8 = UTF8TEXT("getRandomWeapon"), .Pointer = &UAutomaticAssetRefs::execgetRandomWeapon },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomaticAssetRefs_getRandomPassive, "getRandomPassive" }, // 776066870
		{ &Z_Construct_UFunction_UAutomaticAssetRefs_getRandomWeapon, "getRandomWeapon" }, // 2594310812
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomaticAssetRefs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAutomaticAssetRefs_Statics
UObject* (*const Z_Construct_UClass_UAutomaticAssetRefs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticAssetRefs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomaticAssetRefs_Statics::ClassParams = {
	&UAutomaticAssetRefs::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutomaticAssetRefs_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutomaticAssetRefs_Statics::Class_MetaDataParams)
};
void UAutomaticAssetRefs::StaticRegisterNativesUAutomaticAssetRefs()
{
	UClass* Class = UAutomaticAssetRefs::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAutomaticAssetRefs_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAutomaticAssetRefs()
{
	if (!Z_Registration_Info_UClass_UAutomaticAssetRefs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomaticAssetRefs.OuterSingleton, Z_Construct_UClass_UAutomaticAssetRefs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutomaticAssetRefs.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAutomaticAssetRefs);
UAutomaticAssetRefs::~UAutomaticAssetRefs() {}
// ********** End Class UAutomaticAssetRefs ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AutomaticAssetRefs_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutomaticAssetRefs, UAutomaticAssetRefs::StaticClass, TEXT("UAutomaticAssetRefs"), &Z_Registration_Info_UClass_UAutomaticAssetRefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomaticAssetRefs), 623002700U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AutomaticAssetRefs_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AutomaticAssetRefs_h__Script_i_love_vampires_2_1341579263{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AutomaticAssetRefs_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AutomaticAssetRefs_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
