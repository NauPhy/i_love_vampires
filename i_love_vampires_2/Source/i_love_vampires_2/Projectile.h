#pragma once
#include "CoreMinimal.h"

#include "AttackActor.h"
class UProjectileConfig;
class UProjectileAttributes;

UCLASS()
class AProjectile : public AAttackActor {
	GENERATED_BODY()

	const EProjectileShape _CIRCLE = EProjectileShape::circle;

protected:
	UPROPERTY()
	UProjectileConfig* _projectileConfig = nullptr;
	UPROPERTY()
	UProjectileAttributes* _projectileAttributes = nullptr;
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

	virtual void factoryInitQuery(const UAttackFactory* factory) override;

public:
	AProjectile() : AAttackActor() {}
	
	void initialise_AProjectile(
		APawn* pawnRef, 
		float directionX, 
		float directionZ, 
		const UAttackConfig* config,
		const UAttackAttributes* attributes,
		const UProjectileConfig*,
		const UProjectileAttributes*);
	virtual void Tick(float delta) override;
};
///////////////////////////////////////////////////////////////////////////////
#include "ProjectileEnum.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UProjectileConfig : public UBaseConfig
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
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UProjectileAttributes : public UBaseAttributes
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
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UProjectileComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UProjectileAttributes* _base;
	UPROPERTY()
	UProjectileAttributes* _final;
	UPROPERTY()
	UProjectileAttributes* _offsets;
	void initialise_UProjectileComponent(const UProjectileAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
	}
	virtual UBaseAttributes* getFinal() const override { return _final; }
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UProjectileFactory : public UAttackFactory
{
	GENERATED_BODY()

	UPROPERTY()
	UProjectileConfig* _projectileConfig;
	UPROPERTY()
	UProjectileComponent* _projectileComponent = nullptr;

	float _directionX = 0;
	float _directionZ = 1;

protected:
	virtual void initProjectile(AProjectile*) const override;
	float getDirectionX() const { return _directionX; }
	float getDirectionZ() const { return _directionZ; }

public:
	void initialise_UProjectileFactory(
		APawn*,
		const UAttackConfig*,
		const UAttackAttributes*,
		const UProjectileConfig*,
		const UProjectileAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UProjectileFactoryTemplate : public UAttackFactoryTemplate {
	GENERATED_BODY()

protected:
	virtual bool isValid() const override;

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UProjectleConfig* _projectileConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UProjectileAttributes* _projectileAttributes;

	virtual UAttackFactory* createFactory(APawn*, const UObject*) const override;
};

#include "Projectile.generated.h"