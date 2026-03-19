#include "EnemySpawner.h"
#include "Math/UnrealMathUtility.h"
#include "Definitions.h"
#include "Combatant.h"
#include <cmath>
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "Engine/AssetManager.h"

UEnemySpawner::UEnemySpawner() {
}

bool UEnemySpawner::spawnTestEnemy(ACombatant*& ret) {
	const float spawnDistance = 100.0f;

	APawn* player = UGameplayStatics::GetPlayerPawn(this, 0);
	if (player == nullptr) {
		LOGERROR("player is nullptr");
		return false;
	}
	FVector playerPos = player->K2_GetActorLocation();
	double angle = FMath::FRandRange(0, 2 * PI);
	double sin = std::sin(angle);
	double cos = std::cos(angle);
	FVector spawnLocation(cos * spawnDistance + playerPos.X, playerPos.Y, sin * spawnDistance + playerPos.Z);
	return spawnEnemy(spawnLocation, _testEnemy, ret);
}

bool UEnemySpawner::spawnEnemy(const FVector& spawnLocation, const UCombatantTemplate* rawData, ACombatant*& ret) {
	TSubclassOf<ACombatant> enemyClass = rawData->_config->_combatantClass;
	FRotator spawnRotation(0, 0, 0);
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ret = GetWorld()->SpawnActor<ACombatant>(
		enemyClass,
		spawnLocation,
		spawnRotation,
		spawnParams
	);
	if (ret == nullptr) {
		LOGERROR("UEnemySpawner::spawnEnemy - failed to spawn enemy");
		return false;
	}
	ret->myInitialise(rawData);
	return true;
}


void UEnemySpawner::Tick(float DeltaTime) {
	if (!_gameReady)
		return;
	const float time = GetWorld()->TimeSeconds;
	if (time < _nextTick)
		return;
	ACombatant* newEnemy = nullptr;
	spawnTestEnemy(newEnemy);
	_nextTick += 5.f;
}

