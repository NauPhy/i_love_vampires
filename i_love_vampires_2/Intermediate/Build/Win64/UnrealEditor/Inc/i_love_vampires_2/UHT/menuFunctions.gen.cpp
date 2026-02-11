// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/menuFunctions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodemenuFunctions() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UmenuFunctions();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UmenuFunctions_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UmenuFunctions Function createPreparationMenu ****************************
struct Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics
{
	struct menuFunctions_eventcreatePreparationMenu_Parms
	{
		FString saveSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "menuFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function createPreparationMenu constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_saveSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function createPreparationMenu constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function createPreparationMenu Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::NewProp_saveSlot = { "saveSlot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(menuFunctions_eventcreatePreparationMenu_Parms, saveSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::NewProp_saveSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::PropPointers) < 2048);
// ********** End Function createPreparationMenu Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UmenuFunctions, nullptr, "createPreparationMenu", 	Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::menuFunctions_eventcreatePreparationMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::menuFunctions_eventcreatePreparationMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UmenuFunctions_createPreparationMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UmenuFunctions_createPreparationMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UmenuFunctions::execcreatePreparationMenu)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_saveSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	UmenuFunctions::createPreparationMenu(Z_Param_Out_saveSlot);
	P_NATIVE_END;
}
// ********** End Class UmenuFunctions Function createPreparationMenu ******************************

// ********** Begin Class UmenuFunctions ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UmenuFunctions;
UClass* UmenuFunctions::GetPrivateStaticClass()
{
	using TClass = UmenuFunctions;
	if (!Z_Registration_Info_UClass_UmenuFunctions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("menuFunctions"),
			Z_Registration_Info_UClass_UmenuFunctions.InnerSingleton,
			StaticRegisterNativesUmenuFunctions,
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
	return Z_Registration_Info_UClass_UmenuFunctions.InnerSingleton;
}
UClass* Z_Construct_UClass_UmenuFunctions_NoRegister()
{
	return UmenuFunctions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UmenuFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "menuFunctions.h" },
		{ "ModuleRelativePath", "menuFunctions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UmenuFunctions constinit property declarations ***************************
// ********** End Class UmenuFunctions constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("createPreparationMenu"), .Pointer = &UmenuFunctions::execcreatePreparationMenu },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UmenuFunctions_createPreparationMenu, "createPreparationMenu" }, // 1975174898
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UmenuFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UmenuFunctions_Statics
UObject* (*const Z_Construct_UClass_UmenuFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UmenuFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UmenuFunctions_Statics::ClassParams = {
	&UmenuFunctions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UmenuFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UmenuFunctions_Statics::Class_MetaDataParams)
};
void UmenuFunctions::StaticRegisterNativesUmenuFunctions()
{
	UClass* Class = UmenuFunctions::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UmenuFunctions_Statics::Funcs));
}
UClass* Z_Construct_UClass_UmenuFunctions()
{
	if (!Z_Registration_Info_UClass_UmenuFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UmenuFunctions.OuterSingleton, Z_Construct_UClass_UmenuFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UmenuFunctions.OuterSingleton;
}
UmenuFunctions::UmenuFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UmenuFunctions);
UmenuFunctions::~UmenuFunctions() {}
// ********** End Class UmenuFunctions *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_menuFunctions_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UmenuFunctions, UmenuFunctions::StaticClass, TEXT("UmenuFunctions"), &Z_Registration_Info_UClass_UmenuFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UmenuFunctions), 3730062867U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_menuFunctions_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_menuFunctions_h__Script_i_love_vampires_2_2698207952{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_menuFunctions_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_menuFunctions_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
