// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/Bullet.h"
#include "GameplayEffectTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBullet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAttackActor();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ABullet();
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ABullet_NoRegister();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABullet Function initialise_ABullet **************************************
struct Z_Construct_UFunction_ABullet_initialise_ABullet_Statics
{
	struct Bullet_eventinitialise_ABullet_Parms
	{
		APawn* pawnRef;
		FGameplayEffectSpecHandle effect;
		float directionX;
		float directionZ;
		int32 shape;
		float radius;
		bool isHoming;
		float speed;
		float range;
		float pierce;
		float bounce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is including attribute mods\n" },
#endif
		{ "ModuleRelativePath", "Bullet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is including attribute mods" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_effect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function initialise_ABullet constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_effect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_directionX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_directionZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static void NewProp_isHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isHoming;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bounce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function initialise_ABullet constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function initialise_ABullet Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_pawnRef = { "pawnRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, pawnRef), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_effect = { "effect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, effect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_effect_MetaData), NewProp_effect_MetaData) }; // 2221987375
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, directionX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, directionZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, shape), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_isHoming_SetBit(void* Obj)
{
	((Bullet_eventinitialise_ABullet_Parms*)Obj)->isHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_isHoming = { "isHoming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Bullet_eventinitialise_ABullet_Parms), &Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_isHoming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, range), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_pierce = { "pierce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, pierce), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_bounce = { "bounce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bullet_eventinitialise_ABullet_Parms, bounce), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_pawnRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_directionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_directionZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_isHoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_pierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::NewProp_bounce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::PropPointers) < 2048);
// ********** End Function initialise_ABullet Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABullet, nullptr, "initialise_ABullet", 	Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::Bullet_eventinitialise_ABullet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::Bullet_eventinitialise_ABullet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullet_initialise_ABullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullet_initialise_ABullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullet::execinitialise_ABullet)
{
	P_GET_OBJECT(APawn,Z_Param_pawnRef);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_effect);
	P_GET_PROPERTY(FFloatProperty,Z_Param_directionX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_directionZ);
	P_GET_PROPERTY(FIntProperty,Z_Param_shape);
	P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
	P_GET_UBOOL(Z_Param_isHoming);
	P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_range);
	P_GET_PROPERTY(FFloatProperty,Z_Param_pierce);
	P_GET_PROPERTY(FFloatProperty,Z_Param_bounce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->initialise_ABullet(Z_Param_pawnRef,Z_Param_Out_effect,Z_Param_directionX,Z_Param_directionZ,Z_Param_shape,Z_Param_radius,Z_Param_isHoming,Z_Param_speed,Z_Param_range,Z_Param_pierce,Z_Param_bounce);
	P_NATIVE_END;
}
// ********** End Class ABullet Function initialise_ABullet ****************************************

// ********** Begin Class ABullet ******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABullet;
UClass* ABullet::GetPrivateStaticClass()
{
	using TClass = ABullet;
	if (!Z_Registration_Info_UClass_ABullet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Bullet"),
			Z_Registration_Info_UClass_ABullet.InnerSingleton,
			StaticRegisterNativesABullet,
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
	return Z_Registration_Info_UClass_ABullet.InnerSingleton;
}
UClass* Z_Construct_UClass_ABullet_NoRegister()
{
	return ABullet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABullet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bullet.h" },
		{ "ModuleRelativePath", "Bullet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABullet constinit property declarations **********************************
// ********** End Class ABullet constinit property declarations ************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("initialise_ABullet"), .Pointer = &ABullet::execinitialise_ABullet },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullet_initialise_ABullet, "initialise_ABullet" }, // 2185456423
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABullet_Statics
UObject* (*const Z_Construct_UClass_ABullet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAttackActor,
	(UObject* (*)())Z_Construct_UPackage__Script_i_love_vampires_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullet_Statics::ClassParams = {
	&ABullet::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullet_Statics::Class_MetaDataParams)
};
void ABullet::StaticRegisterNativesABullet()
{
	UClass* Class = ABullet::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ABullet_Statics::Funcs));
}
UClass* Z_Construct_UClass_ABullet()
{
	if (!Z_Registration_Info_UClass_ABullet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullet.OuterSingleton, Z_Construct_UClass_ABullet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABullet);
ABullet::~ABullet() {}
// ********** End Class ABullet ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Bullet_h__Script_i_love_vampires_2_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullet, ABullet::StaticClass, TEXT("ABullet"), &Z_Registration_Info_UClass_ABullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullet), 368870715U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Bullet_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Bullet_h__Script_i_love_vampires_2_2872529978{
	TEXT("/Script/i_love_vampires_2"),
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Bullet_h__Script_i_love_vampires_2_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Bullet_h__Script_i_love_vampires_2_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
