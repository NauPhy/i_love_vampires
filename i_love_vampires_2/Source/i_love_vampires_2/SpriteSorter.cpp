#include "SpriteSorter.h"
#include "EnemyBase.h"
#include "MyPlayer.h"
#include "AttackActor.h"
#include "Definitions.h"
#include "PaperFlipbookComponent.h"

bool USpriteSorter::sortSprite(AMyPlayer* player, UPaperFlipbookComponent* flipbook) {
	if (!IsValid(player) || !IsValid(flipbook)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	flipbook->TranslucencySortPriority = nextPlayer + _PLAYER_OFFSET;
	nextPlayer++;
	return true;
}

bool USpriteSorter::sortSprite(AEnemyBase* enemy, UPaperFlipbookComponent* flipbook) {
	if (!IsValid(enemy) || !IsValid(flipbook)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	flipbook->TranslucencySortPriority = enemy->getKey() + _ENEMY_OFFSET;
	return true;
}

bool USpriteSorter::sortSprite(AAttackActor* attack, UPaperFlipbookComponent* flipbook) {
	if (!IsValid(attack) || !IsValid(flipbook)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	flipbook->TranslucencySortPriority = nextAttack + _ATTACK_OFFSET;
	nextAttack++;
	return true;
}
