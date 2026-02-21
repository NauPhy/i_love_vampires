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
	void initialise_ABullet(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances, float directionX, float directionZ, int shape, float radius, bool isHoming, float speed, float range, float pierce, float bounce) {
		initialise_AAttackActor(effect, effectChances);
		_directionX = directionX;
		_directionZ = directionZ;
		_shape = shape;
		_radius = radius;
		_isHoming = isHoming;
		_speed = speed;
		_range = range;
		_pierce = pierce;
		_bounce = bounce;
		_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
	}
private:
	float _directionX = 0;
	float _directionZ = 1;
	int _shape = 0;
	float _radius = 1;
	bool _isHoming = false;
	float _speed = 0;
	float _range = 0;
	float _pierce = 0;
	float _bounce = 0;
	float _distanceTravelled = 0;
	TWeakObjectPtr<APawn> _pawnRef = nullptr;

	void performSweep(const FVector&, const FVector&, TArray<struct FHitResult>&);
	void handleSweepResults(const TArray<struct FHitResult>&);
	void executeBounce();
};
