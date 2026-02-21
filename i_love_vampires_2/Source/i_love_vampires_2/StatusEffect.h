#pragma once
#include "CoreMinimal.h"
#include "Definitions.h"
#include "StatusEffect.generated.h"

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FStatusEffect
{
	GENERATED_USTRUCT_BODY()

public:
	FStatusEffect() :
		type(EStatusEffect::none),
		chance(1.f),
		magnitude(0.f),
		duration(1.f)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	EStatusEffect type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float chance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float magnitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponTemplate")
	float duration;
};