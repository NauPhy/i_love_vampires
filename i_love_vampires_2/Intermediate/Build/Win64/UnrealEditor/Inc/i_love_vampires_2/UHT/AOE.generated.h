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
class APawn;
class UPrimitiveComponent;
struct FAOETemplate;
struct FEffectStruct;
struct FHitResult;

// ********** Begin Class AAOE *********************************************************************
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execinitialise_AAOE);


struct Z_Construct_UClass_AAOE_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AAOE_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAOE(); \
	friend struct ::Z_Construct_UClass_AAOE_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_AAOE_NoRegister(); \
public: \
	DECLARE_CLASS2(AAOE, AAttackActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_AAOE_NoRegister) \
	DECLARE_SERIALIZER(AAOE)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAOE(AAOE&&) = delete; \
	AAOE(const AAOE&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAOE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAOE); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAOE) \
	NO_API virtual ~AAOE();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_10_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAOE;

// ********** End Class AAOE ***********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_AOE_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
