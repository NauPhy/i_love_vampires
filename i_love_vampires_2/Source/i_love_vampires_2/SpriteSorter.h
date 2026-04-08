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
	const static inline int _PLAYER_OFFSET = 0;
	const static inline int _ENEMY_OFFSET = 10;
	const static inline int _ATTACK_OFFSET = 10000000;
	const static inline float _OFFSET_AMOUNT = 1e-6;
	int nextAttack = 0;
	int nextPlayer = 0;

	bool addOffset(AActor*, int);

public:
	//Using overload in lieu of templates
	bool sortSprite(AMyPlayer*);
	bool sortSprite(AEnemyBase*);
	bool sortSprite(AAttackActor*);
};