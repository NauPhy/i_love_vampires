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
	if (!_gameReady)
		return;
	const float time = GetWorld()->TimeSeconds;
	if (time < _nextTick)
		return;
	if (_testEnemy._enemyClass.Get() == nullptr) {
		LOGERROR("UEnemySpawner::Tick - testEnemy is null");
		return;
	}
	if (_combatantData == nullptr) {
		LOGERROR("UEnemySpawner::Tick - combatant data is null");
		return;
	}
	FCombatantTemplate* testEnemyData = _combatantData->FindRow<FCombatantTemplate>(_testEnemy._enemyID, TEXT("UEnemySpawner::Tick"));
	if (testEnemyData == nullptr) {
		LOGERROR("UEnemySpawner::Tick - failed to find enemy data in data table");
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
		_testEnemy._enemyClass,
		spawnLocation,
		spawnRotation,
		spawnParams
	);
	if (newEnemy == nullptr) {
		LOGERROR("UEnemySpawner::Tick - failed to spawn enemy");
		return;
	}
	newEnemy->initialiseFromTemplate(*testEnemyData, _testEnemy._enemyID);
	_nextTick += 5.f;
}

