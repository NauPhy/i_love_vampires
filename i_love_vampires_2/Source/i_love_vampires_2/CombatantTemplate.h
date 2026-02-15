#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatantTemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FCombatantTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	//FDataTableRowHandle handle;

public:
	FCombatantTemplate() :
		name("Combatant"),
		ID("combatant"),
		sprite(nullptr),
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
		contactDamage(0.f)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantGeneral")
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantGeneral")
	FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantGeneral")
	TSoftObjectPtr<UTexture2D> sprite;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float maxHP;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float damageReduction_flat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float damageReduction_percent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float healthRegen_flat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float healthRegen_percent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float critChance;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float critMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float attackSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float bonusBounces;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float bonusPierce;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float bonusProjectiles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float projectileSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float projectileSize;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float AOESize;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float range;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "A_CombatantAttribute")
	float contactDamage;
};
