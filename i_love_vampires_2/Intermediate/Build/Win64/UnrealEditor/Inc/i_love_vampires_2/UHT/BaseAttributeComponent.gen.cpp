// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/BaseAttributeComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBaseAttributeComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeComponent();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributeComponent_NoRegister();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UBaseAttributes_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseAttributeComponent **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseAttributeComponent;
UClass* UBaseAttributeComponent::GetPrivateStaticClass()
{
	using TClass = UBaseAttributeComponent;
	if (!Z_Registration_Info_UClass_UBaseAttributeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BaseAttributeComponent"),
			Z_Registration_Info_UClass_UBaseAttributeComponent.InnerSingleton,
			StaticRegisterNativesUBaseAttributeComponent,
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
	return Z_Registration_Info_UClass_UBaseAttributeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseAttributeComponent_NoRegister()
{
	return UBaseAttributeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseAttributeComponent.h" },
		{ "ModuleRelativePath", "BaseAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__final_MetaData[] = {
		{ "ModuleRelativePath", "BaseAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__base_MetaData[] = {
		{ "ModuleRelativePath", "BaseAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__offsets_MetaData[] = {
		{ "ModuleRelativePath", "BaseAttributeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBaseAttributeComponent constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__final;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__base;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__offsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBaseAttributeComponent constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBaseAttributeComponent_Statics

// ********** Begin Class UBaseAttributeComponent Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAttributeComponent_Statics::NewProp__final = { "_final", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeComponent, _final), Z_Construct_UClass_UBaseAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__final_MetaData), NewProp__final_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAttributeComponent_Statics::NewProp__base = { "_base", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeComponent, _base), Z_Construct_UClass_UBaseAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__base_MetaData), NewProp__base_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAttributeComponent_Statics::NewProp__offsets = { "_offsets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAttributeComponent, _offsets), Z_Construct_UClass_UBaseAttributes_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__offsets_MetaData), NewProp__offsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeComponent_Statics::NewProp__final,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeComponent_Statics::NewProp__base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAttributeComponent_Statics::NewProp__offsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeComponent_Statics::PropPointers) < 2048);
// ********** End Class UBaseAttributeComponent Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UBaseAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeComponent_Statics::ClassParams = {
	&UBaseAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributeComponent_Statics::Class_MetaDataParams)
};
void UBaseAttributeComponent::StaticRegisterNativesUBaseAttributeComponent()
{
}
UClass* Z_Construct_UClass_UBaseAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UBaseAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeComponent.OuterSingleton, Z_Construct_UClass_UBaseAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributeComponent.OuterSingleton;
}
UBaseAttributeComponent::UBaseAttributeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBaseAttributeComponent);
UBaseAttributeComponent::~UBaseAttributeComponent() {}
// ********** End Class UBaseAttributeComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeComponent_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeComponent, UBaseAttributeComponent::StaticClass, TEXT("UBaseAttributeComponent"), &Z_Registration_Info_UClass_UBaseAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeComponent), 4028953201U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeComponent_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeComponent_h__Script_i_love_vampires_2_2415100019{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeComponent_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_BaseAttributeComponent_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
