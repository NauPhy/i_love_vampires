// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AOE.h"

#ifdef I_LOVE_VAMPIRES_2_AOE_generated_h
#error "AOE.generated.h already included, missing '#pragma once' in AOE.h"
#endif
#define I_LOVE_VAMPIRES_2_AOE_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AAOE *********************************************************************
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


struct Z_Construct_UClass_AAOE_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAOE(); \
	friend struct ::Z_Construct_UClass_AAOE_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_AAOE_NoRegister(); \
public: \
	DECLARE_CLASS2(AAOE, AAttackActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_AAOE_NoRegister) \
	DECLARE_SERIALIZER(AAOE)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAOE(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAOE(AAOE&&) = delete; \
	AAOE(const AAOE&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOE); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAOE) \
	NO_API virtual ~AAOE();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_14_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAOE;

// ********** End Class AAOE ***********************************************************************

// ********** Begin Class UAOEConfig ***************************************************************
struct Z_Construct_UClass_UAOEConfig_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOEConfig(); \
	friend struct ::Z_Construct_UClass_UAOEConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOEConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOEConfig, UBaseConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOEConfig_NoRegister) \
	DECLARE_SERIALIZER(UAOEConfig)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_70_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOEConfig(UAOEConfig&&) = delete; \
	UAOEConfig(const UAOEConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOEConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOEConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOEConfig) \
	NO_API virtual ~UAOEConfig();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_67_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_70_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOEConfig;

// ********** End Class UAOEConfig *****************************************************************

// ********** Begin Class UAOEAttributes ***********************************************************
struct Z_Construct_UClass_UAOEAttributes_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributes_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOEAttributes(); \
	friend struct ::Z_Construct_UClass_UAOEAttributes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOEAttributes_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOEAttributes, UBaseAttributes, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOEAttributes_NoRegister) \
	DECLARE_SERIALIZER(UAOEAttributes)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOEAttributes(UAOEAttributes&&) = delete; \
	UAOEAttributes(const UAOEAttributes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOEAttributes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOEAttributes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOEAttributes) \
	NO_API virtual ~UAOEAttributes();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_79_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_82_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOEAttributes;

// ********** End Class UAOEAttributes *************************************************************

// ********** Begin Class UAOEComponent ************************************************************
struct Z_Construct_UClass_UAOEComponent_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEComponent_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOEComponent(); \
	friend struct ::Z_Construct_UClass_UAOEComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOEComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOEComponent, UBaseAttributeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOEComponent_NoRegister) \
	DECLARE_SERIALIZER(UAOEComponent)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAOEComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOEComponent(UAOEComponent&&) = delete; \
	UAOEComponent(const UAOEComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOEComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOEComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOEComponent) \
	NO_API virtual ~UAOEComponent();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_98_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_101_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOEComponent;

// ********** End Class UAOEComponent **************************************************************

// ********** Begin Class AAOEFactory **************************************************************
struct Z_Construct_UClass_AAOEFactory_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOEFactory_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAOEFactory(); \
	friend struct ::Z_Construct_UClass_AAOEFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_AAOEFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(AAOEFactory, AAttackFactory, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_AAOEFactory_NoRegister) \
	DECLARE_SERIALIZER(AAOEFactory)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAOEFactory(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAOEFactory(AAOEFactory&&) = delete; \
	AAOEFactory(const AAOEFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOEFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOEFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAOEFactory) \
	NO_API virtual ~AAOEFactory();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_111_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_114_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAOEFactory;

// ********** End Class AAOEFactory ****************************************************************

// ********** Begin Class UAOEFactoryTemplate ******************************************************
struct Z_Construct_UClass_UAOEFactoryTemplate_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEFactoryTemplate_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOEFactoryTemplate(); \
	friend struct ::Z_Construct_UClass_UAOEFactoryTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOEFactoryTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOEFactoryTemplate, UAttackFactoryTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOEFactoryTemplate_NoRegister) \
	DECLARE_SERIALIZER(UAOEFactoryTemplate)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_135_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOEFactoryTemplate(UAOEFactoryTemplate&&) = delete; \
	UAOEFactoryTemplate(const UAOEFactoryTemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOEFactoryTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOEFactoryTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOEFactoryTemplate) \
	NO_API virtual ~UAOEFactoryTemplate();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_133_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_135_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOEFactoryTemplate;

// ********** End Class UAOEFactoryTemplate ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
