#include "SpriteSorter.h"
#include "EnemyBase.h"
#include "MyPlayer.h"
#include "AttackActor.h"
#include "Definitions.h"
#include "PaperFlipbookComponent.h"

bool USpriteSorter::addOffset(AActor* actor, int offset) {
	if (!IsValid(actor) || offset < 0) {
		LOGERROR("USpriteSorter::addOffset - parameter is not valid");
		return false;
	}
	FHitResult* throwaway = nullptr;
	if (USceneComponent* root = actor->GetRootComponent()) {
		root->AddWorldOffset(FVector(0,offset * _OFFSET_AMOUNT,0), false, throwaway, ETeleportType::TeleportPhysics);
		return true;
	}
	return false;
}

bool USpriteSorter::sortSprite(AMyPlayer* player) {
	if (!IsValid(player)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	if (!addOffset(player, nextPlayer + _PLAYER_OFFSET))
		return false;
	nextPlayer++;
	return true;
}

bool USpriteSorter::sortSprite(AEnemyBase* enemy) {
	if (!IsValid(enemy)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	if (!addOffset(enemy, enemy->getKey() + _ENEMY_OFFSET))
		return false;
	return true;
}

bool USpriteSorter::sortSprite(AAttackActor* attack) {
	if (!IsValid(attack)) {
		LOGERROR("USpriteSorter::sortSprite - parameter is not valid");
		return false;
	}
	if (!addOffset(attack, nextAttack + _ATTACK_OFFSET))
		return false;
	nextAttack++;
	return true;
}
