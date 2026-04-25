#include "SpriteSorter.h"
#include "EnemyBase.h"
#include "MyPlayer.h"
#include "AttackActor.h"
#include "Definitions.h"
#include "PaperFlipbookComponent.h"

bool USpriteSorter::sortSprite(AMyPlayer* player, UPaperFlipbookComponent* flipbook, UPaperFlipbookComponent* overlayFlipbook) {
	if (!IsValid(player) || !IsValid(flipbook) || !IsValid(overlayFlipbook)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	if (_nextPlayer > _MAX_PLAYERS - 1) {
		LOGERROR("USpriteSorter::sortSprite - too many players have been sorted");
	}
	const int thisOffset = _PLAYER_OFFSET + _nextPlayer * _PLAYER_SIZE;
	flipbook->TranslucencySortPriority = thisOffset;
	overlayFlipbook->TranslucencySortPriority = thisOffset + 1;
	_nextPlayer++;
	return true;
}

bool USpriteSorter::sortSprite(AEnemyBase* enemy, UPaperFlipbookComponent* flipbook, UPaperFlipbookComponent* overlayFlipbook) {
	if (!IsValid(enemy) || !IsValid(flipbook) || !IsValid(overlayFlipbook)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	if (_nextEnemy > _MAX_ENEMIES - 1) {
		LOGERROR("USpriteSorter::sortSprite - too many enemies have been sorted");
	}
	const int thisOffset = _ENEMY_OFFSET + _nextEnemy * _ENEMY_SIZE;
	flipbook->TranslucencySortPriority = thisOffset;
	overlayFlipbook->TranslucencySortPriority = thisOffset + 1;
	_nextEnemy++;
	return true;
}

bool USpriteSorter::sortSprite(AAttackActor* attack, UPaperFlipbookComponent* flipbook) {
	if (!IsValid(attack) || !IsValid(flipbook)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	const int thisOffset = _ATTACK_OFFSET + _nextAttack * _ATTACK_SIZE;
	flipbook->TranslucencySortPriority = thisOffset;
	_nextAttack++;
	return true;
}
