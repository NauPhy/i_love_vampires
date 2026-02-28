// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatantManager.h"

#ifdef I_LOVE_VAMPIRES_2_CombatantManager_generated_h
#error "CombatantManager.generated.h already included, missing '#pragma once' in CombatantManager.h"
#endif
#define I_LOVE_VAMPIRES_2_CombatantManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACombatant;

// ********** Begin Class UCombatantManager ********************************************************
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execinflictBurn); \
	DECLARE_FUNCTION(execgetEnemyCount); \
	DECLARE_FUNCTION(execremoveFromRegister); \
	DECLARE_FUNCTION(execregisterEnemy); \
	DECLARE_FUNCTION(execsetPlayerRef);


struct Z_Construct_UClass_UCombatantManager_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_UCombatantManager_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatantManager(); \
	friend struct ::Z_Construct_UClass_UCombatantManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_UCombatantManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UCombatantManager, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_UCombatantManager_NoRegister) \
	DECLARE_SERIALIZER(UCombatantManager)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCombatantManager(UCombatantManager&&) = delete; \
	UCombatantManager(const UCombatantManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatantManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatantManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatantManager) \
	NO_API virtual ~UCombatantManager();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_16_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCombatantManager;

// ********** End Class UCombatantManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatantManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
