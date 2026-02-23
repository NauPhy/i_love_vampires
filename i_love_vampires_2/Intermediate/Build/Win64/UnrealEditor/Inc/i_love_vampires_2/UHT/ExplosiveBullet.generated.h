// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExplosiveBullet.h"

#ifdef I_LOVE_VAMPIRES_2_ExplosiveBullet_generated_h
#error "ExplosiveBullet.generated.h already included, missing '#pragma once' in ExplosiveBullet.h"
#endif
#define I_LOVE_VAMPIRES_2_ExplosiveBullet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAOE;
class APawn;
struct FAOETemplate;
struct FGameplayEffectSpecHandle;
struct FProjectileTemplate;

// ********** Begin Class AExplosiveBullet *********************************************************
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execfinishExplosionInitialisation); \
	DECLARE_FUNCTION(execgetExplosionRadius); \
	DECLARE_FUNCTION(execinitialise_AExplosiveBullet);


struct Z_Construct_UClass_AExplosiveBullet_Statics;
I_LOVE_VAMPIRES_2_API UClass* Z_Construct_UClass_AExplosiveBullet_NoRegister();

#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveBullet(); \
	friend struct ::Z_Construct_UClass_AExplosiveBullet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend I_LOVE_VAMPIRES_2_API UClass* ::Z_Construct_UClass_AExplosiveBullet_NoRegister(); \
public: \
	DECLARE_CLASS2(AExplosiveBullet, ABullet, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/i_love_vampires_2"), Z_Construct_UClass_AExplosiveBullet_NoRegister) \
	DECLARE_SERIALIZER(AExplosiveBullet)


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExplosiveBullet(AExplosiveBullet&&) = delete; \
	AExplosiveBullet(const AExplosiveBullet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveBullet) \
	NO_API virtual ~AExplosiveBullet();


#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_8_PROLOG
#define FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExplosiveBullet;

// ********** End Class AExplosiveBullet ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_ExplosiveBullet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
