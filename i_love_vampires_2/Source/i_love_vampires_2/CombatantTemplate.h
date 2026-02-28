#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CombatantTemplate.generated.h"
struct FGameplayAttribute;
class UCombatantAttributeSet;

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FCombatantTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	//FDataTableRowHandle handle;

public:
	FCombatantTemplate() :
		name("Combatant"),
		ID("combatant"),
		sprite(nullptr),
		attributes()
		//maxHP(1.f),
		//damageReduction_flat(0.f),
		//damageReduction_percent(0.f),
		//healthRegen_flat(0.f),
		//healthRegen_percent(0.f),
		//critChance(0.f),
		//critMultiplier(2.f),
		//attackSpeed(1.f),
		//bonusBounces(0.f),
		//bonusPierce(0.f),
		//bonusProjectiles(0.f),
		//projectileSpeed(1.f),
		//projectileSize(1.f),
		//AOESize(1.f),
		//movementSpeed(1.f),
		//range(1.f),
		//contactDamage(0.f),
		//selfSize(1.f),
		//iFrameDuration(1.f)
	{}
	//Deprecated in favour of DefinitionLookups.h
	//float getAttributeValue(const FGameplayAttribute& attribute) const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	TSoftObjectPtr<UTexture2D> sprite;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float maxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float damageReduction_flat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float damageReduction_percent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float healthRegen_flat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float healthRegen_percent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float critChance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float critMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float attackSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float bonusBounces;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float bonusPierce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float bonusProjectiles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float projectileSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float projectileSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float AOESize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float range;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float contactDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float selfSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_CombatantAttribute")
	float iFrameDuration;*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCombatantTemplate")
	UCombatantAttributeSet* attributes;
};
