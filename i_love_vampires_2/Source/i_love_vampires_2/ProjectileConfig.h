#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BulletUEnum.h"
#include "ProjectileTemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FProjectileTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FProjectileTemplate() = default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	FName _ID = "projectile";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	EProjectileShape _shape = static_cast<EProjectileShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	EAttackShape _attackShape = static_cast<EAttackShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	bool _isHoming = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	bool _isExplosive = false;
};
