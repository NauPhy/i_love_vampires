#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "ProjectileTemplate.h"
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
	void initialise_ABullet(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances, float directionX, float directionZ, const FProjectileTemplate& bulletData);
	void initialise_ABullet(TWeakObjectPtr<APawn> pawnRef, const TArray<EffectStruct>& effect, float directionX, float directionZ, const FProjectileTemplate& bulletData);

protected: 
	UFUNCTION(BlueprintNativeEvent)
	void bulletDeath();
	virtual void bulletDeath_Implementation() {
		Destroy();
	}
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits);
	void handleBouncePierce();
private:
	void initialise_ABullet_int(float directionX, float directionZ, const FProjectileTemplate& bulletData);
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

	void performSweep(const FVector&, const FVector&, TArray<struct FHitResult>&);
	void executeBounce();
};
