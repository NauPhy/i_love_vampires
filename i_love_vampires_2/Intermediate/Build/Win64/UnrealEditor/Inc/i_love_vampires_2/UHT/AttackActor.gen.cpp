// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/AttackActor.h"
#include "GameplayEffectTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAttackActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAttackActor Function initialise_AAttackActor ****************************
struct Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics
{
	struct AttackActor_eventinitialise_AAttackActor_Parms
	{
		FGameplayEffectSpecHandle effect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AttackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialise_AAttackActor constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function initialise_AAttackActor constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function initialise_AAttackActor Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttackActor_eventinitialise_AAttackActor_Parms, effect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_effect_MetaData), NewProp_effect_MetaData) }; // 2221987375
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::NewProp_effect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::PropPointers) < 2048);
// ********** End Function initialise_AAttackActor Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAttackActor, nullptr, "initialise_AAttackActor", 	Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::AttackActor_eventinitialise_AAttackActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::AttackActor_eventinitialise_AAttackActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAttackActor_initialise_AAttackActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAttackActor_initialise_AAttackActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAttackActor::execinitialise_AAttackActor)
{
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_effect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialise_AAttackActor(Z_Param_Out_effect);
	P_NATIVE_END;
}
// ********** End Class AAttackActor Function initialise_AAttackActor ******************************

// ********** Begin Class AAttackActor *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAttackActor;
UClass* AAttackActor::GetPrivateStaticClass()
{
	using TClass = AAttackActor;
	if (!Z_Registration_Info_UClass_AAttackActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AttackActor"),
			Z_Registration_Info_UClass_AAttackActor.InnerSingleton,
			StaticRegisterNativesAAttackActor,
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
	return Z_Registration_Info_UClass_AAttackActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAttackActor_NoRegister()
{
	return AAttackActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAttackActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttackActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AttackActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAttackActor constinit property declarations *****************************
// ********** End Class AAttackActor constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("initialise_AAttackActor"), .Pointer = &AAttackActor::execinitialise_AAttackActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAttackActor_initialise_AAttackActor, "initialise_AAttackActor" }, // 3661480501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAttackActor_Statics
UObject* (*const Z_Construct_UClass_AAttackActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttackActor_Statics::ClassParams = {
	&AAttackActor::StaticClass,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttackActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttackActor_Statics::Class_MetaDataParams)
};
void AAttackActor::StaticRegisterNativesAAttackActor()
{
	UClass* Class = AAttackActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AAttackActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_AAttackActor()
{
	if (!Z_Registration_Info_UClass_AAttackActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttackActor.OuterSingleton, Z_Construct_UClass_AAttackActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAttackActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAttackActor);
AAttackActor::~AAttackActor() {}
// ********** End Class AAttackActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAttackActor, AAttackActor::StaticClass, TEXT("AAttackActor"), &Z_Registration_Info_UClass_AAttackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttackActor), 3509130337U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_4063505255{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AttackActor_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
