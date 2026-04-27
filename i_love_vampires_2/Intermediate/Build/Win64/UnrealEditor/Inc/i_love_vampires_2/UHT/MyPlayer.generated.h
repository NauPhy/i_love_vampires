// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayer.h"

#ifdef I_LOVE_VAMPIRES_2_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define I_LOVE_VAMPIRES_2_MyPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMyPlayer;
class APawn;
class UCombatantTemplate;
class UObject;

// ********** Begin Delegate FOnPlayerLevelUp ******************************************************
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_55_DELEGATE \
static void FOnPlayerLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerLevelUp);


// ********** End Delegate FOnPlayerLevelUp ********************************************************

// ********** Begin Class AMyPlayer ****************************************************************
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execgetMaxExperience); \
	DECLARE_FUNCTION(execgetExperience); \
	DECLARE_FUNCTION(execfinishAMyActorDeferredSpawn); \
	DECLARE_FUNCTION(execspawnAMyActorDeferred); \
	DECLARE_FUNCTION(execinitialise_AMyPlayer); \
	DECLARE_FUNCTION(execonOverlapBegin);


struct Z_Construct_UClass_AMyPlayer_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();

#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct ::Z_Construct_UClass_AMyPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_AMyPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyPlayer, ACombatant, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_AMyPlayer_NoRegister) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyPlayer(AMyPlayer&&) = delete; \
	AMyPlayer(const AMyPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer) \
	NO_API virtual ~AMyPlayer();


#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_12_PROLOG
#define FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyPlayer;

// ********** End Class AMyPlayer ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_phyrn_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_MyPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
