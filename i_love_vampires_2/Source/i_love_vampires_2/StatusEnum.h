#pragma once
#include "CoreMinimal.h"
#include "StatusEnum.generated.h"

UENUM(BlueprintType)
enum class EStatus : uint8
{
	damage UMETA(DisplayName = "damage"),
	bleed UMETA(DisplayName = "bleed"),
	burn UMETA(DisplayName = "burn")
};

// Dependencies
// All
//     - StatusFactory.h