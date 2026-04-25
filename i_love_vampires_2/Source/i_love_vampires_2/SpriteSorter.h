#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpriteSorter.generated.h"
class AMyPlayer;
class AEnemyBase;
class AAttackActor;
class UPaperFlipbookComponent;


UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API USpriteSorter : public UObject
{
	GENERATED_BODY()

	// This will break once more than 10 million enemies have spawned since level start. 
	const static inline int _MAX_PLAYERS = 10;
	const static inline int _MAX_ENEMIES = 10000000;

	const static inline int _COMBATANT_SIZE = 2;
	const static inline int _PLAYER_SIZE = _COMBATANT_SIZE;
	const static inline int _ENEMY_SIZE = _COMBATANT_SIZE;
	const static inline int _ATTACK_SIZE = 1;

	const static inline int _PLAYER_OFFSET = 1;
	const static inline int _ENEMY_OFFSET = _PLAYER_OFFSET + _MAX_PLAYERS * _PLAYER_SIZE;
	const static inline int _ATTACK_OFFSET = _ENEMY_OFFSET + _MAX_ENEMIES * _ENEMY_SIZE;

	int _nextAttack = 0;
	int _nextPlayer = 0;
	int _nextEnemy = 0;

public:
	//Using overload in lieu of templates
	bool sortSprite(AMyPlayer*, UPaperFlipbookComponent*, UPaperFlipbookComponent*);
	bool sortSprite(AEnemyBase*, UPaperFlipbookComponent*, UPaperFlipbookComponent*);
	bool sortSprite(AAttackActor*, UPaperFlipbookComponent*);
};