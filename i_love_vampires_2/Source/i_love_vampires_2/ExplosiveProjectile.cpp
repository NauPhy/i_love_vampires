#include "ExplosiveProjectile.h"
#include "Definitions.h"

void AExplosiveProjectile::initialise_AExplosiveProjectile(
	APawn* pawnRef,
	float directionX,
	float directionZ,
	AAOE* aoe,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributes* projectileAttributes,
	const UExplosiveProjectileConfig* explosiveProjectileConfig,
	const UExplosiveProjectileAttributes* explosiveProjectileAttributes) {
	AProjectile::initialise_AProjectile(
		pawnRef,
		directionX,
		directionZ,
		attackConfig,
		attackAttributes,
		projectileConfig,
		projectileAttributes
	);
	_aoe = aoe;
	_explosiveProjectileConfig = DuplicateObject<UExplosiveProjectileConfig>(explosiveProjectileConfig, this);
	_explosiveProjectileAttributes = DuplicateObject<UExplosiveProjectileAttributes>(explosiveProjectileAttributes, this);
}

void AExplosiveProjectile::bulletDeath() {
	if (!IsValid(_AOE)) {
		LOGERROR("AExplosiveProjectile::bulletDeath - aoe is not valid");
	}
	_AOE->completeDelayedConstruction();
	AProjectile::bulletDeath();
}

void AExplosiveProjectile::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		handleBouncePierce();
	}
}

void AExplosiveProjectile::factoryInitQuery(const UAttackFactory* factory) {
	if (!IsValid(factory)) {
		LOGERROR("AExplosiveProjectile::factoryInitQuery - factory is not valid");
		return;
	}
	factory->initExplosiveProjectile(this);
}
///////////////////////////////////////////////////////////////////////////////

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
///////////////////////////////////////////////////////////////////////////////

void UExplosiveProjectileFactory::initialise_UExplosiveProjectileFactory(
	APawn* pawn,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributes* projectileAttributes,
	const UExplosiveProjectileConfig* explosiveProjectileConfig,
	const UExplosiveProjectileAttributes* explosiveProjectileAttributes,
	const UAOEConfig* aoeConfig,
	const UAOEAttributes* aoeAttributes)
{
	initialise_UProjectileFactory(pawn, attackConfig, attackAttributes, projectileConfig, projectileAttributes);
	_explosiveProjectileConfig = DuplicateObject<UExplosiveProjectileConfig>(explosiveProjectileConfig, this);
	_explosiveProjectileComponent = NewObject<UExplosiveProjectileAttributeComponent>(this);
	_explosiveProjectileComponent->initialise_UExplosiveProjectileComponent(explosiveProjectileAttributes);
	_aoeConfig = DuplicateObject<UAOEConfig>(aoeConfig, this);
	_aoeComponent = NewObject<UAOEComponent>(this);
	_aoeComponent->initialise_UAOEComponent(aoeAttributes);
}

///////////////////////////////////////////////////////////////////////////////

bool UExplosiveProjectileFactoryTemplate::isValid() const {
	if (!IsValid(_explosiveProjectileConfig)) {
		LOGERROR("UExplosiveProjectileFactoryTemplate::isValid - explosiveProjectileConfig is not valid");)
		return false;
	}
	if (!IsValid(_explosiveProjectileAttributes)) {
		LOGERROR("UExplosiveProjectileFactoryTemplate::isValid - explosiveProjectileAttributes is not valid");)
		return false;
	}
	if (!IsValid(_aoeConfig)) {
		LOGERROR("UExplosiveProjectileFactoryTemplate::isValid - aoeConfig is not valid");)
		return false;
	}
	if (!IsValid(_aoeComponent)) {
		LOGERROR("UExplosiveProjectileFactoryTemplate::isValid - aoeComponent is not valid");)
		return false;
	}
	return AProjectile::isValid();
}

UAttackFactory* UExplosiveProjectileFactoryTemplate::createFactory(APawn* pawn, const UObject* caller) const {
	if (!isValid())
		return nullptr;
	UExplosiveProjectileFactory* factory = NewObject<UExplosiveProjectileFactory>(caller);
	factory->initialise_UExplosiveProjectileFactory(
		pawn,
		_attackConfig,
		_attackAttributes,
		_projectileConfig,
		_projectileAttributes,
		_explosiveProjectileConfig,
		_explosiveProjectileAttributes,
		_aoeConfig,
		_aoeComponent
	);
	return factory;
}