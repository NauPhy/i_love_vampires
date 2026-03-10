#include "ExplosiveBullet.h"
#include "AOE.h"

void AExplosiveBullet::initialise_AExplosiveBullet(
	APawn* pawnRef,
	float directionX,
	float directionZ,
	const FExplosiveProjectileConfig& config,
	const FExplosiveProjectileAttributes& attributes,
	) 
{
	_config = MakeUnique<ExplosiveProjectileConfig>(config);
	_attributes = MakeUnique<ExplosiveProjectileAttributes>(attributes);
	AExplosiveBullet(pawnRef, directionX, directionZ);
}

void AExplosiveBullet::bulletDeath() {
	//TODO
	// IMPLEMENT SPAWN AOE
	ABullet::bulletDeath();
}

void AExplosiveBullet::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		handleBouncePierce();
	}
}

// Include this in bulletDeath()
//void AExplosiveBullet::finishExplosionInitialisation(AAOE* aoe) {
//	if (aoe) {
//		aoe->initialise_AAOE(_pawnRef, _effect, _explosionData);
//	}
//}