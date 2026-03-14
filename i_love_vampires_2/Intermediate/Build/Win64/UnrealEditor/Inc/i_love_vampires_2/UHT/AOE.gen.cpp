// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AOE.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAOE() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributes();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributes_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackAttributes();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAOE Function OnOverlapBegin *********************************************
struct Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics
{
	struct AOE_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnOverlapBegin constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnOverlapBegin constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnOverlapBegin Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOE_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOE_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOE_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOE_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((AOE_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOE_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOE_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::PropPointers) < 2048);
// ********** End Function OnOverlapBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAOE, nullptr, "OnOverlapBegin", 	Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::AOE_eventOnOverlapBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::AOE_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAOE_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAOE_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAOE::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AAOE Function OnOverlapBegin ***********************************************

// ********** Begin Class AAOE *********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAOE;
UClass* AAOE::GetPrivateStaticClass()
{
	using TClass = AAOE;
	if (!Z_Registration_Info_UClass_AAOE.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AOE"),
			Z_Registration_Info_UClass_AAOE.InnerSingleton,
			StaticRegisterNativesAAOE,
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
	return Z_Registration_Info_UClass_AAOE.InnerSingleton;
}
UClass* Z_Construct_UClass_AAOE_NoRegister()
{
	return AAOE::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAOE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AOE.h" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__collider_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AOE.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAOE constinit property declarations *************************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__collider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AAOE constinit property declarations ***************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnOverlapBegin"), .Pointer = &AAOE::execOnOverlapBegin },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAOE_OnOverlapBegin, "OnOverlapBegin" }, // 3246697632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAOE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAOE_Statics

// ********** Begin Class AAOE Property Definitions ************************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAOE_Statics::NewProp__collider = { "_collider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAOE, _collider), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__collider_MetaData), NewProp__collider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAOE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAOE_Statics::NewProp__collider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAOE_Statics::PropPointers) < 2048);
// ********** End Class AAOE Property Definitions **************************************************
UObject* (*const Z_Construct_UClass_AAOE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAttackActor,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAOE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAOE_Statics::ClassParams = {
	&AAOE::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAOE_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAOE_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAOE_Statics::Class_MetaDataParams), Z_Construct_UClass_AAOE_Statics::Class_MetaDataParams)
};
void AAOE::StaticRegisterNativesAAOE()
{
	UClass* Class = AAOE::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AAOE_Statics::Funcs));
}
UClass* Z_Construct_UClass_AAOE()
{
	if (!Z_Registration_Info_UClass_AAOE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAOE.OuterSingleton, Z_Construct_UClass_AAOE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAOE.OuterSingleton;
}
AAOE::AAOE() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAOE);
AAOE::~AAOE() {}
// ********** End Class AAOE ***********************************************************************

