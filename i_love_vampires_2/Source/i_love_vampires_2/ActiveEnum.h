#pragma once

UENUM(BlueprintType)
enum class EActivationType : uint8
{
	single UMETA(DisplayName = "single"),
	burst UMETA(DisplayName = "burst"),
	INVALID = 255 UMETA(DisplayName = "INVALID")
};
// Dependencies
// single, burst - Active.h