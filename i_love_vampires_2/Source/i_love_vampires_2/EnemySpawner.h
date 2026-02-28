#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CombatantTemplate.h"
#include "EnemySpawner.generated.h"
class ACombatant;

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FEnemySpawner_MyStruct {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Startup")
	TSubclassOf<ACombatant> enemyClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Startup")
	FCombatantTemplate enemyData;
};

UCLASS()
class I_LOVE_VAMPIRES_2_API UEnemySpawner : public UTickableWorldSubsystem
{
	GENERATED_BODY()
public:
	UEnemySpawner();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Startup")
	bool gameReady = false;

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UEnemySpawner, STATGROUP_Tickables);
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Spawner")
	FEnemySpawner_MyStruct testEnemy;

protected:
	virtual void Tick(float DeltaTime) override;
private:
	float _nextTick = 0.f;
};