#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "AOE.h"
#include "ExplosiveProjectile.generated.h"
class AAOE;
class UExplosiveProjectileData;
class UExplosiveProjectileConfig;
class UExplosiveProjectileAttributes;

UCLASS()
class AExplosiveProjectile : public AProjectile {
	GENERATED_BODY()

	UPROPERTY()
	AAOE* _aoe = nullptr;

protected:
	virtual void bulletDeath() override;
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits) override;
	void initialise_AExplosiveProjectile(
		APawn* pawnRef,
		float directionX,
		float directionZ,
		AAOE* aoe
	) {initialise_AProjectile(pawnRef, directionX, directionZ); _aoe = aoe;}

public:
	AExplosiveProjectile() : AProjectile() {}

	void initialise_AExplosiveProjectile(
		APawn* pawnRef,
		float directionX,
		float directionZ,
		const UExplosiveProjectileData*,
		AAOE* aoe
		);
	void initialise_AExplosiveProjectile(
		APawn* pawnRef,
		float directionX,
		float directionZ,
		const UExplosiveProjectileConfig*,
		const UExplosiveProjectileAttributes*,
		AAOE* aoe
	);

	const AAOE* getAOE() const { return _aoe; }
	//virtual static void getAttributeType() override { return UExplosiveProjectileAttributes::StaticClass(); }
	//static void modifyAttributes(const FCombatantAttributes*, const FExplosiveProjectileAttributes*, FExplosiveProjectileAttributes*);
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, Category = "ExplosiveProjectileData")
	UExplosiveProjectileConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "ExplosiveProjectileData")
	UExplosiveProjectileAttributes* _attributes;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileConfig : public UProjectileConfig
{
	GENERATED_BODY()
public:
	UExplosiveProjectileConfig() { _attackClass = AExplosiveProjectile::StaticClass(); }
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileAttributes : public UProjectileAttributes
{
	GENERATED_BODY()

public:
	virtual void modifyAttributes(const UCombatantAttributes*, const UExplosiveProjectileAttributes*, UExplosiveProjectileAttributes*);
};