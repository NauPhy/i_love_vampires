#pragma once
#include "CoreMinimal.h"

#include "Projectile.h"
class AAOE;
class UExplosiveProjectileConfig;
class UExplosiveProjectileAttributes;

UCLASS()
class AExplosiveProjectile : public AProjectile {
	GENERATED_BODY()

	UPROPERTY()
	AAOE* _AOE = nullptr;

protected:
	UPROPERTY()
	UExplosiveProjectileConfig* _explosiveProjectileConfig = nullptr;
	UPROPERTY()
	UExplosiveProjectileAttributes* _explosiveProjectileAttributes = nullptr;

	virtual void bulletDeath() override;
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits) override;
	virtual void factoryInitQuery(const UAttackFactory* factory) override;

public:
	AExplosiveProjectile() : AProjectile() {}

	void initialise_AExplosiveProjectile(
		APawn* pawnRef,
		float directionX,
		float directionZ,
		AAOE* aoe,
		const UAttackConfig* config,
		const UAttackAttributes* attributes,
		const UProjectileConfig* projectileConfig,
		const UProjectileAttributes* projectileAttributes,
		const UExplosiveProjectileConfig* explosiveProjectileConfig,
		const UExplosiveProjectileAttributes* explosiveProjectileAttributes);

	const AAOE* getAOE() const { return _AOE; }
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileConfig : public UBaseConfig
{
	GENERATED_BODY()
public:
	UExplosiveProjectileConfig() { _attackClass = AExplosiveProjectile::StaticClass(); }
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	virtual void modifyAttributes(const UCombatantAttributes*, const UExplosiveProjectileAttributes*, UExplosiveProjectileAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileAttributeComponent : public UProjectileAttributeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UExplosiveProjectileAttributes* _base;
	UPROPERTY()
	UExplosiveProjectileAttributes* _final;
	UPROPERTY()
	UExplosiveProjectileAttributes* _offsets;
	void initialise_UExplosiveProjectileComponent(const UExplosiveProjectileAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
	}
	virtual UBaseAttributes* getFinal() const override { return _final; }
};

///////////////////////////////////////////////////////////////////////////////
class UAOEConfig;
class UAOEComponent;

UCLASS()
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileFactory : public UProjectileFactory
{
	GENERATED_BODY()

	UPROPERTY()
	UExplosiveProjectileConfig* _explosiveProjectileConfig = nullptr;
	UPROPERTY()
	UExplosiveProjectileComponent* _explosiveProjectileComponent = nullptr;
	UPROPERTY()
	UAOEConfig* _aoeConfig = nullptr;
	UPROPERTY()
	UAOEComponent* _aoeComponent = nullptr;

protected:
	virtual void initExplosiveProjectile(AExplosiveProjectile*) const override;
	virtual void initAOE(AAOE*) const override;
public:
	virtual void initialise_UAttackFactory(
		APawn*,
		const UAttackConfig*,
		const UAttackAttributes*,
		const UProjectileConfig*,
		const UProjectileAttributes*,
		const UExplosiveProjectileConfig*,
		const UExplosiveProjectileAttributes*,
		const UAOEConfig*,
		const UAOEAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileFactoryTemplate : public UProjectileFactoryTemplate {
	GENERATED_BODY()

protected:
	virtual bool isValid() const override;

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UExplosiveProjectileConfig* _explosiveProjectileConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UExplosiveProjectileAttributes* _explosiveProjectileAttributes;

	virtual UAttackFactory* createFactory(APawn*, const UObject*) const override;
};

#include "ExplosiveProjectile.generated.h"