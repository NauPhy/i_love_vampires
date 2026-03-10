#pragma once
#include "CoreMinimal.h"
#include "CombatantUEnum.h"
#include "EffectStruct.generated.h"

USTRUCT(BlueprintType)
struct FEffectStruct {
	GENERATED_USTRUCT_BODY()

	FEffectStruct() = default;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EffectStruct")
	EStatus _type = static_cast<EStatus>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EffectStruct")
	float _magnitude = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EffectStruct")
	float _duration = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EffectStruct")
	float _chance = 1;
};
