#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EffectStruct.h"
#include "WeaponUEnum.h"
#include "WeaponTemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FWeaponTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	FWeaponTemplate() = default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	FString _name = "Weapon";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	TArray<FEffectStruct> _statusEffects;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	bool _hasProjectileData = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	bool _hasAOEData = false;
};