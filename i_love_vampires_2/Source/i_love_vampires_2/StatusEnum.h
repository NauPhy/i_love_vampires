#pragma once
#include "CoreMinimal.h"
#include "StatusEnum.generated.h"

UENUM(BlueprintType)
enum class EStatusEffect : uint8
{
	bleed       UMETA(DisplayName = "Bleed"),
	burn        UMETA(DisplayName = "Burn"),
	max         UMETA(Hidden)
};

