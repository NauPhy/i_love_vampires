// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/CombatantReferences.h"
#include "Engine/GameInstance.h"
#include "i_love_vampires_2/CombatantTemplate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCombatantReferences() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantReferences();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantReferences_NoRegister();
I_LOVE_VAMPIRES_2_API UScriptStruct* Z_Construct_UScriptStruct_FCombatantTemplate();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatantReferences Function getTemplate ********************************
struct Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics
{
	struct CombatantReferences_eventgetTemplate_Parms
	{
		FName ID;
		FCombatantTemplate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatantReferences.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function getTemplate constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getTemplate constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getTemplate Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantReferences_eventgetTemplate_Parms, ID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantReferences_eventgetTemplate_Parms, ReturnValue), Z_Construct_UScriptStruct_FCombatantTemplate, METADATA_PARAMS(0, nullptr) }; // 4131989363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::PropPointers) < 2048);
// ********** End Function getTemplate Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatantReferences, nullptr, "getTemplate", 	Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::CombatantReferences_eventgetTemplate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::CombatantReferences_eventgetTemplate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatantReferences_getTemplate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatantReferences_getTemplate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatantReferences::execgetTemplate)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCombatantTemplate*)Z_Param__Result=P_THIS->getTemplate(Z_Param_ID);
	P_NATIVE_END;
}
// ********** End Class UCombatantReferences Function getTemplate **********************************

// ********** Begin Class UCombatantReferences Function setTableReference **************************
struct Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics
{
	struct CombatantReferences_eventsetTableReference_Parms
	{
		UDataTable* newTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CombatantReferences.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function setTableReference constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_newTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function setTableReference constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function setTableReference Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::NewProp_newTable = { "newTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatantReferences_eventsetTableReference_Parms, newTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::NewProp_newTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::PropPointers) < 2048);
// ********** End Function setTableReference Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatantReferences, nullptr, "setTableReference", 	Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::CombatantReferences_eventsetTableReference_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::CombatantReferences_eventsetTableReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatantReferences_setTableReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatantReferences_setTableReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatantReferences::execsetTableReference)
{
	P_GET_OBJECT(UDataTable,Z_Param_newTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setTableReference(Z_Param_newTable);
	P_NATIVE_END;
}
// ********** End Class UCombatantReferences Function setTableReference ****************************

// ********** Begin Class UCombatantReferences *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatantReferences;
UClass* UCombatantReferences::GetPrivateStaticClass()
{
	using TClass = UCombatantReferences;
	if (!Z_Registration_Info_UClass_UCombatantReferences.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CombatantReferences"),
			Z_Registration_Info_UClass_UCombatantReferences.InnerSingleton,
			StaticRegisterNativesUCombatantReferences,
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
	return Z_Registration_Info_UClass_UCombatantReferences.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatantReferences_NoRegister()
{
	return UCombatantReferences::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatantReferences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CombatantReferences.h" },
		{ "ModuleRelativePath", "CombatantReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_combatantTable_MetaData[] = {
		{ "Category", "CombatantReferences" },
		{ "ModuleRelativePath", "CombatantReferences.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCombatantReferences constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_combatantTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCombatantReferences constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("getTemplate"), .Pointer = &UCombatantReferences::execgetTemplate },
		{ .NameUTF8 = UTF8TEXT("setTableReference"), .Pointer = &UCombatantReferences::execsetTableReference },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatantReferences_getTemplate, "getTemplate" }, // 2773424305
		{ &Z_Construct_UFunction_UCombatantReferences_setTableReference, "setTableReference" }, // 2935644922
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatantReferences>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCombatantReferences_Statics

// ********** Begin Class UCombatantReferences Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatantReferences_Statics::NewProp_combatantTable = { "combatantTable", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatantReferences, combatantTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_combatantTable_MetaData), NewProp_combatantTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatantReferences_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatantReferences_Statics::NewProp_combatantTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantReferences_Statics::PropPointers) < 2048);
// ********** End Class UCombatantReferences Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UCombatantReferences_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantReferences_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatantReferences_Statics::ClassParams = {
	&UCombatantReferences::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatantReferences_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantReferences_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatantReferences_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatantReferences_Statics::Class_MetaDataParams)
};
void UCombatantReferences::StaticRegisterNativesUCombatantReferences()
{
	UClass* Class = UCombatantReferences::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UCombatantReferences_Statics::Funcs));
}
UClass* Z_Construct_UClass_UCombatantReferences()
{
	if (!Z_Registration_Info_UClass_UCombatantReferences.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatantReferences.OuterSingleton, Z_Construct_UClass_UCombatantReferences_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatantReferences.OuterSingleton;
}
UCombatantReferences::UCombatantReferences() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCombatantReferences);
UCombatantReferences::~UCombatantReferences() {}
// ********** End Class UCombatantReferences *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantReferences_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatantReferences, UCombatantReferences::StaticClass, TEXT("UCombatantReferences"), &Z_Registration_Info_UClass_UCombatantReferences, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatantReferences), 2985583793U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantReferences_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantReferences_h__Script_i_love_vampires_2_1092306620{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantReferences_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantReferences_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
