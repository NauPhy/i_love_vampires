#include "Bullet.h"
#include "Engine/World.h"
#include "Math/Quat.h"
#include "CollisionShape.h"
#include "Engine/HitResult.h"
#include "CombatantManager.h"
#include "Combatant.h"
#include "Definitions.h"
#include "MyGameplayStatics.h"

namespace {
	float dist(float x, float y) {
		return sqrt(pow(x, 2.0) + pow(y, 2.0));
	}
}

void ABullet::initialise_ABullet(APawn* pawnRef, float directionX, float directionZ) { 
	initialise_AAttackActor(pawnRef); 
	_directionX = directionX; 
	_directionZ = directionZ; 
	_distanceTravelled = 0;

	FProjectileAttributes* attr;
	if (!castAttribute<FProjectileAttributes>(attr))
		return;
	_pierce = attr->_pierce;
	_bounce = attr->_bounce;
}
void ABullet::initialise_ABullet(APawn* pawnRef, float directionX, float directionZ, const FProjectileConfig& config, const FProjectileAttributes& attributes) {
	_config = MakeUnique<FProjectileConfig>(config);
	_attributes = MakeUnique<FProjectileAttributes>(attributes);
	initialise_ABullet(pawnRef, directionX, directionZ);
}

void ABullet::performSweep(const FVector& startPos, const FVector& endPos, TArray<struct FHitResult>& OutHits) {
	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_Pawn);
	FCollisionQueryParams params2;
	params2.AddIgnoredActor(this);
	if (_pawnRef.Get() != nullptr)
		params2.AddIgnoredActor(_pawnRef.Get());
	for (const auto& tempPawn : _effectedPawns) {
		if (tempPawn.Get() != nullptr)
			params2.AddIgnoredActor(tempPawn.Get());
	}
	UWorld* world = GetWorld();
	if (world == nullptr) {
		LOGERROR("ABullet::performSweep - world is null");
		return;
	}
	FProjectileConfig* config;
	if (!castConfig<FProjectileConfig>(config))
		return;
	if (config->_shape == _CIRCLE) {
		world->SweepMultiByObjectType(OutHits, startPos, endPos, FQuat::Identity, params, FCollisionShape::MakeSphere(_radius), params2);
	}
	else {
		LOGERROR("ABullet::performSweep - shape not implemented");
	}
}

void ABullet::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		AActor* hitActor = hit.GetActor();
		//hitActor is in the middle of construction or destruction
		if (hitActor == nullptr)
			continue;
		ACombatant* combatantActor = Cast<ACombatant>(hitActor);
		if (combatantActor == nullptr) {
			LOGERROR("ABullet::handleSweepResults - hitActor is not a combatant");
			continue;
		}
		applyEffect(combatantActor);
		handleBouncePierce();
	}
}

void ABullet::handleBouncePierce() {
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

void ABullet::executeBounce() {
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
		LOGERROR("ABullet::executeBounce - bullet could not find new target to bounce to")
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

void ABullet::Tick(float delta) {
	AAttackActor::Tick(delta);
	FProjectileAttributes* attr;
	if (!castAttribute<FProjectileAttributes>(attr))
		return;
	if (_distanceTravelled >= attr->_range) {
		bulletDeath();
		return;
	}
	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, 0, _directionZ) * attr->_speed * delta;
	TArray<struct FHitResult> OutHits;
	performSweep(start, end, OutHits);
	handleSweepResults(OutHits);

	FHitResult* throwaway = nullptr;
	AddActorWorldOffset((end - start), false, throwaway, ETeleportType::TeleportPhysics);
	_distanceTravelled += attr->_speed * delta;
}