#include "ExplosiveProjectile.h"
#include "Definitions.h"
#include "AOE.h"
#include "Combatant.h"

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
	if (!IsValid(explosiveProjectileConfig) || !IsValid(explosiveProjectileAttributes) || !IsValid(aoe)) {
		LOGERROR("AExplosiveProjectile::initialise_AExplosiveProjectile - invalid explosive projectile config or attributes");
		return;
	}
	AProjectile::initialise_AProjectile(
		pawnRef,
		directionX,
		directionZ,
		attackConfig,
		attackAttributes,
		projectileConfig,
		projectileAttributes
	);
	_AOE = aoe;
	_explosiveProjectileConfig = DuplicateObject<UExplosiveProjectileConfig>(explosiveProjectileConfig, this);
	_explosiveProjectileAttributes = DuplicateObject<UExplosiveProjectileAttributes>(explosiveProjectileAttributes, this);
}

void AExplosiveProjectile::bulletDeath() {
	if (!IsValid(_AOE)) {
		LOGERROR("AExplosiveProjectile::bulletDeath - aoe is not valid");
		AProjectile::bulletDeath();
		return;
	}
	_AOE->completeDelayedConstruction();
	AProjectile::bulletDeath();
}

void AExplosiveProjectile::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		handleBouncePierce();
	}
}

void AExplosiveProjectile::factoryInitQuery(AAttackFactory* factory) {
	if (!IsValid(factory)) {
		LOGERROR("AExplosiveProjectile::factoryInitQuery - factory is not valid");
		return;
	}
	factory->initExplosiveProjectile(this);
}
///////////////////////////////////////////////////////////////////////////////

void UExplosiveProjectileAttributes::modifyAttributes(const UCombatantAttributes* combatantAttributes, const UExplosiveProjectileAttributes* projectileAttributes, UExplosiveProjectileAttributes* finalAttributes) {
}

///////////////////////////////////////////////////////////////////////////////

void UExplosiveProjectileComponent::modifyAttributes(ABaseAttributeSet* set) {
	if (!IsValid(set)) {
		LOGERROR("UAttackComponent::modifyAttributes - set is not valid");
		return;
	}
	UCombatantAttributes* attr = nullptr;
	if (!set->getModifiers<UCombatantAttributes>(attr))
		return;
	if (!IsValid(_base) || !IsValid(_final)) {
		LOGERROR("UAttackComponent::modifyAttributes - base or final attributes not valid");
		return;
	}
	UExplosiveProjectileAttributes* base = Cast<UExplosiveProjectileAttributes>(_base);
	UExplosiveProjectileAttributes* final = Cast<UExplosiveProjectileAttributes>(_final);
	UExplosiveProjectileAttributes::modifyAttributes(attr, base, final);
}
///////////////////////////////////////////////////////////////////////////////

void AExplosiveProjectileFactory::initialise_AExplosiveProjectileFactory(
	APawn* pawn,
	UCombatantAttributes* comb,
	const UAttackConfig* attackConfig,
	const UAttackAttributes* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributes* projectileAttributes,
	const UExplosiveProjectileConfig* explosiveProjectileConfig,
	const UExplosiveProjectileAttributes* explosiveProjectileAttributes,
	const UAOEConfig* aoeConfig,
	const UAOEAttributes* aoeAttributes)
{
	if (!IsValid(explosiveProjectileConfig) || !IsValid(explosiveProjectileAttributes) || !IsValid(aoeConfig) || !IsValid(aoeAttributes)) {
		LOGERROR("AExplosiveProjectileFactory::initialise_AExplosiveProjectileFactory - invalid config or attributes");
		return;
	}
	initialise_AProjectileFactory(pawn, comb, attackConfig, attackAttributes, projectileConfig, projectileAttributes);
	_explosiveProjectileConfig = DuplicateObject<UExplosiveProjectileConfig>(explosiveProjectileConfig, this);
	_explosiveProjectileComponent = NewObject<UExplosiveProjectileComponent>(this);
	_explosiveProjectileComponent->initialise_UExplosiveProjectileComponent(explosiveProjectileAttributes);
	_AOEConfig = DuplicateObject<UAOEConfig>(aoeConfig, this);
	_AOEComponent = NewObject<UAOEComponent>(this);
	_AOEComponent->initialise_UAOEComponent(aoeAttributes);
}

void AExplosiveProjectileFactory::launchAttack(const FVector& forward) {
	if (!IsValid(_projectileConfig)) {
		LOGERROR("AExplosiveProjectileFactory::launchAttack - projectile config is not valid");
		return;
	}
	EAttackShape type = _projectileConfig->_attackShape;
	if (type == EAttackShape::fan) {
		launchAttack_fan(forward);
	}
	else {
		LOGERROR("AExplosiveProjectileFactory::launchAttack - unsupported attack shape");
		return;
	}
}

