#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/PrimaryAssetId.h"
#include "EnemySpawner.generated.h"
class ACombatant;

UCLASS()
class I_LOVE_VAMPIRES_2_API UEnemySpawner : public UTickableWorldSubsystem
{
	GENERATED_BODY()

	float _nextTick = 0.f;
	bool spawnTestEnemy(ACombatant*& ret);
	bool spawnEnemy(const FVector& location, const FPrimaryAssetId& ID, ACombatant*& ret);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UEnemySpawner")
	FPrimaryAssetId _testEnemy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UEnemySpawner")
	bool _gameReady = false;

	UEnemySpawner();
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UEnemySpawner, STATGROUP_Tickables);
	}
	
protected:
	virtual void Tick(float DeltaTime) override;
};