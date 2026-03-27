#include "Projectile.h"
#include "Definitions.h"

#include "Math/Quat.h"
#include "CollisionShape.h"
#include "Engine/HitResult.h"
#include "CombatantManager.h"
#include "Combatant.h"
#include "Engine/World.h"
#include "MyGameplayStatics.h"
#include "helpers.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"

namespace {
	float dist(float x, float y) {
		return sqrt(pow(x, 2.0) + pow(y, 2.0));
	}
}

void AProjectile::initialise_AProjectile(ProjectileInitStruct& temp)
{
	initialise_AAttackActor(temp._attack);
	_projectileConfig = temp._projectileConfig;
	_projectileAttributes = std::make_unique<ProjectileAttributes>(temp._projectileAttributes);
	_directionX = temp._directionX; 
	_directionZ = temp._directionZ; 
}

void AProjectile::BeginPlay() {
	if (!IsValid(_projectileConfig.Get()) || _projectileAttributes.get() == nullptr) {
		LOGERROR("AProjectile::BeginPlay - _projectileConfig is not valid");
		return;
	}
	Super::BeginPlay();
	_distanceTravelled = 0;
	_pierce = _projectileAttributes->_pierce.getFinal();
	_bounce = _projectileAttributes->_bounce.getFinal();
	FVector currentScale = GetActorScale3D();
	SetActorScale3D(currentScale * _projectileAttributes->_radius.getFinal());
}

void AProjectile::performSweep(const FVector& startPos, const FVector& endPos, TArray<struct FHitResult>& OutHits) {
	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_Pawn);
	FCollisionQueryParams params2;
	params2.AddIgnoredActor(this);
	if (_pawnRef.IsValid())
		params2.AddIgnoredActor(_pawnRef.Get());
	for (const auto& tempPawn : _effectedPawns) {
		if (!tempPawn.IsValid())
			continue;
		if (tempPawn.Get() != nullptr)
			params2.AddIgnoredActor(tempPawn.Get());
	}
	UWorld* world = GetWorld();
	if (!IsValid(world)) {
		LOGERROR("AProjectile::performSweep - world is invalid");
		return;
	}
	if (_projectileConfig->_shape == _CIRCLE) {
		world->SweepMultiByObjectType(OutHits, startPos, endPos, FQuat::Identity, params, FCollisionShape::MakeSphere(_projectileAttributes->_radius.getFinal()), params2);
	}
	else {
		LOGERROR("AProjectile::performSweep - shape not implemented");
	}
}

void AProjectile::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		AActor* hitActor = hit.GetActor();
		//hitActor is in the middle of construction or destruction
		if (!IsValid(hitActor))
			continue;
		ACombatant* combatantActor = Cast<ACombatant>(hitActor);
		if (!IsValid(combatantActor)) {
			LOGERROR("AProjectile::handleSweepResults - hitActor is not a combatant");
			continue;
		}
		applyEffect(combatantActor);
		handleBouncePierce();
	}
}

void AProjectile::handleBouncePierce() {
	if (_pierce == 0) {
		if (_bounce == 0) {
			bulletDeath();
			return;
		}
		else {
			executeBounce();
			_bounce -= 1;
		}
	}
	else {
		_pierce -= 1;
	}
}

void AProjectile::executeBounce() {
	UCombatantManager* manager;
	if (!MyGameplayStatics::getCombatantManager(this, manager))
		return;
	// It's possible that combatantManager will return a reference to a combatant that is in the middle of construction or destruction.
	// If this happens 10 times in a row, there is likely a bug.
	TWeakObjectPtr<ACombatant> newTarget = nullptr;
	for (int i = 0; i < 10; i++) {
		if (newTarget.IsValid())
			break;
		if (!manager->getRandomEnemyPtr(newTarget)) {
			bulletDeath();
			return;
		}
	}
	if (!newTarget.IsValid()) {
		LOGERROR("AProjectile::executeBounce - bullet could not find new target to bounce to")
		bulletDeath();
		return;
	}
	FVector myLocation = GetActorLocation();
	FVector targetLocation = newTarget->GetActorLocation();
	FVector difference = targetLocation - myLocation;
	FVector norm = difference / dist(difference.X, difference.Y);
	_directionX = norm.X;
	_directionZ = norm.Y;
}

