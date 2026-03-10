#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ProjectileTemplate_Attr.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FProjectileTemplate_Attr : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FProjectileTemplate_Attr() = default;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float _spread = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float _speed = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float _range = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float _pierce = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float _bounce = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float _projectileCount = 1.f;
};
