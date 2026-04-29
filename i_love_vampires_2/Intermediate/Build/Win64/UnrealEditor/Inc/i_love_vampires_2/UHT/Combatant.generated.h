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
class UCombatantTemplate;
class UPassiveData;
class UWeaponTemplate;

// ********** Begin Class ACombatant ***************************************************************
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execgetPassiveLevel); \
	DECLARE_FUNCTION(execgetWeaponLevel); \
	DECLARE_FUNCTION(execupgradePassive); \
	DECLARE_FUNCTION(execgivePassive); \
	DECLARE_FUNCTION(execupgradeWeapon); \
	DECLARE_FUNCTION(execgiveWeapon); \
	DECLARE_FUNCTION(execgetAllPassives); \
	DECLARE_FUNCTION(execgetAllWeapons); \
	DECLARE_FUNCTION(execgetMaxedWeapons); \
	DECLARE_FUNCTION(execgetUpgradablePassives); \
	DECLARE_FUNCTION(execgetUpgradableWeapons); \
	DECLARE_FUNCTION(execcanUpgradePassive); \
	DECLARE_FUNCTION(execcanGivePassive); \
	DECLARE_FUNCTION(execcanUpgradeWeapon); \
	DECLARE_FUNCTION(execcanGiveWeapon); \
	DECLARE_FUNCTION(execgetMaxHP); \
	DECLARE_FUNCTION(execgetHP); \
	DECLARE_FUNCTION(execinitialise_ACombatant);


struct Z_Construct_UClass_ACombatant_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatant_NoRegister();

#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatant(); \
	friend struct ::Z_Construct_UClass_ACombatant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_ACombatant_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatant, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_ACombatant_NoRegister) \
	DECLARE_SERIALIZER(ACombatant)


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatant(ACombatant&&) = delete; \
	ACombatant(const ACombatant&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatant) \
	NO_API virtual ~ACombatant();


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_38_PROLOG
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatant;

// ********** End Class ACombatant *****************************************************************

// ********** Begin Class UCombatantAttributeData **************************************************
struct Z_Construct_UClass_UCombatantAttributeData_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantAttributeData_NoRegister();

#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantAttributeData(); \
	friend struct ::Z_Construct_UClass_UCombatantAttributeData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantAttributeData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantAttributeData, UBaseAttributeData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantAttributeData_NoRegister) \
	DECLARE_SERIALIZER(UCombatantAttributeData)


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_125_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantAttributeData(UCombatantAttributeData&&) = delete; \
	UCombatantAttributeData(const UCombatantAttributeData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantAttributeData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantAttributeData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatantAttributeData) \
	NO_API virtual ~UCombatantAttributeData();


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_122_PROLOG
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_125_INCLASS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantAttributeData;

// ********** End Class UCombatantAttributeData ****************************************************

// ********** Begin Class UCombatantConfig *********************************************************
struct Z_Construct_UClass_UCombatantConfig_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantConfig_NoRegister();

#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantConfig(); \
	friend struct ::Z_Construct_UClass_UCombatantConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantConfig, UBaseConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantConfig_NoRegister) \
	DECLARE_SERIALIZER(UCombatantConfig)


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_277_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantConfig(UCombatantConfig&&) = delete; \
	UCombatantConfig(const UCombatantConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatantConfig) \
	NO_API virtual ~UCombatantConfig();


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_274_PROLOG
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_277_INCLASS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantConfig;

// ********** End Class UCombatantConfig ***********************************************************

// ********** Begin Class UCombatantTemplate *******************************************************
struct Z_Construct_UClass_UCombatantTemplate_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantTemplate_NoRegister();

#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_307_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantTemplate(); \
	friend struct ::Z_Construct_UClass_UCombatantTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantTemplate, UBaseTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantTemplate_NoRegister) \
	DECLARE_SERIALIZER(UCombatantTemplate)


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_307_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantTemplate(UCombatantTemplate&&) = delete; \
	UCombatantTemplate(const UCombatantTemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantTemplate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatantTemplate) \
	NO_API virtual ~UCombatantTemplate();


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_304_PROLOG
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_307_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_307_INCLASS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_307_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantTemplate;

// ********** End Class UCombatantTemplate *********************************************************

// ********** Begin Class UPassiveLevelData ********************************************************
struct Z_Construct_UClass_UPassiveLevelData_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UPassiveLevelData_NoRegister();

#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_331_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPassiveLevelData(); \
	friend struct ::Z_Construct_UClass_UPassiveLevelData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UPassiveLevelData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPassiveLevelData, UBaseLevelContainer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UPassiveLevelData_NoRegister) \
	DECLARE_SERIALIZER(UPassiveLevelData)


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_331_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPassiveLevelData(UPassiveLevelData&&) = delete; \
	UPassiveLevelData(const UPassiveLevelData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPassiveLevelData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPassiveLevelData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPassiveLevelData) \
	NO_API virtual ~UPassiveLevelData();


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_328_PROLOG
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_331_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_331_INCLASS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_331_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPassiveLevelData;

// ********** End Class UPassiveLevelData **********************************************************

// ********** Begin Class UPassiveData *************************************************************
struct Z_Construct_UClass_UPassiveData_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UPassiveData_NoRegister();

#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_358_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPassiveData(); \
	friend struct ::Z_Construct_UClass_UPassiveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UPassiveData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPassiveData, UBaseTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UPassiveData_NoRegister) \
	DECLARE_SERIALIZER(UPassiveData)


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_358_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPassiveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPassiveData(UPassiveData&&) = delete; \
	UPassiveData(const UPassiveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPassiveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPassiveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPassiveData) \
	NO_API virtual ~UPassiveData();


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_355_PROLOG
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_358_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_358_INCLASS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h_358_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPassiveData;

// ********** End Class UPassiveData ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_Combatant_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
