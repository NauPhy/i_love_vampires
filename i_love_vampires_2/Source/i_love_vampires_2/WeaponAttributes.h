#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponAttributes.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FWeaponAttributes : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float warmup = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float damage = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float critChance = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float critMultiplier = 2.f;
};