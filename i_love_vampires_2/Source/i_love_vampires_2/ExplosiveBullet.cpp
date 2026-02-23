#include "ExplosiveBullet.h"
#include "AOE.h"

void AExplosiveBullet::initialise_AExplosiveBullet(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances, float directionX, float directionZ, const FProjectileTemplate& projectileData, const FAOETemplate& explosionData) {
	initialise_ABullet(pawnRef, effect, effectChances, directionX, directionZ, projectileData);
	_explosionData = explosionData;
}

void AExplosiveBullet::bulletDeath_Implementation() {
	ABullet::bulletDeath();
}

void AExplosiveBullet::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		handleBouncePierce();
	}
}

void AExplosiveBullet::finishExplosionInitialisation(AAOE* aoe) {
	if (aoe) {
		aoe->initialise_AAOE(_pawnRef, _effect, _explosionData);
	}
}