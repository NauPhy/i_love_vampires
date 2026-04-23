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
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


struct Z_Construct_UClass_AAOE_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAOE(); \
	friend struct ::Z_Construct_UClass_AAOE_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_AAOE_NoRegister(); \
public: \
	DECLARE_CLASS2(AAOE, AAttackActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_AAOE_NoRegister) \
	DECLARE_SERIALIZER(AAOE)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAOE(AAOE&&) = delete; \
	AAOE(const AAOE&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOE); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAOE) \
	NO_API virtual ~AAOE();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_21_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAOE;

// ********** End Class AAOE ***********************************************************************

// ********** Begin Class UAOEConfig ***************************************************************
struct Z_Construct_UClass_UAOEConfig_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEConfig_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOEConfig(); \
	friend struct ::Z_Construct_UClass_UAOEConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOEConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOEConfig, UBaseConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOEConfig_NoRegister) \
	DECLARE_SERIALIZER(UAOEConfig)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOEConfig(UAOEConfig&&) = delete; \
	UAOEConfig(const UAOEConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOEConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOEConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOEConfig) \
	NO_API virtual ~UAOEConfig();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_66_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_69_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOEConfig;

// ********** End Class UAOEConfig *****************************************************************

// ********** Begin Class UAOEAttributeData ********************************************************
struct Z_Construct_UClass_UAOEAttributeData_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOEAttributeData_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOEAttributeData(); \
	friend struct ::Z_Construct_UClass_UAOEAttributeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOEAttributeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOEAttributeData, UBaseAttributeData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOEAttributeData_NoRegister) \
	DECLARE_SERIALIZER(UAOEAttributeData)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAOEAttributeData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOEAttributeData(UAOEAttributeData&&) = delete; \
	UAOEAttributeData(const UAOEAttributeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOEAttributeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOEAttributeData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOEAttributeData) \
	NO_API virtual ~UAOEAttributeData();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_86_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_89_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOEAttributeData;

// ********** End Class UAOEAttributeData **********************************************************

// ********** Begin Class UAOELevel ****************************************************************
struct Z_Construct_UClass_UAOELevel_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOELevel_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOELevel(); \
	friend struct ::Z_Construct_UClass_UAOELevel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOELevel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOELevel, UAttackLevel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOELevel_NoRegister) \
	DECLARE_SERIALIZER(UAOELevel)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_180_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOELevel(UAOELevel&&) = delete; \
	UAOELevel(const UAOELevel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOELevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOELevel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOELevel) \
	NO_API virtual ~UAOELevel();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_178_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_180_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOELevel;

// ********** End Class UAOELevel ******************************************************************

// ********** Begin Class UAOETemplate *************************************************************
struct Z_Construct_UClass_UAOETemplate_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UAOETemplate_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAOETemplate(); \
	friend struct ::Z_Construct_UClass_UAOETemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UAOETemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UAOETemplate, UAttackTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UAOETemplate_NoRegister) \
	DECLARE_SERIALIZER(UAOETemplate)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_198_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAOETemplate(UAOETemplate&&) = delete; \
	UAOETemplate(const UAOETemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAOETemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAOETemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAOETemplate) \
	NO_API virtual ~UAOETemplate();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_196_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_198_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAOETemplate;

// ********** End Class UAOETemplate ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
