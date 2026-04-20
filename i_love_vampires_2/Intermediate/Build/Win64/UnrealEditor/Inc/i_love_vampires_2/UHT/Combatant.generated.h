// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combatant.h"

#ifdef I_LOVE_VAMPIRES_2_Combatant_generated_h
#error "Combatant.generated.h already included, missing '#pragma once' in Combatant.h"
#endif
#define I_LOVE_VAMPIRES_2_Combatant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCombatantPassive;
class UWeaponTemplate;

// ********** Begin Class ACombatant ***************************************************************
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execgetMaxHP); \
	DECLARE_FUNCTION(execgetHP); \
	DECLARE_FUNCTION(execgivePassive); \
	DECLARE_FUNCTION(execgiveWeapon);


struct Z_Construct_UClass_ACombatant_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatant(); \
	friend struct ::Z_Construct_UClass_ACombatant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_ACombatant_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatant, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_ACombatant_NoRegister) \
	DECLARE_SERIALIZER(ACombatant)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatant(ACombatant&&) = delete; \
	ACombatant(const ACombatant&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatant) \
	NO_API virtual ~ACombatant();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_37_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_40_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatant;

// ********** End Class ACombatant *****************************************************************

// ********** Begin Class UPassiveContainer ********************************************************
struct Z_Construct_UClass_UPassiveContainer_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UPassiveContainer_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPassiveContainer(); \
	friend struct ::Z_Construct_UClass_UPassiveContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UPassiveContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UPassiveContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UPassiveContainer_NoRegister) \
	DECLARE_SERIALIZER(UPassiveContainer)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPassiveContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPassiveContainer(UPassiveContainer&&) = delete; \
	UPassiveContainer(const UPassiveContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPassiveContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPassiveContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPassiveContainer) \
	NO_API virtual ~UPassiveContainer();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_90_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_93_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPassiveContainer;

// ********** End Class UPassiveContainer **********************************************************

// ********** Begin Class UCombatantAttributeData **************************************************
struct Z_Construct_UClass_UCombatantAttributeData_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributeData_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantAttributeData(); \
	friend struct ::Z_Construct_UClass_UCombatantAttributeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantAttributeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantAttributeData, UBaseAttributeData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantAttributeData_NoRegister) \
	DECLARE_SERIALIZER(UCombatantAttributeData)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_103_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantAttributeData(UCombatantAttributeData&&) = delete; \
	UCombatantAttributeData(const UCombatantAttributeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantAttributeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantAttributeData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatantAttributeData) \
	NO_API virtual ~UCombatantAttributeData();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_100_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_103_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantAttributeData;

// ********** End Class UCombatantAttributeData ****************************************************

// ********** Begin Class UCombatantConfig *********************************************************
struct Z_Construct_UClass_UCombatantConfig_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantConfig_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantConfig(); \
	friend struct ::Z_Construct_UClass_UCombatantConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantConfig, UBaseConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantConfig_NoRegister) \
	DECLARE_SERIALIZER(UCombatantConfig)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_250_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantConfig(UCombatantConfig&&) = delete; \
	UCombatantConfig(const UCombatantConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatantConfig) \
	NO_API virtual ~UCombatantConfig();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_247_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_250_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantConfig;

// ********** End Class UCombatantConfig ***********************************************************

// ********** Begin Class UCombatantTemplate *******************************************************
struct Z_Construct_UClass_UCombatantTemplate_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantTemplate_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_279_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantTemplate(); \
	friend struct ::Z_Construct_UClass_UCombatantTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantTemplate, UBaseTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantTemplate_NoRegister) \
	DECLARE_SERIALIZER(UCombatantTemplate)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_279_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantTemplate(UCombatantTemplate&&) = delete; \
	UCombatantTemplate(const UCombatantTemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatantTemplate) \
	NO_API virtual ~UCombatantTemplate();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_276_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_279_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_279_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_279_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantTemplate;

// ********** End Class UCombatantTemplate *********************************************************

// ********** Begin Class UCombatantPassive ********************************************************
struct Z_Construct_UClass_UCombatantPassive_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantPassive_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantPassive(); \
	friend struct ::Z_Construct_UClass_UCombatantPassive_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantPassive_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantPassive, UBaseTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantPassive_NoRegister) \
	DECLARE_SERIALIZER(UCombatantPassive)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_301_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantPassive(UCombatantPassive&&) = delete; \
	UCombatantPassive(const UCombatantPassive&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantPassive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantPassive); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatantPassive) \
	NO_API virtual ~UCombatantPassive();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_298_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_301_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantPassive;

// ********** End Class UCombatantPassive **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