void AExplosiveProjectileFactory::launchAttack_fan(const FVector& forward) {
	if (!_owner.IsValid())
		return;
	UProjectileComponent* comp = getComponent<UProjectileComponent>();
	if (!IsValid(comp)) {
		LOGERROR("AExplosiveProjectileFactory::launchAttack_fan - projectile component is not valid");
		return;
	}
	if (!IsValid(_projectileConfig)) {
		LOGERROR("AExplosiveProjectileFactory::launchAttack_fan - projectile config is not valid");
		return;
	}
	UProjectileAttributes* disc = comp->getDiscretizedFinal<UProjectileAttributes>(this);
	if (!IsValid(disc)) {
		LOGERROR("AExplosiveProjectileFactory::launchAttack_fan - discretized projectile attributes is not valid");
		return;
	}
	for (int i = 0; i < static_cast<int>(disc->_projectileCount); i++) {
		if (_tempAOE.IsValid()) {
			LOGERROR("AExplosiveProjectileFactory::launchAttack - tempAOE is already valid when launching attack");
			return;
		}
		FVector direction = AProjectileFactory::launchAttack_fan_getDirection(disc, forward, i);
		setDirectionX(direction.X);
		setDirectionZ(direction.Z);
		{
			AAOE* aoe = unrealHelpers::spawnActorOnTopOfMe<AAOE>(_owner.Get());
			if (!IsValid(aoe)) {
				LOGERROR("AExplosiveProjectileFactory::launchAttack_fan - failed to spawn aoe");
				return;
			}
			_tempAOE = TWeakObjectPtr<AAOE>(aoe);
		}
		AExplosiveProjectile* newAttack = unrealHelpers::spawnActorOnTopOfMe<AExplosiveProjectile>(_owner.Get());
		if (!IsValid(newAttack)) {
			LOGERROR("AExplosiveProjectileFactory::launchAttack_fan - failed to spawn explosive projectile");
			// Important! GC will not collect this
			_tempAOE->Destroy();
			_tempAOE = nullptr;
			return;
		}
		_tempAOE->factoryInitQuery(this);
		newAttack->factoryInitQuery(this);
		_tempAOE = nullptr;
	}
}

void AExplosiveProjectileFactory::initAOE(AAOE* attack) {
	if (!_tempAOE.IsValid() || !IsValid(attack)) {
		LOGERROR("AExplosiveProjectileFactory::initAOE - tempAOE is not valid");
		return;
	}
	if (_tempAOE.Get() != attack) {
		LOGERROR("AExplosiveProjectileFactory::initAOE - tempAOE does not match attack");
		return;
	}
	if (!_owner.IsValid())
		return;
	APawn* pawnRef = Cast<APawn>(_owner.Get());
	_tempAOE->initialise_AAOE(
		pawnRef,
		_attackConfig,
		_attackComponent->getFinal<UAttackAttributes>(),
		_AOEConfig,
		_AOEComponent->getFinal<UAOEAttributes>(),
		true
	);
}

void AExplosiveProjectileFactory::initExplosiveProjectile(AExplosiveProjectile* attack) {
	if (!IsValid(attack)) {
		LOGERROR("AExplosiveProjectileFactory::initExplosiveProjectile - attack is not valid");
		return;
	}
	if (!_tempAOE.IsValid()) {
		LOGERROR("AExplosiveProjectileFactory::initExplosiveProjectile - tempAOE not valid when initializing explosive projectile");
		return;
	}
	if (!_owner.IsValid())
		return;
	APawn* pawnRef = Cast<APawn>(_owner.Get());
	attack->initialise_AExplosiveProjectile(
		pawnRef,
		getDirectionX(),
		getDirectionZ(),
		_tempAOE.Get(),
		_attackConfig,
		_attackComponent->getDiscretizedFinal<UAttackAttributes>(this),
		_projectileConfig,
		_projectileComponent->getDiscretizedFinal<UProjectileAttributes>(this),
		_explosiveProjectileConfig,
		_explosiveProjectileComponent->getDiscretizedFinal<UExplosiveProjectileAttributes>(this)
	);
}

///////////////////////////////////////////////////////////////////////////////

AAttackFactory* UExplosiveProjectileFactoryTemplate::createFactory(APawn* pawn, UCombatantAttributes* comb) const {
	if (!IsValid(pawn)) {
		LOGERROR("UExplosiveProjectileFactoryTemplate::createFactory - pawn is not valid");
		return nullptr;
	}
	AExplosiveProjectileFactory* factory = unrealHelpers::spawnActorOnTopOfMe<AExplosiveProjectileFactory>(pawn);
	if (!IsValid(factory)) {
		LOGERROR("UExplosiveProjectileFactoryTemplate::createFactory - failed to create factory");
		return nullptr;
	}
	factory->initialise_AExplosiveProjectileFactory(
		pawn,
		comb,
		_attackConfig,
		_attackAttributes,
		_projectileConfig,
		_projectileAttributes,
		_explosiveProjectileConfig,
		_explosiveProjectileAttributes,
		_AOEConfig,
		_AOEAttributes
	);
	return factory;
}