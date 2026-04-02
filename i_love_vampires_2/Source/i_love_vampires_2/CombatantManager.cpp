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

bool UCombatantManager::getRandomEnemyPtr(TWeakObjectPtr<ACombatant>& ret, const ACombatant* excluded) {
	if (_enemyReferences.Num() <= 1) {
		return false;
	}
	int roll = FMath::RandRange(static_cast<int>(0), static_cast<int>(_enemyReferences.Num() - 1));
	// pair is TPair
	int count = 0;
	for (const auto& pair : _enemyReferences) {
		if (count == roll) {
			if (pair.Value.IsValid() && pair.Value.Get() != excluded) {
				ret = pair.Value;
				return true;
			}
			roll++;
		}
		count++;
	}
	// If all combatants are in the middle of construction or destruction, it could be valid for this function to fail without error
	return false;
}

void UCombatantManager::setPlayerRef(ACombatant* playerRef) {
	_playerRef = TWeakObjectPtr<ACombatant>(playerRef);
}