void AProjectile::Tick(float delta) {
	AAttackActor::Tick(delta);
	if (_distanceTravelled >= _projectileAttributes->_range.getFinal()) {
		bulletDeath();
		return;
	}
	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, 0, _directionZ) * _projectileAttributes->_speed.getFinal() * delta;
	TArray<struct FHitResult> OutHits;
	performSweep(start, end, OutHits);
	handleSweepResults(OutHits);

	FHitResult* throwaway = nullptr;
	AddActorWorldOffset((end - start), false, throwaway, ETeleportType::TeleportPhysics);
	_distanceTravelled += _projectileAttributes->_speed.getFinal() * delta;
}
///////////////////////////////////////////////////////////////////////////////

void ProjectileAttributes::modifyAttributes(const CombatantAttributes* combatantAttributes) {
	if (combatantAttributes == nullptr)
		return;
	_radius.modify(_radius._base * combatantAttributes->_projectileSize.getFinal());
	_speed.modify(_speed._base * combatantAttributes->_projectileSpeed.getFinal());
	_pierce.modify(_pierce._base + combatantAttributes->_bonusPierce.getFinal());
	_bounce.modify(_bounce._base + combatantAttributes->_bonusBounces.getFinal());
	_projectileCount.modify(_projectileCount._base + combatantAttributes->_bonusProjectiles.getFinal());
}
///////////////////////////////////////////////////////////////////////////////

ProjectileFactory::ProjectileFactory(
	ACombatant* pawn,
	const UAttackConfig* attackConfig,
	const UAttackAttributeData* attackAttributes,
	const UProjectileConfig* projectileConfig,
	const UProjectileAttributeData* projectileAttributes) :
	AttackFactory(pawn, attackConfig, attackAttributes), 
	_projectileConfig(projectileConfig), 
	_projectileAttributes(pawn, projectileAttributes)
{
	if (!IsValid(_projectileConfig.Get())) {
		LOGERROR("AProjectileFactory::initialise_AProjectileFactory - invalid projectile config");
		return;
	}
}

void ProjectileFactory::launchAttack(const FVector& forward) {
	EAttackShape type = _projectileConfig->_attackShape;
	if (type == EAttackShape::fan) {
		launchAttack_fan(forward);
	}
	else {
		LOGERROR("AProjectileFactory::launchAttack - attack shape not implemented");
		return;
	}
}

FVector ProjectileFactory::launchAttack_fan_getDirection(const FVector& forward, int projectileIndex, int projectileCount) {	
	float angle = 0;
	const float tempSpread = _projectileAttributes.getMemberDiscretized(&ProjectileAttributes::_spread);
	if (helpers::nearEq(1, projectileCount)) {
		angle = FMath::FRandRange(-tempSpread / 2.0, tempSpread / 2.0);
	}
	else {
		float proportion = projectileIndex / (projectileCount - 1);
		angle = proportion * tempSpread - tempSpread / 2.0;
	}
	FRotator rot = FRotator(angle, 0, 0);
	return rot.RotateVector(forward);
}

void ProjectileFactory::launchAttack_fan(const FVector& forward) {
	if (!IsValid(_owner.Get()))
		return;
	const int projectileCount = static_cast<int>(_projectileAttributes.getMemberDiscretized(&ProjectileAttributes::_projectileCount));
	for (int i = 0; i < projectileCount; i++) {
		FVector direction = launchAttack_fan_getDirection(forward, i, projectileCount);
		_directionX = direction.X;
		_directionZ = direction.Z;

		AProjectile* projectile = unrealHelpers::spawnActorOnTopOfMe<AProjectile>(_owner.Get());
		if (!IsValid(projectile)) {
			LOGERROR("AProjectileFactory::launchAttack_fan - failed to spawn projectile");
			continue;
		}
		{
			ProjectileInitStruct temp = getProjectileInit();
			projectile->initialise_AProjectile(temp);
		}
	}
}

void ProjectileFactory::tick(float delta) {
	const CombatantAttributes& temp = _owner->getAttributes();
	_projectileAttributes.tick(delta, getStatusEffects(), &temp);
	AttackFactory::tick(delta);
}