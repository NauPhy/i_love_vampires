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

void ABullet::performSweep(TArray<struct FHitResult>& OutHits, float delta) {
	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, _directionY, 0) * _speed * delta;
	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_Pawn);
	FCollisionQueryParams params2;
	params2.AddIgnoredActor(this);
	GetWorld()->SweepMultiByObjectType(OutHits, start, end, FQuat::Identity, params, FCollisionShape::MakeSphere(_radius), params2);
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
	_directionY = norm.Y;
}

void ABullet::Tick(float delta) {
	static float distanceTravelled = 0;
	if (distanceTravelled >= _range) {
		Destroy();
		return;
	}
	TArray<struct FHitResult> OutHits;
	performSweep(OutHits, delta);
	handleSweepResults(OutHits);
}

