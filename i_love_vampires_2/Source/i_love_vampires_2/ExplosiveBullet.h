#pragma once
#include "CoreMinimal.h"
#include "Bullet.h"
#include "AOETemplate.h"
#include "ExplosiveBullet.generated.h"
class AAOE;

UCLASS()
class AExplosiveBullet : public ABullet {
	GENERATED_BODY()
public:
	AExplosiveBullet() : ABullet() {
	}

	// This is including attribute mods
	UFUNCTION(BlueprintCallable)
	void initialise_AExplosiveBullet(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances, float directionX, float directionZ, const FProjectileTemplate& projectileData, const FAOETemplate& explosionData);

protected:
	virtual void bulletDeath_Implementation() override;
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits) override;
	UFUNCTION(BlueprintCallable)
	float getExplosionRadius() const {
		return _explosionData.radius;
	}
	UFUNCTION(BlueprintCallable)
	void finishExplosionInitialisation(AAOE* aoe);
private:
	FAOETemplate _explosionData;
};
