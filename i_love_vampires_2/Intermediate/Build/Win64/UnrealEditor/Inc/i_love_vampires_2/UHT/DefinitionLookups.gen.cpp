// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/DefinitionLookups.h"
#include "AttributeSet.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDefinitionLookups() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UDefinitionLookups();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UDefinitionLookups_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDefinitionLookups Function combatantAttributeKeys ***********************
struct Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics
{
	struct DefinitionLookups_eventcombatantAttributeKeys_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefinitionLookups.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function combatantAttributeKeys constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function combatantAttributeKeys constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function combatantAttributeKeys Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefinitionLookups_eventcombatantAttributeKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::PropPointers) < 2048);
// ********** End Function combatantAttributeKeys Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDefinitionLookups, nullptr, "combatantAttributeKeys", 	Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::DefinitionLookups_eventcombatantAttributeKeys_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::DefinitionLookups_eventcombatantAttributeKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDefinitionLookups::execcombatantAttributeKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->combatantAttributeKeys();
	P_NATIVE_END;
}
// ********** End Class UDefinitionLookups Function combatantAttributeKeys *************************

// ********** Begin Class UDefinitionLookups Function combatantAttributeValues *********************
struct Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics
{
	struct DefinitionLookups_eventcombatantAttributeValues_Parms
	{
		TArray<FGameplayAttribute> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefinitionLookups.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function combatantAttributeValues constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function combatantAttributeValues constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function combatantAttributeValues Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefinitionLookups_eventcombatantAttributeValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::PropPointers) < 2048);
// ********** End Function combatantAttributeValues Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDefinitionLookups, nullptr, "combatantAttributeValues", 	Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::DefinitionLookups_eventcombatantAttributeValues_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::DefinitionLookups_eventcombatantAttributeValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDefinitionLookups::execcombatantAttributeValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAttribute>*)Z_Param__Result=P_THIS->combatantAttributeValues();
	P_NATIVE_END;
}
// ********** End Class UDefinitionLookups Function combatantAttributeValues ***********************

// ********** Begin Class UDefinitionLookups Function getCombatantAttributeByName ******************
struct Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics
{
	struct DefinitionLookups_eventgetCombatantAttributeByName_Parms
	{
		FName name;
		FGameplayAttribute ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefinitionLookups.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function getCombatantAttributeByName constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getCombatantAttributeByName constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getCombatantAttributeByName Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefinitionLookups_eventgetCombatantAttributeByName_Parms, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefinitionLookups_eventgetCombatantAttributeByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 4237305057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::PropPointers) < 2048);
// ********** End Function getCombatantAttributeByName Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDefinitionLookups, nullptr, "getCombatantAttributeByName", 	Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::DefinitionLookups_eventgetCombatantAttributeByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::DefinitionLookups_eventgetCombatantAttributeByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDefinitionLookups::execgetCombatantAttributeByName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAttribute*)Z_Param__Result=P_THIS->getCombatantAttributeByName(Z_Param_Out_name);
	P_NATIVE_END;
}
// ********** End Class UDefinitionLookups Function getCombatantAttributeByName ********************

// ********** Begin Class UDefinitionLookups Function getNameByCombatantAttribute ******************
struct Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics
{
	struct DefinitionLookups_eventgetNameByCombatantAttribute_Parms
	{
		FGameplayAttribute attribute;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefinitionLookups.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function getNameByCombatantAttribute constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_attribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function getNameByCombatantAttribute constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function getNameByCombatantAttribute Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::NewProp_attribute = { "attribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefinitionLookups_eventgetNameByCombatantAttribute_Parms, attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attribute_MetaData), NewProp_attribute_MetaData) }; // 4237305057
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefinitionLookups_eventgetNameByCombatantAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::NewProp_attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::PropPointers) < 2048);
// ********** End Function getNameByCombatantAttribute Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDefinitionLookups, nullptr, "getNameByCombatantAttribute", 	Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::DefinitionLookups_eventgetNameByCombatantAttribute_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::DefinitionLookups_eventgetNameByCombatantAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDefinitionLookups::execgetNameByCombatantAttribute)
{
	P_GET_STRUCT_REF(FGameplayAttribute,Z_Param_Out_attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->getNameByCombatantAttribute(Z_Param_Out_attribute);
	P_NATIVE_END;
}
// ********** End Class UDefinitionLookups Function getNameByCombatantAttribute ********************

// ********** Begin Class UDefinitionLookups *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UDefinitionLookups;
UClass* UDefinitionLookups::GetPrivateStaticClass()
{
	using TClass = UDefinitionLookups;
	if (!Z_Registration_Info_UClass_UDefinitionLookups.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DefinitionLookups"),
			Z_Registration_Info_UClass_UDefinitionLookups.InnerSingleton,
			StaticRegisterNativesUDefinitionLookups,
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
	return Z_Registration_Info_UClass_UDefinitionLookups.InnerSingleton;
}
UClass* Z_Construct_UClass_UDefinitionLookups_NoRegister()
{
	return UDefinitionLookups::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDefinitionLookups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DefinitionLookups.h" },
		{ "ModuleRelativePath", "DefinitionLookups.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDefinitionLookups constinit property declarations ***********************
// ********** End Class UDefinitionLookups constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("combatantAttributeKeys"), .Pointer = &UDefinitionLookups::execcombatantAttributeKeys },
		{ .NameUTF8 = UTF8TEXT("combatantAttributeValues"), .Pointer = &UDefinitionLookups::execcombatantAttributeValues },
		{ .NameUTF8 = UTF8TEXT("getCombatantAttributeByName"), .Pointer = &UDefinitionLookups::execgetCombatantAttributeByName },
		{ .NameUTF8 = UTF8TEXT("getNameByCombatantAttribute"), .Pointer = &UDefinitionLookups::execgetNameByCombatantAttribute },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDefinitionLookups_combatantAttributeKeys, "combatantAttributeKeys" }, // 922816713
		{ &Z_Construct_UFunction_UDefinitionLookups_combatantAttributeValues, "combatantAttributeValues" }, // 4087048034
		{ &Z_Construct_UFunction_UDefinitionLookups_getCombatantAttributeByName, "getCombatantAttributeByName" }, // 3816231682
		{ &Z_Construct_UFunction_UDefinitionLookups_getNameByCombatantAttribute, "getNameByCombatantAttribute" }, // 3262584636
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefinitionLookups>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UDefinitionLookups_Statics
UObject* (*const Z_Construct_UClass_UDefinitionLookups_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefinitionLookups_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefinitionLookups_Statics::ClassParams = {
	&UDefinitionLookups::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefinitionLookups_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefinitionLookups_Statics::Class_MetaDataParams)
};
void UDefinitionLookups::StaticRegisterNativesUDefinitionLookups()
{
	UClass* Class = UDefinitionLookups::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UDefinitionLookups_Statics::Funcs));
}
UClass* Z_Construct_UClass_UDefinitionLookups()
{
	if (!Z_Registration_Info_UClass_UDefinitionLookups.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefinitionLookups.OuterSingleton, Z_Construct_UClass_UDefinitionLookups_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDefinitionLookups.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDefinitionLookups);
UDefinitionLookups::~UDefinitionLookups() {}
// ********** End Class UDefinitionLookups *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DefinitionLookups_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDefinitionLookups, UDefinitionLookups::StaticClass, TEXT("UDefinitionLookups"), &Z_Registration_Info_UClass_UDefinitionLookups, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefinitionLookups), 1269589016U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DefinitionLookups_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DefinitionLookups_h__Script_i_love_vampires_2_3047699232{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DefinitionLookups_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_DefinitionLookups_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
