#include "CombatGameModeBase.h"
#include "CombatantManager.h"
#include "EnemySpawner.h"
#include "Definitions.h"

ACombatGameModeBase::ACombatGameModeBase() : AGameModeBase() {
	_enemySpawner = CreateDefaultSubobject<UEnemySpawner>(TEXT("EnemySpawner"));
	_combatantManager = CreateDefaultSubobject<UCombatantManager>(TEXT("CombatantManager"));
}

void ACombatGameModeBase::BeginPlay() {
	Super::BeginPlay();
	if (!IsValid(_enemySpawner)) {
		LOGERROR("ACombatGameModeBase::BeginPlay - _enemySpawner is not valid");
		return;
	}
	if (!IsValid(_combatantManager)) {
		LOGERROR("ACombatGameModeBase::BeginPlay - _combatantManager is not valid");
		return;
	}
}

void ACombatGameModeBase::Tick(float delta) {
	Super::Tick(delta);
	_enemySpawner->tick(delta);
	_combatantManager->tick(delta);
}

void ACombatGameModeBase::setGameReady(bool val) {
	_combatantManager->setGameReady(val);
	_enemySpawner->setGameReady(val);
}