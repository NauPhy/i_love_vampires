// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "i_love_vampires_2/SpriteEnum.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSpriteEnum() {}

// ********** Begin Cross Module References ********************************************************
I_LOVE_VAMPIRES_2_API UEnum* Z_Construct_UEnum_i_love_vampires_2_ESprite();
UPackage* Z_Construct_UPackage__Script_i_love_vampires_2();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESprite *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESprite;
static UEnum* ESprite_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESprite.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESprite.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_i_love_vampires_2_ESprite, (UObject*)Z_Construct_UPackage__Script_i_love_vampires_2(), TEXT("ESprite"));
	}
	return Z_Registration_Info_UEnum_ESprite.OuterSingleton;
}
template<> I_LOVE_VAMPIRES_2_NON_ATTRIBUTED_API UEnum* StaticEnum<ESprite>()
{
	return ESprite_StaticEnum();
}
struct Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SpriteEnum.h" },
		{ "testBullet.Comment", "//Projectiles\n" },
		{ "testBullet.DisplayName", "testBullet" },
		{ "testBullet.Name", "ESprite::testBullet" },
		{ "testBullet.ToolTip", "Projectiles" },
		{ "testEnemy.Comment", "//Enemies\n" },
		{ "testEnemy.DisplayName", "testEnemy" },
		{ "testEnemy.Name", "ESprite::testEnemy" },
		{ "testEnemy.ToolTip", "Enemies" },
		{ "testPlayer.Comment", "//Combatants\n//Players\n" },
		{ "testPlayer.DisplayName", "testPlayer" },
		{ "testPlayer.Name", "ESprite::testPlayer" },
		{ "testPlayer.ToolTip", "Combatants\nPlayers" },
		{ "testShard.Comment", "//Other\n" },
		{ "testShard.DisplayName", "testShard" },
		{ "testShard.Name", "ESprite::testShard" },
		{ "testShard.ToolTip", "Other" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESprite::testPlayer", (int64)ESprite::testPlayer },
		{ "ESprite::testEnemy", (int64)ESprite::testEnemy },
		{ "ESprite::testBullet", (int64)ESprite::testBullet },
		{ "ESprite::testShard", (int64)ESprite::testShard },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_i_love_vampires_2,
	nullptr,
	"ESprite",
	"ESprite",
	Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics::Enum_MetaDataParams), Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_i_love_vampires_2_ESprite()
{
	if (!Z_Registration_Info_UEnum_ESprite.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESprite.InnerSingleton, Z_Construct_UEnum_i_love_vampires_2_ESprite_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESprite.InnerSingleton;
}
// ********** End Enum ESprite *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteEnum_h__Script_i_love_vampires_2_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESprite_StaticEnum, TEXT("ESprite"), &Z_Registration_Info_UEnum_ESprite, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3639681666U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteEnum_h__Script_i_love_vampires_2_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteEnum_h__Script_i_love_vampires_2_2447002681{
	TEXT("/Script/i_love_vampires_2"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteEnum_h__Script_i_love_vampires_2_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Byron_Documents_GitHub_i_love_vampires_i_love_vampires_2_Source_i_love_vampires_2_SpriteEnum_h__Script_i_love_vampires_2_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
