#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatantData.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FCombatantData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FCombatantData() :
		name("Combatant"),
		maxHP(1.f),
		damageReduction_flat(0.f),
		damageReduction_percent(0.f),
		healthRegen_flat(0.f),
		healthRegen_percent(0.f),
		critChance(0.f),
		critMultiplier(2.f),
		attackSpeed(1.f),
		bonusBounces(0.f),
		bonusPierce(0.f),
		bonusProjectiles(0.f),
		projectileSpeed(1.f),
		projectileSize(1.f),
		AOESize(1.f),
		movementSpeed(1.f),
		range(1.f),
		contactDamage(0.f),
		currentHP(1.f)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Non-attribute")
	FString name;
	//TSoftObjectPtr<UTexture2D> sprite;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Defense")
	float maxHP;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Defense")
	float damageReduction_flat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Defense")
	float damageReduction_percent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Defense")
	float healthRegen_flat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Defense")
	float healthRegen_percent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Offense")
	float critChance;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Offense")
	float critMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Offense")
	float attackSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float bonusBounces;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float bonusPierce;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float bonusProjectiles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float projectileSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	float projectileSize;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AOE")
	float AOESize;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Utility")
	float movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Utility")
	float range;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc")
	float contactDamage;
	// Exactly as mutable as the others in practice
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Misc")
	float currentHP;
};
