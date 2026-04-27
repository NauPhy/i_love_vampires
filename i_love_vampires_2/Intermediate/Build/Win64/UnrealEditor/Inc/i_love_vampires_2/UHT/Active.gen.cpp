// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Active.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActive() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAttackTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UWeaponTemplate_NoRegister();
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_EActivationType();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponTemplate **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponTemplate;
UClass* UWeaponTemplate::GetPrivateStaticClass()
{
	using TClass = UWeaponTemplate;
	if (!Z_Registration_Info_UClass_UWeaponTemplate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("WeaponTemplate"),
			Z_Registration_Info_UClass_UWeaponTemplate.InnerSingleton,
			StaticRegisterNativesUWeaponTemplate,
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
	return Z_Registration_Info_UClass_UWeaponTemplate.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponTemplate_NoRegister()
{
	return UWeaponTemplate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Active.h" },
		{ "ModuleRelativePath", "Active.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__startOnCooldown_MetaData[] = {
		{ "Category", "WeaponTemplate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cannot really be given a sentinel value\n" },
#endif
		{ "ModuleRelativePath", "Active.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cannot really be given a sentinel value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__warmup_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackData_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__activationType_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "Active.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__burstInterval_MetaData[] = {
		{ "Category", "WeaponTemplate" },
		{ "ModuleRelativePath", "Active.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWeaponTemplate constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp__name;
	static void NewProp__startOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__startOnCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__warmup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__attackData;
	static const UECodeGen_Private::FBytePropertyParams NewProp__activationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__activationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__burstInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWeaponTemplate constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UWeaponTemplate_Statics

// ********** Begin Class UWeaponTemplate Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__name_MetaData), NewProp__name_MetaData) };
void Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__startOnCooldown_SetBit(void* Obj)
{
	((UWeaponTemplate*)Obj)->_startOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__startOnCooldown = { "_startOnCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponTemplate), &Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__startOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__startOnCooldown_MetaData), NewProp__startOnCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__warmup = { "_warmup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _warmup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__warmup_MetaData), NewProp__warmup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData = { "_attackData", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _attackData), Z_Construct_UClass_UAttackTemplate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackData_MetaData), NewProp__attackData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__activationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__activationType = { "_activationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _activationType), Z_Construct_UEnum_i_love_vampires_2_EActivationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__activationType_MetaData), NewProp__activationType_MetaData) }; // 1498684364
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__burstInterval = { "_burstInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponTemplate, _burstInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__burstInterval_MetaData), NewProp__burstInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__startOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__warmup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__attackData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__activationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__activationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponTemplate_Statics::NewProp__burstInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers) < 2048);
// ********** End Class UWeaponTemplate Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UWeaponTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponTemplate_Statics::ClassParams = {
	&UWeaponTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponTemplate_Statics::Class_MetaDataParams)
};
void UWeaponTemplate::StaticRegisterNativesUWeaponTemplate()
{
}
UClass* Z_Construct_UClass_UWeaponTemplate()
{
	if (!Z_Registration_Info_UClass_UWeaponTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponTemplate.OuterSingleton, Z_Construct_UClass_UWeaponTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponTemplate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWeaponTemplate);
UWeaponTemplate::~UWeaponTemplate() {}
// ********** End Class UWeaponTemplate ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponTemplate, UWeaponTemplate::StaticClass, TEXT("UWeaponTemplate"), &Z_Registration_Info_UClass_UWeaponTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponTemplate), 2021767663U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_459389974{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Active_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
