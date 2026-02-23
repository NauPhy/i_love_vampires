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
		ID("projectile"),
		shape(0),
		attackShape(0),
		spread(1.f),
		radius(1.f),
		targeting(0),
		isHoming(false),
		speed(1.f),
		range(1.f),
		pierce(0.f),
		bounce(0.f),
		projectileCount(1.f),
		isExplosive(false)
	{
	}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	FName ID;
	//0 is circle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	int shape;
	//0 is fan
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	int attackShape;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float spread;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float radius;
	//0 is skillshot
	//1 is closest
	//2 is random
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	int targeting;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	bool isHoming;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float speed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float range;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float pierce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float bounce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	float projectileCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileTemplate")
	bool isExplosive;
};
