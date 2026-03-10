#include "Bullet.h"
#include "Engine/World.h"
#include "Math/Quat.h"
#include "CollisionShape.h"
#include "Engine/HitResult.h"
#include "CombatantManager.h"
#include "Combatant.h"
#include "Definitions.h"
#include "BulletUEnum.h"
#include "EnumConverter.h"

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
	if (_shape == _CIRCLE) {
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
	TWeakObjectPtr<ACombatant> newTarget = nullptr;
	{
		UWorld* world = GetWorld();
		if (world == nullptr) {
			LOGERROR("ABullet::executeBounce - world is null");
			return;
		}
		UCombatantManager* manager = world->GetSubsystem<UCombatantManager>();
		if (manager == nullptr) {
			LOGERROR("ABullet::executeBounce - manager is null");
			return;
		}
		if (!manager->getRandomEnemyPtr(newTarget)) {
			bulletDeath();
			return;
		}
	}
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

void ABullet::initialise_ABullet(APawn* pawnRef, const TArray<FEffectStruct>& effects, float directionX, float directionZ, const FProjectileTemplate& bulletData) {
	initialise_AAttackActor(pawnRef, effects);
	initialise_ABullet_int(directionX, directionZ, bulletData);
}
void ABullet::initialise_ABullet(TWeakObjectPtr<APawn> pawnRef, const TArray<FEffectStruct>& effects, float directionX, float directionZ, const FProjectileTemplate& bulletData) {
	initialise_AAttackActor(pawnRef, effects);
	initialise_ABullet_int(directionX, directionZ, bulletData);
}
void ABullet::initialise_ABullet_int(float directionX, float directionZ, const FProjectileTemplate& bulletData) {
	_directionX = directionX;
	_directionZ = directionZ;
	auto converted = EnumConverter<ProjectileShape::MyEnum, EProjectileShape>::toStdEnum(bulletData._shape);
	_shape = converted;
	_radius = bulletData._radius;
	_isHoming = bulletData._isHoming;
	_speed = bulletData._speed;
	_range = bulletData._range;
	_pierce = bulletData._pierce;
	_bounce = bulletData._bounce;
}