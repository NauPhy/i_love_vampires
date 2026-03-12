#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "ProjectileEnum.h"
#include "ProjectileConfig.h"
#include "ProjectileAttributes.h"
#include "Bullet.generated.h"

UCLASS()
class ABullet : public AAttackActor {
	GENERATED_BODY()

	const EProjectileShape _CIRCLE = EProjectileShape::circle;

protected:
	float _directionX = 0;
	float _directionZ = 1;
	float _pierce = 0;
	float _bounce = 0;
	float _distanceTravelled = 0;

public:
	ABullet() : AAttackActor() {}
	void initialise_ABullet(APawn* pawnRef, float directionX, float directionZ) { initialise_AAttackActor(pawnRef); _directionX = directionX; _directionZ = directionZ; }
	void initialise_ABullet(APawn* pawnRef, float directionX, float directionZ, const FProjectileConfig& config, const FProjectileAttributes& attributes);
	virtual void Tick(float delta) override;

protected: 
	virtual void bulletDeath() { Destroy(); }
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits);
	void handleBouncePierce();

private:
	void performSweep(const FVector&, const FVector&, TArray<struct FHitResult>&);
	void executeBounce();
};
