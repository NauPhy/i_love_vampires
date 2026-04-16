#pragma once
#include "CoreMinimal.h"
#include "StatusEnum.generated.h"
struct FEffectStruct;

UENUM(BlueprintType)
enum class EStatus : uint8
{
	damage UMETA(DisplayName = "damage"),
	bleed UMETA(DisplayName = "bleed"),
	// percent maxHP damage twice per second
	burn UMETA(DisplayName = "burn"),
	// flat damage once per second, increases exponentially at 10% per tick
	poison UMETA(DisplayName = "poison"),
	// execute below percentage
	execute UMETA(DisplayName = "execute"),
	// flat healing when enemy is hit
	healInstigator UMETA(DisplayName = "healInstigator"),
	// flat damage
	friendlyFire UMETA(DisplayName = "friendlyFire"),
	// Unable to fire projectile attacks
	blind UMETA(DisplayName = "blind"),
	// Slows and reduces attack speed by magnitude%
	chill UMETA(DisplayName = "chill"),
	// Percent missing HP applied with burn
	decay UMETA(DisplayName = "decay"),
	randomNegativePersistent UMETA(DisplayName = "randomNegativePersistent"),
	INVALID = 255 UMETA(DisplayName = "INVALID")
}; 

// Dependencies
// damage, bleed, burn, execute, decay-> Combatant.h->CombatantAttributes
// damage, burn -> CombatantAttributeSet
// burn, poison -> BaseAttributeSet.h
// healInstigator, randomNegativePersistent, friendlyFire -> AttackActor.h
// blind -> ProjectileFactory.h
// chill -> Active.h, CombatantAttributes
// bleed, burn, poison, blind, chill, decay -> see below
class StatusStatics {
public:
	StatusStatics() = delete;
	StatusStatics(const StatusStatics& other) = delete;
	StatusStatics(StatusStatics&& other) = delete;
	StatusStatics& operator=(const StatusStatics& other) = delete;
	StatusStatics& operator=(StatusStatics&& other) = delete;

	static FEffectStruct getRandomNegativePersistentEffect(float magnitude, float duration);
};