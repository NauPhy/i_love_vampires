#pragma once
#include "CoreMinimal.h"
//
#include "Projectile.h"
//
#include "ExplosiveProjectile.generated.h"
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
	virtual void factoryInitQuery(AAttackFactory* factory) override;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileConfig : public UBaseConfig
{
	GENERATED_BODY()
public:
	UExplosiveProjectileConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	static void modifyAttributes(const UCombatantAttributes*, const UExplosiveProjectileAttributes*, UExplosiveProjectileAttributes*);
	virtual UExplosiveProjectileAttributes* getDiscretizedCopy(UObject* outer) const override {
		if (!IsValid(outer)) {
			LOGERROR("UExplosiveProjectileAttributes::getDiscretizedCopy - outer not valid");
			return nullptr;
		}
		return DuplicateObject<UExplosiveProjectileAttributes>(this, outer, FName());
	}
	UExplosiveProjectileAttributes(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	void initialise_UExplosiveProjectileComponent(const UExplosiveProjectileAttributes* baseAttributes) {
		if (!IsValid(baseAttributes)) {
			LOGERROR("UExplosiveProjectileComponent::initialise_UExplosiveProjectileComponent - baseAttributes not valid");
			return;
		}
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
		zeroOffsets();
	}
	virtual void modifyAttributes(ABaseAttributeSet* set) override;
};

///////////////////////////////////////////////////////////////////////////////
class UAOEConfig;
class UAOEAttributes;
class UAOEComponent;

UCLASS()
class I_LOVE_VAMPIRES_2_API AExplosiveProjectileFactory : public AProjectileFactory
{
	GENERATED_BODY()

	TWeakObjectPtr<AAOE> _tempAOE = nullptr;

protected:
	UPROPERTY()
	UExplosiveProjectileConfig* _explosiveProjectileConfig = nullptr;
	UPROPERTY()
	UExplosiveProjectileComponent* _explosiveProjectileComponent = nullptr;
	UPROPERTY()
	UAOEConfig* _AOEConfig = nullptr;
	UPROPERTY()
	UAOEComponent* _AOEComponent = nullptr;
public:
	virtual void initExplosiveProjectile(AExplosiveProjectile*) override;
	virtual void initAOE(AAOE*) override;
	virtual void launchAttack(const FVector& forward) override;
	virtual void launchAttack_fan(const FVector& forward) override;
	void initialise_AExplosiveProjectileFactory(
		APawn*,
		UCombatantAttributes*,
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

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileFactoryTemplate : public UProjectileFactoryTemplate {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UExplosiveProjectileConfig* _explosiveProjectileConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UExplosiveProjectileAttributes* _explosiveProjectileAttributes;
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UAOEConfig* _AOEConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UAOEAttributes* _AOEAttributes;

	virtual	AAttackFactory* createFactory(APawn*, UCombatantAttributes*) const override;
	UExplosiveProjectileFactoryTemplate(const FObjectInitializer& init) : Super(init) {
		_explosiveProjectileConfig = init.CreateDefaultSubobject<UExplosiveProjectileConfig>(this, "_explosiveProjectileConfig");
		_explosiveProjectileAttributes = init.CreateDefaultSubobject<UExplosiveProjectileAttributes>(this, "_explosiveProjectileAttributes");
		_AOEConfig = init.CreateDefaultSubobject<UAOEConfig>(this, "_AOEConfig");
		_AOEAttributes = init.CreateDefaultSubobject<UAOEAttributes>(this, "_AOEAttributes");
	}
};