// ********** Begin Class UAOEData *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAOEData;
UClass* UAOEData::GetPrivateStaticClass()
{
	using TClass = UAOEData;
	if (!Z_Registration_Info_UClass_UAOEData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AOEData"),
			Z_Registration_Info_UClass_UAOEData.InnerSingleton,
			StaticRegisterNativesUAOEData,
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
	return Z_Registration_Info_UClass_UAOEData.InnerSingleton;
}
UClass* Z_Construct_UClass_UAOEData_NoRegister()
{
	return UAOEData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAOEData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AOE.h" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__config_MetaData[] = {
		{ "Category", "AOEData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attributes_MetaData[] = {
		{ "Category", "AOEData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AOE.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAOEData constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAOEData constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOEData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAOEData_Statics

// ********** Begin Class UAOEData Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAOEData_Statics::NewProp__config = { "_config", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEData, _config), Z_Construct_UClass_UAOEConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__config_MetaData), NewProp__config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAOEData_Statics::NewProp__attributes = { "_attributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEData, _attributes), Z_Construct_UClass_UAOEAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attributes_MetaData), NewProp__attributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAOEData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEData_Statics::NewProp__config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEData_Statics::NewProp__attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEData_Statics::PropPointers) < 2048);
// ********** End Class UAOEData Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_UAOEData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAOEData_Statics::ClassParams = {
	&UAOEData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAOEData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAOEData_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAOEData_Statics::Class_MetaDataParams)
};
void UAOEData::StaticRegisterNativesUAOEData()
{
}
UClass* Z_Construct_UClass_UAOEData()
{
	if (!Z_Registration_Info_UClass_UAOEData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAOEData.OuterSingleton, Z_Construct_UClass_UAOEData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAOEData.OuterSingleton;
}
UAOEData::UAOEData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAOEData);
UAOEData::~UAOEData() {}
// ********** End Class UAOEData *******************************************************************

// ********** Begin Class UAOEAttributes ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAOEAttributes;
UClass* UAOEAttributes::GetPrivateStaticClass()
{
	using TClass = UAOEAttributes;
	if (!Z_Registration_Info_UClass_UAOEAttributes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AOEAttributes"),
			Z_Registration_Info_UClass_UAOEAttributes.InnerSingleton,
			StaticRegisterNativesUAOEAttributes,
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
	return Z_Registration_Info_UClass_UAOEAttributes.InnerSingleton;
}
UClass* Z_Construct_UClass_UAOEAttributes_NoRegister()
{
	return UAOEAttributes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAOEAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UCLASS(BlueprintType)\n//class I_LOVE_VAMPIRES_2_API UAOEConfig : public UAttackConfig\n//{\n//\x09GENERATED_BODY()\n//\n//public:\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"AOEConfig\")\n//\x09""EAOEShape _shape = static_cast<EAOEShape>(0);\n//\x09UAOEConfig() { _attackClass = AAOE::StaticClass(); }\n//};\n" },
#endif
		{ "IncludePath", "AOE.h" },
		{ "ModuleRelativePath", "AOE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCLASS(BlueprintType)\nclass I_LOVE_VAMPIRES_2_API UAOEConfig : public UAttackConfig\n{\n       GENERATED_BODY()\n\npublic:\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"AOEConfig\")\n       EAOEShape _shape = static_cast<EAOEShape>(0);\n       UAOEConfig() { _attackClass = AAOE::StaticClass(); }\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "AOEAttributes" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__duration_MetaData[] = {
		{ "Category", "AOEAttributes" },
		{ "ModuleRelativePath", "AOE.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAOEAttributes constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAOEAttributes constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOEAttributes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAOEAttributes_Statics

// ********** Begin Class UAOEAttributes Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAOEAttributes_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEAttributes, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAOEAttributes_Statics::NewProp__duration = { "_duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEAttributes, _duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__duration_MetaData), NewProp__duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAOEAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEAttributes_Statics::NewProp__radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEAttributes_Statics::NewProp__duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributes_Statics::PropPointers) < 2048);
// ********** End Class UAOEAttributes Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UAOEAttributes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttackAttributes,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAOEAttributes_Statics::ClassParams = {
	&UAOEAttributes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAOEAttributes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributes_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributes_Statics::Class_MetaDataParams), Z_Construct_UClass_UAOEAttributes_Statics::Class_MetaDataParams)
};
void UAOEAttributes::StaticRegisterNativesUAOEAttributes()
{
}
UClass* Z_Construct_UClass_UAOEAttributes()
{
	if (!Z_Registration_Info_UClass_UAOEAttributes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAOEAttributes.OuterSingleton, Z_Construct_UClass_UAOEAttributes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAOEAttributes.OuterSingleton;
}
UAOEAttributes::UAOEAttributes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAOEAttributes);
UAOEAttributes::~UAOEAttributes() {}
// ********** End Class UAOEAttributes *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAOE, AAOE::StaticClass, TEXT("AAOE"), &Z_Registration_Info_UClass_AAOE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAOE), 3725859258U) },
		{ Z_Construct_UClass_UAOEData, UAOEData::StaticClass, TEXT("UAOEData"), &Z_Registration_Info_UClass_UAOEData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAOEData), 491161568U) },
		{ Z_Construct_UClass_UAOEAttributes, UAOEAttributes::StaticClass, TEXT("UAOEAttributes"), &Z_Registration_Info_UClass_UAOEAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAOEAttributes), 2130673681U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_3249173724{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
