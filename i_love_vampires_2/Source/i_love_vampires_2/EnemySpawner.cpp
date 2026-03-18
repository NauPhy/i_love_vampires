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
	const float spawnDistance = 300.f;

	APawn* player = UGameplayStatics::GetPlayerPawn(this, 0);
	if (player == nullptr) {
		LOGERROR("player is nullptr");
		return false;
	}
	FVector playerPos = player->K2_GetActorLocation();
	double angle = FMath::FRandRange(0, 2 * PI);
	double sin = std::sin(angle);
	double cos = std::cos(angle);
	FVector spawnLocation(cos * spawnDistance + playerPos.X, 100 + playerPos.Y, sin * spawnDistance + playerPos.Z);
	return spawnEnemy(spawnLocation, _testEnemy, ret);
}

// This function only works for enemies that do not require initialisation data outisde of their template
// Idk why I would need that because the template is meant to store arbitrary data
bool UEnemySpawner::spawnEnemy(const FVector& spawnLocation, const UCombatantTemplate* rawData, ACombatant*& ret) {
	//UCombatantTemplate* rawData = nullptr;
	//{
	//	UAssetManager& manager = UAssetManager::Get();
	//	UObject* asset = manager.GetPrimaryAssetObject(ID);
	//	if (asset == nullptr) {
	//		auto handle = manager.LoadPrimaryAsset(ID);
	//		handle->WaitUntilComplete();
	//		asset = manager.GetPrimaryAssetObject(ID);
	//	}
	//	if (asset == nullptr) {
	//		LOGERROR("UEnemySpawner::spawnEnemy - asset is null");
	//		return false;
	//	}
	//	rawData = Cast<UCombatantTemplate>(asset);
	//	if (rawData == nullptr) {
	//		LOGERROR("UActive::initialise_UActive - asset is not a UWeaponTemplate");
	//		return false;
	//	}
	//}
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

