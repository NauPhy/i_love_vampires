#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ProjectileTemplate.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FProjectileTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	FProjectileTemplate() :
		ID("weapon"),
		shape(0),
		radius(1.f),
		targeting(0),
		isHoming(false),
		speed(1.f),
		range(1.f),
		pierce(0.f),
		bounce(0.f)
	{
	}
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	FName ID;
	//0 is circle
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	int shape;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	float radius;
	//0 is skillshot
	//1 is closest
	//2 is random
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	int targeting;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	bool isHoming;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	float speed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	float range;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	float pierce;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ProjectileTemplate")
	float bounce;
};
