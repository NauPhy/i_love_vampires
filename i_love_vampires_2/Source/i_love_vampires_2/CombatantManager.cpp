#include "CombatantManager.h"
#include "Combatant.h"
#include "Math/UnrealMathUtility.h"
#include "Definitions.h"
#include "Engine/World.h"
#include "CombatGameModeBase.h"

void UCombatantManager::tick(float delta) {
	if (!_gameReady)
		return;
	if (_burnTimer <= 0.0f)
		burnAll();
	else
		_burnThisFrame = false;
	_burnTimer -= delta;
}

void UCombatantManager::burnAll() {
	_burnThisFrame = true;
	_burnTimer = _BURN_PERIOD;
}

int UCombatantManager::registerEnemy(ACombatant* enemy) {
	int key = _nextKey;
	_nextKey += 1;
	_enemyReferences.Add(key, TWeakObjectPtr<ACombatant>(enemy));
	return key;
}

void UCombatantManager::removeFromRegister(int key) {
	_enemyReferences.Remove(key);
}

bool UCombatantManager::getRandomEnemyPtr(TWeakObjectPtr<ACombatant>& ret) {
	if (_enemyReferences.Num() == 0) {
		return false;
	}
	const int roll = FMath::RandRange(static_cast<int>(0), static_cast<int>(_enemyReferences.Num() - 1));
	// pair is TPair
	int count = 0;
	for (const auto& pair : _enemyReferences) {
		if (count == roll) {
			ret = pair.Value;
			return true;
		}
		count++;
	}
	LOGERROR("UCombatantManager::getRandomEnemyPtr - failed to get random enemy reference");
	return false;
}

void UCombatantManager::setPlayerRef(ACombatant* playerRef) {
	_playerRef = TWeakObjectPtr<ACombatant>(playerRef);
}