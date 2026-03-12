#pragma once
#include "CoreMinimal.h"
#include "Bullet.h"
#include "ExplosiveProjectileConfig.h"
#include "ExplosiveBullet.generated.h"
class AAOE;

UCLASS()
class AExplosiveBullet : public ABullet {
	GENERATED_BODY()

	UPROPERTY()
	FAOEConfig _explosionData;
	UPROPERTY()
	FAOEAttributes _explosionAttributes;

public:
	AExplosiveBullet() : ABullet() {}
	void initialise_AExplosiveBullet(
		APawn* pawnRef,
		float directionX,
		float directionZ
		) {initialise_ABullet(pawnRef, directionX, directionZ);}
	void initialise_AExplosiveBullet(
		APawn* pawnRef,
		float directionX,
		float directionZ,
		const FExplosiveProjectileConfig& config,
		const FProjectileAttributes& attributes
		);

protected:
	virtual void bulletDeath() override;
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits) override;
};
