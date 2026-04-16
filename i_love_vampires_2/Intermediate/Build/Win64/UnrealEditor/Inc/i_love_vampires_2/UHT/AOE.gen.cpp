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
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributeData_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOETemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOETemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeData();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseConfig();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOEShape();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EAOETargeting();
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
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAOE);
AAOE::~AAOE() {}
// ********** End Class AAOE ***********************************************************************

// ********** Begin Class UAOEConfig ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAOEConfig;
UClass* UAOEConfig::GetPrivateStaticClass()
{
	using TClass = UAOEConfig;
	if (!Z_Registration_Info_UClass_UAOEConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AOEConfig"),
			Z_Registration_Info_UClass_UAOEConfig.InnerSingleton,
			StaticRegisterNativesUAOEConfig,
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
	return Z_Registration_Info_UClass_UAOEConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UAOEConfig_NoRegister()
{
	return UAOEConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAOEConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "AOE.h" },
		{ "ModuleRelativePath", "AOE.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__shape_MetaData[] = {
		{ "Category", "AOEConfig" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__targeting_MetaData[] = {
		{ "Category", "AOEConfig" },
		{ "ModuleRelativePath", "AOE.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAOEConfig constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp__shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__shape;
	static const UECodeGen_Private::FBytePropertyParams NewProp__targeting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__targeting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAOEConfig constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOEConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAOEConfig_Statics

// ********** Begin Class UAOEConfig Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape = { "_shape", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEConfig, _shape), Z_Construct_UEnum_i_love_vampires_2_EAOEShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__shape_MetaData), NewProp__shape_MetaData) }; // 2715704246
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAOEConfig_Statics::NewProp__targeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAOEConfig_Statics::NewProp__targeting = { "_targeting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEConfig, _targeting), Z_Construct_UEnum_i_love_vampires_2_EAOETargeting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__targeting_MetaData), NewProp__targeting_MetaData) }; // 2041281939
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAOEConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEConfig_Statics::NewProp__shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEConfig_Statics::NewProp__targeting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEConfig_Statics::NewProp__targeting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::PropPointers) < 2048);
// ********** End Class UAOEConfig Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_UAOEConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAOEConfig_Statics::ClassParams = {
	&UAOEConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAOEConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAOEConfig_Statics::Class_MetaDataParams)
};
void UAOEConfig::StaticRegisterNativesUAOEConfig()
{
}
UClass* Z_Construct_UClass_UAOEConfig()
{
	if (!Z_Registration_Info_UClass_UAOEConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAOEConfig.OuterSingleton, Z_Construct_UClass_UAOEConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAOEConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAOEConfig);
UAOEConfig::~UAOEConfig() {}
// ********** End Class UAOEConfig *****************************************************************

// ********** Begin Class UAOEAttributeData ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAOEAttributeData;
UClass* UAOEAttributeData::GetPrivateStaticClass()
{
	using TClass = UAOEAttributeData;
	if (!Z_Registration_Info_UClass_UAOEAttributeData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AOEAttributeData"),
			Z_Registration_Info_UClass_UAOEAttributeData.InnerSingleton,
			StaticRegisterNativesUAOEAttributeData,
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
	return Z_Registration_Info_UClass_UAOEAttributeData.InnerSingleton;
}
UClass* Z_Construct_UClass_UAOEAttributeData_NoRegister()
{
	return UAOEAttributeData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAOEAttributeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "AOE.h" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[] = {
		{ "Category", "AOEAttributeData" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__duration_MetaData[] = {
		{ "Category", "AOEAttributeData" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__arcShape_angle_MetaData[] = {
		{ "Category", "AOEAttributeData" },
		{ "ModuleRelativePath", "AOE.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAOEAttributeData constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__arcShape_angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAOEAttributeData constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOEAttributeData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAOEAttributeData_Statics

// ********** Begin Class UAOEAttributeData Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAOEAttributeData_Statics::NewProp__radius = { "_radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEAttributeData, _radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__radius_MetaData), NewProp__radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAOEAttributeData_Statics::NewProp__duration = { "_duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEAttributeData, _duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__duration_MetaData), NewProp__duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAOEAttributeData_Statics::NewProp__arcShape_angle = { "_arcShape_angle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOEAttributeData, _arcShape_angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__arcShape_angle_MetaData), NewProp__arcShape_angle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAOEAttributeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEAttributeData_Statics::NewProp__radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEAttributeData_Statics::NewProp__duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOEAttributeData_Statics::NewProp__arcShape_angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributeData_Statics::PropPointers) < 2048);
// ********** End Class UAOEAttributeData Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UAOEAttributeData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAttributeData,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributeData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAOEAttributeData_Statics::ClassParams = {
	&UAOEAttributeData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAOEAttributeData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributeData_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAOEAttributeData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAOEAttributeData_Statics::Class_MetaDataParams)
};
void UAOEAttributeData::StaticRegisterNativesUAOEAttributeData()
{
}
UClass* Z_Construct_UClass_UAOEAttributeData()
{
	if (!Z_Registration_Info_UClass_UAOEAttributeData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAOEAttributeData.OuterSingleton, Z_Construct_UClass_UAOEAttributeData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAOEAttributeData.OuterSingleton;
}
UAOEAttributeData::UAOEAttributeData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAOEAttributeData);
UAOEAttributeData::~UAOEAttributeData() {}
// ********** End Class UAOEAttributeData **********************************************************

// ********** Begin Class UAOETemplate *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAOETemplate;
UClass* UAOETemplate::GetPrivateStaticClass()
{
	using TClass = UAOETemplate;
	if (!Z_Registration_Info_UClass_UAOETemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AOETemplate"),
			Z_Registration_Info_UClass_UAOETemplate.InnerSingleton,
			StaticRegisterNativesUAOETemplate,
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
	return Z_Registration_Info_UClass_UAOETemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UAOETemplate_NoRegister()
{
	return UAOETemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAOETemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "AOE.h" },
		{ "ModuleRelativePath", "AOE.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEConfig_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AOE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__AOEAttributes_MetaData[] = {
		{ "Category", "AOETemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AOE.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAOETemplate constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__AOEAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UAOETemplate constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOETemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAOETemplate_Statics

// ********** Begin Class UAOETemplate Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAOETemplate_Statics::NewProp__AOEConfig = { "_AOEConfig", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOETemplate, _AOEConfig), Z_Construct_UClass_UAOEConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEConfig_MetaData), NewProp__AOEConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAOETemplate_Statics::NewProp__AOEAttributes = { "_AOEAttributes", nullptr, (EPropertyFlags)0x0012000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAOETemplate, _AOEAttributes), Z_Construct_UClass_UAOEAttributeData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__AOEAttributes_MetaData), NewProp__AOEAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAOETemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOETemplate_Statics::NewProp__AOEConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAOETemplate_Statics::NewProp__AOEAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOETemplate_Statics::PropPointers) < 2048);
// ********** End Class UAOETemplate Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_UAOETemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttackTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAOETemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAOETemplate_Statics::ClassParams = {
	&UAOETemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAOETemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAOETemplate_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAOETemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UAOETemplate_Statics::Class_MetaDataParams)
};
void UAOETemplate::StaticRegisterNativesUAOETemplate()
{
}
UClass* Z_Construct_UClass_UAOETemplate()
{
	if (!Z_Registration_Info_UClass_UAOETemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAOETemplate.OuterSingleton, Z_Construct_UClass_UAOETemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAOETemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAOETemplate);
UAOETemplate::~UAOETemplate() {}
// ********** End Class UAOETemplate ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAOE, AAOE::StaticClass, TEXT("AAOE"), &Z_Registration_Info_UClass_AAOE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAOE), 846808820U) },
		{ Z_Construct_UClass_UAOEConfig, UAOEConfig::StaticClass, TEXT("UAOEConfig"), &Z_Registration_Info_UClass_UAOEConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAOEConfig), 3195257304U) },
		{ Z_Construct_UClass_UAOEAttributeData, UAOEAttributeData::StaticClass, TEXT("UAOEAttributeData"), &Z_Registration_Info_UClass_UAOEAttributeData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAOEAttributeData), 3208941639U) },
		{ Z_Construct_UClass_UAOETemplate, UAOETemplate::StaticClass, TEXT("UAOETemplate"), &Z_Registration_Info_UClass_UAOETemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAOETemplate), 443548299U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_2862609829{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
