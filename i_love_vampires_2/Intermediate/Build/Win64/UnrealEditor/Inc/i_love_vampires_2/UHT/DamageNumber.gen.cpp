// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/DamageNumber.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDamageNumber() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UDamageNumber();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UDamageNumber_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDamageNumber Function initialise_UDamageNumber **************************
struct DamageNumber_eventinitialise_UDamageNumber_Parms
{
	AActor* instigator;
	FVector offset;
	float damageAmount;
};
static FName NAME_UDamageNumber_initialise_UDamageNumber = FName(TEXT("initialise_UDamageNumber"));
void UDamageNumber::initialise_UDamageNumber(AActor* instigator, FVector const& offset, float damageAmount)
{
	UFunction* Func = FindFunctionChecked(NAME_UDamageNumber_initialise_UDamageNumber);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DamageNumber_eventinitialise_UDamageNumber_Parms Parms;
		Parms.instigator=instigator;
		Parms.offset=offset;
		Parms.damageAmount=damageAmount;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		initialise_UDamageNumber_Implementation(instigator, offset, damageAmount);
	}
}
struct Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DamageNumber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialise_UDamageNumber constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function initialise_UDamageNumber constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function initialise_UDamageNumber Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageNumber_eventinitialise_UDamageNumber_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageNumber_eventinitialise_UDamageNumber_Parms, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_offset_MetaData), NewProp_offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DamageNumber_eventinitialise_UDamageNumber_Parms, damageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::NewProp_instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::NewProp_offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::NewProp_damageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::PropPointers) < 2048);
// ********** End Function initialise_UDamageNumber Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDamageNumber, nullptr, "initialise_UDamageNumber", 	Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::PropPointers), 
sizeof(DamageNumber_eventinitialise_UDamageNumber_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DamageNumber_eventinitialise_UDamageNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDamageNumber::execinitialise_UDamageNumber)
{
	P_GET_OBJECT(AActor,Z_Param_instigator);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_offset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_damageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialise_UDamageNumber_Implementation(Z_Param_instigator,Z_Param_Out_offset,Z_Param_damageAmount);
	P_NATIVE_END;
}
// ********** End Class UDamageNumber Function initialise_UDamageNumber ****************************

// ********** Begin Class UDamageNumber ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDamageNumber;
UClass* UDamageNumber::GetPrivateStaticClass()
{
	using TClass = UDamageNumber;
	if (!Z_Registration_Info_UClass_UDamageNumber.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DamageNumber"),
			Z_Registration_Info_UClass_UDamageNumber.InnerSingleton,
			StaticRegisterNativesUDamageNumber,
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
	return Z_Registration_Info_UClass_UDamageNumber.InnerSingleton;
}
UClass* Z_Construct_UClass_UDamageNumber_NoRegister()
{
	return UDamageNumber::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDamageNumber_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DamageNumber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DamageNumber.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__damageAmount_MetaData[] = {
		{ "Category", "DamageNumber" },
		{ "ModuleRelativePath", "DamageNumber.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDamageNumber constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__damageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDamageNumber constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("initialise_UDamageNumber"), .Pointer = &UDamageNumber::execinitialise_UDamageNumber },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageNumber_initialise_UDamageNumber, "initialise_UDamageNumber" }, // 2563982008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageNumber>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDamageNumber_Statics

// ********** Begin Class UDamageNumber Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageNumber_Statics::NewProp__damageAmount = { "_damageAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageNumber, _damageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__damageAmount_MetaData), NewProp__damageAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageNumber_Statics::NewProp__damageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageNumber_Statics::PropPointers) < 2048);
// ********** End Class UDamageNumber Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_UDamageNumber_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageNumber_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageNumber_Statics::ClassParams = {
	&UDamageNumber::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDamageNumber_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageNumber_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageNumber_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageNumber_Statics::Class_MetaDataParams)
};
void UDamageNumber::StaticRegisterNativesUDamageNumber()
{
	UClass* Class = UDamageNumber::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDamageNumber_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDamageNumber()
{
	if (!Z_Registration_Info_UClass_UDamageNumber.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageNumber.OuterSingleton, Z_Construct_UClass_UDamageNumber_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageNumber.OuterSingleton;
}
UDamageNumber::UDamageNumber(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDamageNumber);
UDamageNumber::~UDamageNumber() {}
// ********** End Class UDamageNumber **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DamageNumber_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageNumber, UDamageNumber::StaticClass, TEXT("UDamageNumber"), &Z_Registration_Info_UClass_UDamageNumber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageNumber), 4060245584U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DamageNumber_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DamageNumber_h__Script_i_love_vampires_2_433606711{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DamageNumber_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DamageNumber_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
