#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatantTemplate_Attr.generated.h"

// additive and multiplicative indicates the effect this attribute should have on a corresponding attribute on a weapon, projectile, etc.
// there hopefully will not be any cases in which an attribute modifies two corresponding attributes differently, but if there is, I will
// specify per object.

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FCombatantTemplate_Attr : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FCombatantTemplate_Attr() = default;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float maxHP = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float currentHP = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float damageReduction_flat = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float damageReduction_percent = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float healthRegen_flat = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float healthRegen_percent = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float critChance = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float critMultiplier = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float attackSpeed = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float bonusBounces = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float bonusPierce = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float bonusProjectiles = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float projectileSpeed = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float projectileSize = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float movementSpeed = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float range = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float contactDamage = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float selfSize = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	float iFrameDuration = 1;
};