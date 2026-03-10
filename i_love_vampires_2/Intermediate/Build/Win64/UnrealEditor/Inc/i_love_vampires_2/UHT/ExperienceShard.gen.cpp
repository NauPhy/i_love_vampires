// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/ExperienceShard.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExperienceShard() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExperienceShard();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExperienceShard_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExperienceShard Function beginMagnetism *********************************
struct ExperienceShard_eventbeginMagnetism_Parms
{
	APawn* playerRef;
};
static FName NAME_AExperienceShard_beginMagnetism = FName(TEXT("beginMagnetism"));
void AExperienceShard::beginMagnetism(APawn* playerRef)
{
	UFunction* Func = FindFunctionChecked(NAME_AExperienceShard_beginMagnetism);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ExperienceShard_eventbeginMagnetism_Parms Parms;
		Parms.playerRef=playerRef;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		beginMagnetism_Implementation(playerRef);
	}
}
struct Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExperienceShard.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function beginMagnetism constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function beginMagnetism constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function beginMagnetism Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::NewProp_playerRef = { "playerRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExperienceShard_eventbeginMagnetism_Parms, playerRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::NewProp_playerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::PropPointers) < 2048);
// ********** End Function beginMagnetism Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExperienceShard, nullptr, "beginMagnetism", 	Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::PropPointers), 
sizeof(ExperienceShard_eventbeginMagnetism_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ExperienceShard_eventbeginMagnetism_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExperienceShard_beginMagnetism()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExperienceShard_beginMagnetism_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExperienceShard::execbeginMagnetism)
{
	P_GET_OBJECT(APawn,Z_Param_playerRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->beginMagnetism_Implementation(Z_Param_playerRef);
	P_NATIVE_END;
}
// ********** End Class AExperienceShard Function beginMagnetism ***********************************

// ********** Begin Class AExperienceShard Function suicide ****************************************
static FName NAME_AExperienceShard_suicide = FName(TEXT("suicide"));
void AExperienceShard::suicide()
{
	UFunction* Func = FindFunctionChecked(NAME_AExperienceShard_suicide);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		suicide_Implementation();
	}
}
struct Z_Construct_UFunction_AExperienceShard_suicide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExperienceShard.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function suicide constinit property declarations *******************************
// ********** End Function suicide constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExperienceShard_suicide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExperienceShard, nullptr, "suicide", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExperienceShard_suicide_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExperienceShard_suicide_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AExperienceShard_suicide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExperienceShard_suicide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExperienceShard::execsuicide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->suicide_Implementation();
	P_NATIVE_END;
}
// ********** End Class AExperienceShard Function suicide ******************************************

// ********** Begin Class AExperienceShard *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExperienceShard;
UClass* AExperienceShard::GetPrivateStaticClass()
{
	using TClass = AExperienceShard;
	if (!Z_Registration_Info_UClass_AExperienceShard.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExperienceShard"),
			Z_Registration_Info_UClass_AExperienceShard.InnerSingleton,
			StaticRegisterNativesAExperienceShard,
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
	return Z_Registration_Info_UClass_AExperienceShard.InnerSingleton;
}
UClass* Z_Construct_UClass_AExperienceShard_NoRegister()
{
	return AExperienceShard::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExperienceShard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExperienceShard.h" },
		{ "ModuleRelativePath", "ExperienceShard.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExperienceShard constinit property declarations *************************
// ********** End Class AExperienceShard constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("beginMagnetism"), .Pointer = &AExperienceShard::execbeginMagnetism },
		{ .NameUTF8 = UTF8TEXT("suicide"), .Pointer = &AExperienceShard::execsuicide },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AExperienceShard_beginMagnetism, "beginMagnetism" }, // 845924244
		{ &Z_Construct_UFunction_AExperienceShard_suicide, "suicide" }, // 2819904472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperienceShard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExperienceShard_Statics
UObject* (*const Z_Construct_UClass_AExperienceShard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceShard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExperienceShard_Statics::ClassParams = {
	&AExperienceShard::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceShard_Statics::Class_MetaDataParams), Z_Construct_UClass_AExperienceShard_Statics::Class_MetaDataParams)
};
void AExperienceShard::StaticRegisterNativesAExperienceShard()
{
	UClass* Class = AExperienceShard::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AExperienceShard_Statics::Funcs));
}
UClass* Z_Construct_UClass_AExperienceShard()
{
	if (!Z_Registration_Info_UClass_AExperienceShard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExperienceShard.OuterSingleton, Z_Construct_UClass_AExperienceShard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExperienceShard.OuterSingleton;
}
AExperienceShard::AExperienceShard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExperienceShard);
AExperienceShard::~AExperienceShard() {}
// ********** End Class AExperienceShard ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExperienceShard, AExperienceShard::StaticClass, TEXT("AExperienceShard"), &Z_Registration_Info_UClass_AExperienceShard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExperienceShard), 967978125U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_224604796{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExperienceShard_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
