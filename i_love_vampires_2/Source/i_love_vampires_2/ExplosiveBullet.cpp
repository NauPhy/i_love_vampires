#include "ExplosiveBullet.h"
#include "AOE.h"

void AExplosiveBullet::initialise_AExplosiveBullet(
	APawn* pawnRef,
	float directionX,
	float directionZ,
	const FExplosiveProjectileConfig& config,
	const FProjectileAttributes& attributes
	) 
{
	_config = MakeUnique<FExplosiveProjectileConfig>(config);
	_attributes = MakeUnique<FProjectileAttributes>(attributes);
	initialise_AExplosiveBullet(pawnRef, directionX, directionZ);
}

//TODO
// IMPLEMENT SPAWN AOE
void AExplosiveBullet::bulletDeath() {
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