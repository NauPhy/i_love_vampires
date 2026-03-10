#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CombatantTemplate.h"
#include "EnemyRef.h"
#include "Engine/DataTable.h"
#include "EnemySpawner.generated.h"

UCLASS()
class I_LOVE_VAMPIRES_2_API UEnemySpawner : public UTickableWorldSubsystem
{
	GENERATED_BODY()

	float _nextTick = 0.f;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UEnemySpawner")
	UDataTable* _combatantData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UEnemySpawner")
	FEnemyRef _testEnemy;
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