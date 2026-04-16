#pragma once
#include "CoreMinimal.h"
#include "AOEEnum.generated.h"

UENUM(BlueprintType)
enum class EAOEShape : uint8
{
	circle UMETA(DisplayName = "circle"),
	arc UMETA(DisplayName = "arc"),
	INVALID = 255 UMETA(DisplayName = "INVALID")
};

UENUM(BlueprintType)
enum class EAOETargeting : uint8
{
	instigator UMETA(DisplayName = "instigator"),
	random UMETA(DisplayName = "random"),
	INVALID = 255 UMETA(DisplayName = "INVALID")
};
// Dependencies
// all - AOEFactory