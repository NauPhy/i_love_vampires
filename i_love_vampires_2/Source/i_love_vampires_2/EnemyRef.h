#pragma once
#include "CoreMinimal.h"
#include "CombatantTemplate.h"
#include "EnemyRef.generated.h"
class ACombatant;

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FEnemyRef {
	GENERATED_USTRUCT_BODY()

public:
	FEnemyRef() = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Startup")
	TSubclassOf<ACombatant> _enemyClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Startup")
	FName _enemyID = "combatant";
};