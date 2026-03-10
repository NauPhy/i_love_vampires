#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetRefs.generated.h"
class UInputMappingContext;
struct FWeaponTemplate;
struct FWeaponTemplate_Attr;
struct FProjectileTemplate;
struct FProjectileTemplate_Attr;
struct FAOETemplate;
struct FAOETemplate_Attr;
struct FCombatantTemplate;
struct FCombatantTemplate_Attr;

UCLASS()
class I_LOVE_VAMPIRES_2_API UAssetRefs : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AssetRefs")
	UInputMappingContext* _keyboardInputMappingContext = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _weaponTable = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _weaponTable_Attr = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _projectileTable = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _projectileTable_Attr = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _AOETable = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _AOETable_Attr = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _combatantTable = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _combatantTable_Attr = nullptr;


	UAssetRefs() = default;
	const UInputMappingContext* getKeyboardContext() const;
	const FWeaponTemplate* getWeaponTemplate(FName ID) const;
	const FWeaponTemplate_Attr* getWeaponTemplate_Attr(FName ID) const;
	const FProjectileTemplate* getProjectileTemplate(FName ID) const;
	const FProjectileTemplate_Attr* getProjectileTemplate_Attr(FName ID) const;
	const FAOETemplate* getAOETemplate(FName ID) const;
	const FAOETemplate_Attr* getAOETemplate_Attr(FName ID) const;
	const FCombatantTemplate* getCombatantTemplate(FName ID) const;
	const FCombatantTemplate_Attr* getCombatantTemplate_Attr(FName ID) const;
};