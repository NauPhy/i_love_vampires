// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatGameModeBase.h"

#ifdef I_LOVE_VAMPIRES_2_CombatGameModeBase_generated_h
#error "CombatGameModeBase.generated.h already included, missing '#pragma once' in CombatGameModeBase.h"
#endif
#define I_LOVE_VAMPIRES_2_CombatGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCombatantManager;
class UEnemySpawner;
class USpriteSorter;

// ********** Begin Class ACombatGameModeBase ******************************************************
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execonPlayerDeath); \
	DECLARE_FUNCTION(execsetGameReady); \
	DECLARE_FUNCTION(execgetSpriteSorter); \
	DECLARE_FUNCTION(execgetCombatantManager); \
	DECLARE_FUNCTION(execgetEnemySpawner); \
	DECLARE_FUNCTION(execisReady);


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ACombatGameModeBase_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_ACombatGameModeBase_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatGameModeBase(); \
	friend struct ::Z_Construct_UClass_ACombatGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_ACombatGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_ACombatGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(ACombatGameModeBase)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatGameModeBase(ACombatGameModeBase&&) = delete; \
	ACombatGameModeBase(const ACombatGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatGameModeBase) \
	NO_API virtual ~ACombatGameModeBase();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_8_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_CALLBACK_WRAPPERS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatGameModeBase;

// ********** End Class ACombatGameModeBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_CombatGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
