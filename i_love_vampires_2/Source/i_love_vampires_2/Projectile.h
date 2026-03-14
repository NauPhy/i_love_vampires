#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "ProjectileEnum.h"
#include "Projectile.generated.h"
class UProjectileData;
class UProjectileConfig;
class UProjectileAttributes;

UCLASS()
class AProjectile : public AAttackActor {
	GENERATED_BODY()

	const EProjectileShape _CIRCLE = EProjectileShape::circle;

protected:
	float _directionX = 0;
	float _directionZ = 1;
	float _pierce = 0;
	float _bounce = 0;
	float _distanceTravelled = 0;

private:
	void performSweep(const FVector&, const FVector&, TArray<struct FHitResult>&);
	void executeBounce();

protected:
	virtual void bulletDeath() { Destroy(); }
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits);
	void handleBouncePierce();
	void initialise_AProjectile(APawn* pawnRef, float directionX, float directionZ);

public:
	AProjectile() : AAttackActor() {}
	
	void initialise_AProjectile(APawn* pawnRef, float directionX, float directionZ, const UProjectileData* data);
	void initialise_AProjectile(APawn* pawnRef, float directionX, float directionZ, const UProjectileConfig*, const UProjectileAttributes*);
	virtual void Tick(float delta) override;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UProjectileData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, Category = "ProjectileData")
	UProjectileConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "ProjectileData")
	UProjectileAttributes* _attributes;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UProjectileConfig : public UAttackConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	EProjectileShape _shape = static_cast<EProjectileShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	EAttackShape _attackShape = static_cast<EAttackShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	bool _isHoming = false;
	UProjectileConfig() { _attackClass = AProjectile::StaticClass(); }
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UProjectileAttributes : public UAttackAttributes
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileAttributes")
	float _spread = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileAttributes")
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileAttributes")
	float _speed = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileAttributes")
	float _range = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileAttributes")
	float _pierce = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileAttributes")
	float _bounce = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileAttributes")
	float _projectileCount = 1.f;

	void modifyAttributes(const UCombatantAttributes*, const UProjectileAttributes*, UProjectileAttributes*);
};
