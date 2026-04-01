#pragma once
#include "CoreMinimal.h"
#include "ActiveEnum.generated.h"

UENUM(BlueprintType)
enum class EAttackType : uint8
{
	// The most basic attack type; fires the first attack in the list without checking if there are other attacks.
	first UMETA(DisplayName = "first"),
	INVALID = 255 UMETA(DisplayName = "INVALID")
};