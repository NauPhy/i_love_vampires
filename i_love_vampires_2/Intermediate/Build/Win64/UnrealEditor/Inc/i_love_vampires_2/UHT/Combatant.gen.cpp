// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Combatant.h"
#include "i_love_vampires_2/CombatantTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatant() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantTemplate();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACombatant Function initialise_ACombatant ********************************
struct Z_Construct_UFunction_ACombatant_initialise_ACombatant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combatant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialise_ACombatant constinit property declarations *****************
// ********** End Function initialise_ACombatant constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatant_initialise_ACombatant_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatant, nullptr, "initialise_ACombatant", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatant_initialise_ACombatant_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatant_initialise_ACombatant_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACombatant_initialise_ACombatant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatant_initialise_ACombatant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatant::execinitialise_ACombatant)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialise_ACombatant();
	P_NATIVE_END;
}
// ********** End Class ACombatant Function initialise_ACombatant **********************************

// ********** Begin Class ACombatant Function initialiseFromTemplate *******************************
struct Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics
{
	struct Combatant_eventinitialiseFromTemplate_Parms
	{
		FCombatantTemplate myTemplate;
		FName newID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myTemplate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialiseFromTemplate constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_myTemplate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_newID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function initialiseFromTemplate constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function initialiseFromTemplate Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::NewProp_myTemplate = { "myTemplate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Combatant_eventinitialiseFromTemplate_Parms, myTemplate), Z_Construct_UScriptStruct_FCombatantTemplate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myTemplate_MetaData), NewProp_myTemplate_MetaData) }; // 3764530331
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::NewProp_newID = { "newID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Combatant_eventinitialiseFromTemplate_Parms, newID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::NewProp_myTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::NewProp_newID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::PropPointers) < 2048);
// ********** End Function initialiseFromTemplate Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACombatant, nullptr, "initialiseFromTemplate", 	Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::Combatant_eventinitialiseFromTemplate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::Combatant_eventinitialiseFromTemplate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACombatant_initialiseFromTemplate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACombatant_initialiseFromTemplate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACombatant::execinitialiseFromTemplate)
{
	P_GET_STRUCT_REF(FCombatantTemplate,Z_Param_Out_myTemplate);
	P_GET_PROPERTY(FNameProperty,Z_Param_newID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialiseFromTemplate(Z_Param_Out_myTemplate,Z_Param_newID);
	P_NATIVE_END;
}
// ********** End Class ACombatant Function initialiseFromTemplate *********************************

// ********** Begin Class ACombatant ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACombatant;
UClass* ACombatant::GetPrivateStaticClass()
{
	using TClass = ACombatant;
	if (!Z_Registration_Info_UClass_ACombatant.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Combatant"),
			Z_Registration_Info_UClass_ACombatant.InnerSingleton,
			StaticRegisterNativesACombatant,
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
	return Z_Registration_Info_UClass_ACombatant.InnerSingleton;
}
UClass* Z_Construct_UClass_ACombatant_NoRegister()
{
	return ACombatant::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACombatant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Combatant.h" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "ACombatant" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__ID_MetaData[] = {
		{ "Category", "ACombatant" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combatantFlipbook_MetaData[] = {
		{ "Category", "ACombatant" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Combatant.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACombatant constinit property declarations *******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static const UECodeGen_Private::FNamePropertyParams NewProp__ID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__combatantFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACombatant constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("initialise_ACombatant"), .Pointer = &ACombatant::execinitialise_ACombatant },
		{ .NameUTF8 = UTF8TEXT("initialiseFromTemplate"), .Pointer = &ACombatant::execinitialiseFromTemplate },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACombatant_initialise_ACombatant, "initialise_ACombatant" }, // 3127144356
		{ &Z_Construct_UFunction_ACombatant_initialiseFromTemplate, "initialiseFromTemplate" }, // 377330694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACombatant_Statics

// ********** Begin Class ACombatant Property Definitions ******************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__ID = { "_ID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__ID_MetaData), NewProp__ID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombatant_Statics::NewProp__combatantFlipbook = { "_combatantFlipbook", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACombatant, _combatantFlipbook), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combatantFlipbook_MetaData), NewProp__combatantFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombatant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombatant_Statics::NewProp__combatantFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::PropPointers) < 2048);
// ********** End Class ACombatant Property Definitions ********************************************
UObject* (*const Z_Construct_UClass_ACombatant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatant_Statics::ClassParams = {
	&ACombatant::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACombatant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACombatant_Statics::Class_MetaDataParams), Z_Construct_UClass_ACombatant_Statics::Class_MetaDataParams)
};
void ACombatant::StaticRegisterNativesACombatant()
{
	UClass* Class = ACombatant::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ACombatant_Statics::Funcs));
}
UClass* Z_Construct_UClass_ACombatant()
{
	if (!Z_Registration_Info_UClass_ACombatant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatant.OuterSingleton, Z_Construct_UClass_ACombatant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACombatant.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACombatant);
ACombatant::~ACombatant() {}
// ********** End Class ACombatant *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACombatant, ACombatant::StaticClass, TEXT("ACombatant"), &Z_Registration_Info_UClass_ACombatant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatant), 3294018136U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_1455504861{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
