// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/EnemyBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AEnemyBase();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyBase Function initialise_AEnemyBase ********************************
struct Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics
{
	struct EnemyBase_eventinitialise_AEnemyBase_Parms
	{
		UCombatantTemplate* temp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialise_AEnemyBase constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_temp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function initialise_AEnemyBase constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function initialise_AEnemyBase Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::NewProp_temp = { "temp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventinitialise_AEnemyBase_Parms, temp), Z_Construct_UClass_UCombatantTemplate_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::NewProp_temp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::PropPointers) < 2048);
// ********** End Function initialise_AEnemyBase Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "initialise_AEnemyBase", 	Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::EnemyBase_eventinitialise_AEnemyBase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::EnemyBase_eventinitialise_AEnemyBase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyBase::execinitialise_AEnemyBase)
{
	P_GET_OBJECT(UCombatantTemplate,Z_Param_temp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialise_AEnemyBase(Z_Param_temp);
	P_NATIVE_END;
}
// ********** End Class AEnemyBase Function initialise_AEnemyBase **********************************

// ********** Begin Class AEnemyBase ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyBase;
UClass* AEnemyBase::GetPrivateStaticClass()
{
	using TClass = AEnemyBase;
	if (!Z_Registration_Info_UClass_AEnemyBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EnemyBase"),
			Z_Registration_Info_UClass_AEnemyBase.InnerSingleton,
			StaticRegisterNativesAEnemyBase,
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
	return Z_Registration_Info_UClass_AEnemyBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
{
	return AEnemyBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyBase.h" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AEnemyBase constinit property declarations *******************************
// ********** End Class AEnemyBase constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("initialise_AEnemyBase"), .Pointer = &AEnemyBase::execinitialise_AEnemyBase },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_initialise_AEnemyBase, "initialise_AEnemyBase" }, // 3085218329
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AEnemyBase_Statics
UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACombatant,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
	&AEnemyBase::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams)
};
void AEnemyBase::StaticRegisterNativesAEnemyBase()
{
	UClass* Class = AEnemyBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AEnemyBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_AEnemyBase()
{
	if (!Z_Registration_Info_UClass_AEnemyBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBase.OuterSingleton, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AEnemyBase);
AEnemyBase::~AEnemyBase() {}
// ********** End Class AEnemyBase *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyBase_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBase, AEnemyBase::StaticClass, TEXT("AEnemyBase"), &Z_Registration_Info_UClass_AEnemyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBase), 3020183263U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyBase_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyBase_h__Script_i_love_vampires_2_3866734098{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyBase_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_EnemyBase_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
