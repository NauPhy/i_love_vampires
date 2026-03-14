#include "ExplosiveProjectile.h"
#include "Definitions.h"

void AExplosiveProjectile::initialise_AExplosiveProjectile(
	APawn* pawnRef,
	float directionX,
	float directionZ,
	const UExplosiveProjectileData* data,
	AAOE* aoe
	) 
{
	initialise_AExplosiveProjectile(pawnRef, directionX, directionZ, data->_config, data->_attributes, aoe);
}

void AExplosiveProjectile::initialise_AExplosiveProjectile(
	APawn* pawnRef,
	float directionX,
	float directionZ,
	const UExplosiveProjectileConfig* config,
	const UExplosiveProjectileAttributes* attributes,
	AAOE* aoe
) 
{
	_config = DuplicateObject<UExplosiveProjectileConfig>(config, this);
	_attributes = DuplicateObject<UExplosiveProjectileAttributes>(attributes, this);
	initialise_AExplosiveProjectile(pawnRef, directionX, directionZ, aoe);
}

//TODO
// IMPLEMENT SPAWN AOE
void AExplosiveProjectile::bulletDeath() {
	if (!IsValid(_aoe)) {
		LOGERROR("AExplosiveProjectile::bulletDeath - aoe is not valid");
	}
	_aoe->completeDelayedConstruction();
	AProjectile::bulletDeath();
}

void AExplosiveProjectile::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		handleBouncePierce();
	}
}

void UExplosiveProjectileAttributes::modifyAttributes(const UCombatantAttributes* combatantAttributes, const UExplosiveProjectileAttributes* projectileAttributes, UExplosiveProjectileAttributes* finalAttributes) {
	const UProjectileAttributes* superBase = Cast<UProjectileAttributes>(projectileAttributes);
	if (superBase == nullptr) {
		LOGERROR("UExplosiveProjectileAttributes::modifyAttributes - projectileAttributes is not a UProjectileAttributes");
		return;
	}
	UProjectileAttributes* superFinal = Cast<UProjectileAttributes>(finalAttributes);
	if (superFinal == nullptr) {
		LOGERROR("UExplosiveProjectileAttributes::modifyAttributes - finalAttributes is not a UProjectileAttributes");
		return;
	}
	UProjectileAttributes::modifyAttributes(combatantAttributes, superBase, superFinal);
}