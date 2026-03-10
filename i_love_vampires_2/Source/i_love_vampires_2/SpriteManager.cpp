#include "SpriteManager.h"
#include "PaperFlipbook.h"
#include "Definitions.h"
#include "EnumConverter.h"

namespace {
	const std::TMap<ESprite, const char*> SPRITE_PATH = {
		{ESprite::testPlayer, "/Game/Sprites/athena.athena"},
		{ESprite::testEnemy, "/Game/Sprites/enemy.enemy"},
		{ESprite::testBullet, "/Game/Sprites/placeholder_bullet.placeholder_bullet"},
		{ESprite::testShard, "/Game/Sprites/shard.shard"}
	};
}

USpriteManager::USpriteManager() {
	// pair is TPair
	const auto& pathMap = SPRITE_PATH;
	for (const auto& pair : pathMap) {
		FStringView paramPath = FStringView(FString(pair.Value));
		UPaperFlipbook* flipbook = LoadObject<UPaperFlipbook>(nullptr, paramPath);
		if (flipbook == nullptr) {
			_sprites.Add(Key, flipbook);
		}
		else {
			LOGERROR("Failed to load sprite");
			continue;
		}
	}
}

bool USpriteManager::getSprite(ESprite sprite, UPaperFlipbook*& ret) const {
	if (_sprites.Contains(sprite)) {
		ret = _sprites[sprite];
		return true;
	}
	else {
		LOGERROR("Failed to get sprite");
		return false;
	}
}