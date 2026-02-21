#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Definitions.h"
#include "StatusEffect.h"
#include "WeaponTemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FWeaponTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	FWeaponTemplate() :
		name("Weapon"),
		ID("weapon"),
		startOnCooldown(true),
		warmup(1.f),
		damage(0.f),
		critChance(0.f),
		critMultiplier(1.f),
		//status effects done automatically
		hasProjectileData(false)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	bool startOnCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float warmup;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float critChance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float critMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	TArray<FStatusEffect> statusEffects;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	bool hasProjectileData;
};