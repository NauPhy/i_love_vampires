#include "EnemySpawner.h"
#include "Math/UnrealMathUtility.h"
#include "Definitions.h"
#include "Combatant.h"
#include <cmath>
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "Engine/AssetManager.h"
#include "BaseAttributeSet.h"

UEnemySpawner::UEnemySpawner() {
}

bool UEnemySpawner::spawnTestEnemy(ACombatant*& ret) {
	const float spawnDistance = 100.0f;

	APawn* player = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!IsValid(player)) {
		LOGERROR("player is invalid");
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
	if (!IsValid(rawData) || !IsValid(rawData->_config)) {
		LOGERROR("UEnemySpawner::spawnEnemy - invalid rawData");
		return false;
	}

	const TSubclassOf<ACombatant> enemyClass = rawData->_config->_combatantClass;
	const FRotator spawnRotation(0, 0, 0);
	const FVector spawnScale(1, 1, 1);
	const FTransform spawnTransform(spawnRotation, spawnLocation, spawnScale);
	const ESpawnActorScaleMethod scaleMethod = ESpawnActorScaleMethod::MultiplyWithRoot;

	UWorld* world = GetWorld();
	if (!IsValid(world)) {
		LOGERROR("UEnemySpawner::spawnEnemy - world is invalid");
		return false;
	}
	ret = world->SpawnActorDeferred<ACombatant>(
		enemyClass,
		spawnTransform,
		nullptr,
		nullptr,
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn,
		scaleMethod
	);
	if (!IsValid(ret)) {
		LOGERROR("UEnemySpawner::spawnEnemy - failed to spawn enemy");
		return false;
	}
	ret->myInitialise(rawData);
	UGameplayStatics::FinishSpawningActor(ret, spawnTransform, scaleMethod);
	if (!IsValid(ret)) {
		LOGERROR("UEnemySpawner::spawnEnemy - failed to finish spawning enemy");
		return false;
	}
	return true;
}

void UEnemySpawner::tick(float DeltaTime) {
	if (!_gameReady)
		return;
	const float time = GetWorld()->TimeSeconds;
	if (time < _nextTick)
		return;
	ACombatant* newEnemy = nullptr;
	spawnTestEnemy(newEnemy);
	_nextTick += 5.f;
}