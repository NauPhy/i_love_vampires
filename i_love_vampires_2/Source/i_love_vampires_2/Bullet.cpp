#include "Bullet.h"
#include "Engine/World.h"
#include "Math/Quat.h"
#include "CollisionShape.h"
#include "Engine/HitResult.h"
#include "CombatantManager.h"
#include "Combatant.h"
#include "Definitions.h"

namespace {
	float dist(float x, float y) {
		return sqrt(pow(x, 2.0) + pow(y, 2.0));
	}
}

void ABullet::performSweep(const FVector& startPos, const FVector& endPos, TArray<struct FHitResult>& OutHits) {
	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_Pawn);
	FCollisionQueryParams params2;
	params2.AddIgnoredActor(this);
	if (_pawnRef.Get() == nullptr)
		return;
	params2.AddIgnoredActor(_pawnRef.Get());
	for (const auto& tempPawn : _effectedPawns) {
		params2.AddIgnoredActor(tempPawn.Get());
	}
	GetWorld()->SweepMultiByObjectType(OutHits, startPos, endPos, FQuat::Identity, params, FCollisionShape::MakeSphere(_radius), params2);
}

void ABullet::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		AActor* hitActor = hit.GetActor();
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
	TWeakObjectPtr<const ACombatant> newTarget = GetWorld()->GetSubsystem<UCombatantManager>()->getRandomEnemyPtr();
	if (newTarget.Get() == nullptr) {
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
	if (_distanceTravelled >= _range) {
		bulletDeath();
		return;
	}
	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, 0, _directionZ) * _speed * delta;
	TArray<struct FHitResult> OutHits;
	performSweep(start, end, OutHits);
	handleSweepResults(OutHits);

	FHitResult* throwaway = nullptr;
	AddActorWorldOffset((end - start), false, throwaway, ETeleportType::TeleportPhysics);
	_distanceTravelled += _speed * delta;
}

void ABullet::initialise_ABullet(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances, float directionX, float directionZ, const FProjectileTemplate& bulletData) {
	initialise_AAttackActor(pawnRef, effect, effectChances);
	initialise_ABullet_int(directionX, directionZ, bulletData);
}
void ABullet::initialise_ABullet(TWeakObjectPtr<APawn> pawnRef, const TArray<EffectStruct>& effect, float directionX, float directionZ, const FProjectileTemplate& bulletData) {
	initialise_AAttackActor(pawnRef, effect);
	initialise_ABullet_int(directionX, directionZ, bulletData);
}
void ABullet::initialise_ABullet_int(float directionX, float directionZ, const FProjectileTemplate& bulletData) {
	_directionX = directionX;
	_directionZ = directionZ;
	_shape = bulletData.shape;
	_radius = bulletData.radius;
	_isHoming = bulletData.isHoming;
	_speed = bulletData.speed;
	_range = bulletData.range;
	_pierce = bulletData.pierce;
	_bounce = bulletData.bounce;
}