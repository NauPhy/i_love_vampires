#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnemySpawner.generated.h"
class ACombatant;
class UCombatantTemplate;

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UEnemySpawner : public UObject
{
	GENERATED_BODY()

	float _nextTick = 0.f;
	bool _gameReady = false;
	bool spawnTestEnemy(ACombatant*& ret);
	bool spawnEnemy(const FVector& location, const UCombatantTemplate* data, ACombatant*& ret);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCombatantTemplate* _testEnemy;

	UEnemySpawner();
	void tick(float DeltaTime);
	void setGameReady(bool val) { _gameReady = val; }
};