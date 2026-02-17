#include "Bullet.h"
#include "Engine/World.h"
#include "Math/Quat.h"
#include "CollisionShape.h"
#include "Engine/HitResult.h"
#include "EnemySubsystem.h"

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
	GetWorld()->SweepMultiByObjectType(OutHits, startPos, endPos, FQuat::Identity, params, FCollisionShape::MakeSphere(_radius), params2);
}

void ABullet::handleSweepResults(const TArray<struct FHitResult>& hits) {
	for (const FHitResult& hit : hits) {
		AActor* hitActor = hit.GetActor();
		applyEffect(hitActor);
		if (_pierce == 0) {
			if (_bounce == 0) {
				Destroy();
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
}

void ABullet::executeBounce() {
	TWeakObjectPtr<const AActor> newTarget = GetGameInstance()->GetSubsystem<UEnemySubsystem>()->getRandomEnemyPtr();
	if (newTarget.Get() == nullptr) {
		Destroy();
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
	static float distanceTravelled = 0;
	if (distanceTravelled >= _range) {
		Destroy();
		return;
	}
	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, 0, _directionZ) * _speed * delta;
	TArray<struct FHitResult> OutHits;
	performSweep(start, end, OutHits);
	handleSweepResults(OutHits);

	FHitResult* throwaway = nullptr;
	AddActorWorldOffset((end - start), false, throwaway, ETeleportType::TeleportPhysics);
}

