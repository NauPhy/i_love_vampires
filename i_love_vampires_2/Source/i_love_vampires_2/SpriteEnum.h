#pragma once
#include "CoreMinimal.h"
#include "SpriteEnum.generated.h"

UENUM(BlueprintType)
enum class ESprite : uint8
{
	//Combatants
		//Players
	testPlayer UMETA(DisplayName = "testPlayer"),
		//Enemies
	testEnemy UMETA(DisplayName = "testEnemy"),
	//Projectiles
	testBullet UMETA(DisplayName = "testBullet"),
	//Other
	testShard UMETA(DisplayName = "testShard")
};
// Dependencies (C++)
// testShard
//     - ExperienceShard.h