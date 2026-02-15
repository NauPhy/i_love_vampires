#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "Bullet.generated.h"
class UGameplayEffectSpecHandle;

UCLASS()
class ABullet : public AAttackActor {
	GENERATED_BODY()
public:
	ABullet() : AAttackActor() {
	}
	virtual void Tick(float delta) override;

	// This is including attribute mods
	UFUNCTION(BlueprintCallable)
	void initialise_ABullet(float directionX, float directionY, int shape, float radius, bool isHoming, float speed, float range, float pierce, float bounce) {
		_directionX = directionX;
		_directionY = directionY;
		_shape = shape;
		_radius = radius;
		_isHoming = isHoming;
		_speed = speed;
		_range = range;
		_pierce = pierce;
		_bounce = bounce;
	}
private:
	float _directionX = 0;
	float _directionY = 1;
	int _shape = 0;
	float _radius = 1;
	bool _isHoming = false;
	float _speed = 0;
	float _range = 0;
	float _pierce = 0;
	float _bounce = 0;

	void performSweep(TArray<struct FHitResult>&,float);
	void handleSweepResults(const TArray<struct FHitResult>&);
	void executeBounce();
};
