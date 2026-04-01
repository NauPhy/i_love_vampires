#pragma once
#include "CoreMinimal.h"
#include "AOEEnum.generated.h"

UENUM(BlueprintType)
enum class EAOEShape : uint8
{
	circle UMETA(DisplayName = "circle"),
	INVALID = 255 UMETA(DisplayName = "INVALID")
};