#include "EnemySpawner.h"
#include "Math/UnrealMathUtility.h"
#include "Definitions.h"
#include "Combatant.h"
#include <cmath>
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"

UEnemySpawner::UEnemySpawner() {
}

const float spawnDistance = 300.f;
void UEnemySpawner::Tick(float DeltaTime) {
	if (!gameReady)
		return;
	const float time = GetWorld()->TimeSeconds;
	if (time < _nextTick)
		return;
	if (testEnemy.enemyClass.Get() == nullptr) {
		LOGERROR("UEnemySpawner::Tick - testEnemy is null");
		return;
	}
	APawn* player = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
	if (player == nullptr) {
		LOGERROR("player is nullptr");
		return;
	}
	FVector playerPos = player->K2_GetActorLocation();
	double angle = FMath::FRandRange(0, 2 * PI);
	double sin = std::sin(angle);
	double cos = std::cos(angle);
	FVector spawnLocation(cos * spawnDistance + playerPos.X, 100 + playerPos.Y, sin * spawnDistance + playerPos.Z);
	FRotator spawnRotation(0, 0, 0);
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ACombatant* newEnemy = GetWorld()->SpawnActor<ACombatant>(
		testEnemy.enemyClass,
		spawnLocation,
		spawnRotation,
		spawnParams
	);
	if (newEnemy == nullptr) {
		LOGERROR("UEnemySpawner::Tick - failed to spawn enemy");
		return;
	}
	newEnemy->myInitialise();
	newEnemy->initialiseFromTemplate(testEnemy.enemyData);
	_nextTick += 5.f;
}

