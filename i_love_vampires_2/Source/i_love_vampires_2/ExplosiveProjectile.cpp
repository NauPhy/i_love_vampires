#include "ExplosiveProjectile.h"
#include "Definitions.h"
#include "AOE.h"
#include "Combatant.h"
#include "unrealHelpers.h"

void AExplosiveProjectile::initialise_AExplosiveProjectile(ExplosiveProjectileInitStruct& temp) {
	AProjectile::initialise_AProjectile(temp._projectile);
	_AOE = temp._AOE;
	_explosiveProjectileConfig = temp._explosiveProjectileConfig;
	_explosiveProjectileAttributes = std::make_unique<ExplosiveProjectileAttributes>(temp._explosiveProjectileAttributes);
}

void AExplosiveProjectile::BeginPlay() {
	if (!IsValid(_explosiveProjectileConfig.Get()) || _explosiveProjectileAttributes.get() == nullptr || !IsValid(_AOE)) {
		LOGERROR("AExplosiveProjectile::initialise_AExplosiveProjectile - invalid explosive projectile config or attributes");
		return;
	}
	Super::BeginPlay();
}

void AExplosiveProjectile::bulletDeath() {
	if (!IsValid(_AOE)) {
		LOGERROR("AExplosiveProjectile::bulletDeath - aoe is not valid");
		AProjectile::bulletDeath();
		return;
	}
	_AOE->SetActorLocation(GetActorLocation());
	_AOE->completeDelayedConstruction();
	AProjectile::bulletDeath();
}

void AExplosiveProjectile::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		handleBouncePierce();
	}
}
///////////////////////////////////////////////////////////////////////////////

ExplosiveProjectileFactory::ExplosiveProjectileFactory(
	ACombatant* pawn,
	const UAttackConfig* attackConfig,
	const UAttackAttributeData* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributeData* projectileAttributes,
	const UExplosiveProjectileConfig* explosiveProjectileConfig,
	const UExplosiveProjectileAttributeData* explosiveProjectileAttributes,
	const UAOEConfig* aoeConfig,
	const UAOEAttributeData* aoeAttributes) :
	ProjectileFactory(pawn, attackConfig, attackAttributes, projectileConfig, projectileAttributes),
	_explosiveProjectileConfig(explosiveProjectileConfig),
	_explosiveProjectileAttributes(pawn, explosiveProjectileAttributes),
	_AOEConfig(aoeConfig),
	_AOEAttributes(pawn, aoeAttributes)
{
	if (!IsValid(_explosiveProjectileConfig.Get()) || !(_AOEConfig.Get())) {
		LOGERROR("AExplosiveProjectileFactory::AExplosiveProjectileFactory - invalid explosive projectile config or aoe config");
		return;
	}
}

void ExplosiveProjectileFactory::launchAttack(const FVector& forward) {
	EAttackShape type = _projectileConfig->_attackShape;
	if (type == EAttackShape::fan) {
		launchAttack_fan(forward);
	}
	else {
		LOGERROR("AExplosiveProjectileFactory::launchAttack - unsupported attack shape");
		return;
	}
}

void ExplosiveProjectileFactory::launchAttack_fan(const FVector& forward) {
	if (!IsValid(_owner.Get()))
		return;
	const int projectileCount = static_cast<int>(_projectileAttributes.getMemberDiscretized(&ProjectileAttributes::_projectileCount));
	for (int i = 0; i < projectileCount; i++) {
		if (_tempAOE.IsValid()) {
			LOGERROR("AExplosiveProjectileFactory::launchAttack - tempAOE is already valid when launching attack");
			return;
		}
		FVector direction = ProjectileFactory::launchAttack_fan_getDirection(forward, i, projectileCount);
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
		{
			AOEInitStruct temp = getAOEInit();
			_tempAOE->initialise_AAOE(temp);
		}
		{
			ExplosiveProjectileInitStruct temp = getExplosiveProjectileInit();
			newAttack->initialise_AExplosiveProjectile(temp);
		}
		_tempAOE = nullptr;
	}
}

ExplosiveProjectileInitStruct ExplosiveProjectileFactory::getExplosiveProjectileInit() const {
	ExplosiveProjectileAttributes temp = _explosiveProjectileAttributes.getCore();
	temp.discretizeFull();
	ExplosiveProjectileInitStruct ret = { ProjectileFactory::getProjectileInit(), _tempAOE.Get(), _explosiveProjectileConfig.Get(), temp};
	return ret;
}

AOEInitStruct ExplosiveProjectileFactory::getAOEInit() const {
	AOEAttributes temp = _AOEAttributes.getCore();
	temp.discretizeFull();
	AOEInitStruct ret = { AttackFactory::getAttackInit(), _AOEConfig.Get(), temp };
	return ret;
}

void ExplosiveProjectileFactory::tick(float delta) {
	const CombatantAttributes& temp = _owner->getAttributes();
	_explosiveProjectileAttributes.tick(delta, getStatusEffects(), &temp);
	_AOEAttributes.tick(delta, getStatusEffects(), &temp);
	ProjectileFactory::tick(delta);
}