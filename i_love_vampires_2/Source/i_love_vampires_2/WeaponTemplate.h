#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
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
		hasProjectileData(false)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponTemplate")
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponTemplate")
	FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponTemplate")
	bool startOnCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponTemplate")
	float warmup;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponTemplate")
	float damage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponTemplate")
	bool hasProjectileData;
};
