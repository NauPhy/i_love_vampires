#pragma once
#include "CoreMinimal.h"
#include "AOE.h"
// AExplosiveProjectile
#include "Projectile.h"
// UExplosiveProjectileConfig
#include "BaseConfig.h"
// UExplosiveProjectileAttributeData
#include "BaseAttributeData.h"
// ExplosiveProjectileAttributes
#include "BaseAttributes.h"
//
#include "ExplosiveProjectile.generated.h"
class UExplosiveProjectileConfig;
class UExplosiveProjectileAttributeData;
class ExplosiveProjectileAttributes;
struct ExplosiveProjectileInitStruct;

class AAOE;

UCLASS()
class I_LOVE_VAMPIRES_2_API AExplosiveProjectile : public AProjectile {
	GENERATED_BODY()

	UPROPERTY()
	AAOE* _AOE = nullptr;

protected:
	TObjectPtr<const UExplosiveProjectileConfig> _explosiveProjectileConfig = nullptr;
	std::unique_ptr<ExplosiveProjectileAttributes> _explosiveProjectileAttributes = nullptr;

	virtual void bulletDeath() override;
	//virtual void handleSweepResults(const TArray<struct FHitResult>& hits) override;

public:
	AExplosiveProjectile() : AProjectile() {}

	void initialise_AExplosiveProjectile(const ExplosiveProjectileInitStruct& temp);
	virtual void BeginPlay() override;

	const AAOE* getAOE() const { return _AOE; }
};

///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	virtual void replaceOverrides() override {}
	UExplosiveProjectileConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

public:
	virtual void replaceOverrides() override {}
	UExplosiveProjectileAttributeData(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

class ExplosiveProjectileAttributes : public BaseAttributes {
public:
	ExplosiveProjectileAttributes() = delete;
	ExplosiveProjectileAttributes(const ExplosiveProjectileAttributes& other) : BaseAttributes(other) {}
	ExplosiveProjectileAttributes(ExplosiveProjectileAttributes&& other) : BaseAttributes(std::move(other)) {}
	ExplosiveProjectileAttributes& operator=(const ExplosiveProjectileAttributes& other) = delete;
	ExplosiveProjectileAttributes& operator=(ExplosiveProjectileAttributes&& other) = delete;
	ExplosiveProjectileAttributes(const UExplosiveProjectileAttributeData* data) : BaseAttributes() {}
	virtual void modifyAttributes(const CombatantAttributes* modifiers) override {}
	virtual void discretizeFull() override {}
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override {}
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override {}
};
///////////////////////////////////////////////////////////////////////////////

struct ExplosiveProjectileInitStruct {
	ProjectileInitStruct _projectile;
	AAOE* _AOE;
	const UExplosiveProjectileConfig* _explosiveProjectileConfig;
	const ExplosiveProjectileAttributes _explosiveProjectileAttributes;
};
///////////////////////////////////////////////////////////////////////////////

class ExplosiveProjectileFactory : public ProjectileFactory
{
	TWeakObjectPtr<AAOE> _tempAOE = nullptr;

protected:
	const TObjectPtr<const UExplosiveProjectileConfig> _explosiveProjectileConfig = nullptr;
	BaseAttributeWrapper<ExplosiveProjectileAttributes, UExplosiveProjectileAttributeData> _explosiveProjectileAttributes;
	const TObjectPtr<const UAOEConfig> _AOEConfig = nullptr;
	BaseAttributeWrapper<AOEAttributes, UAOEAttributeData> _AOEAttributes;

	ExplosiveProjectileInitStruct getExplosiveProjectileInit() const;
	AOEInitStruct getAOEInit() const;
public:
	ExplosiveProjectileFactory() = delete;
	ExplosiveProjectileFactory(const ExplosiveProjectileFactory& other) = delete;
	ExplosiveProjectileFactory& operator=(const ExplosiveProjectileFactory& other) = delete;
	ExplosiveProjectileFactory(ExplosiveProjectileFactory&& other);
	ExplosiveProjectileFactory& operator=(ExplosiveProjectileFactory&& other) = delete;
	ExplosiveProjectileFactory(
		ACombatant*,
		const UAttackConfig*,
		const UAttackAttributeData*,
		const UProjectileConfig*,
		const UProjectileAttributeData*,
		const UExplosiveProjectileConfig*,
		const UExplosiveProjectileAttributeData*,
		const UAOEConfig*,
		const UAOEAttributeData*);
	virtual void tick(float delta) override;
	virtual void launchAttack(const FVector& forward) override;
	virtual void launchAttack_fan(const FVector& forward) override;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileTemplate : public UProjectileTemplate {
	GENERATED_BODY()

protected:
	virtual void replaceOverrides() override {
		Super::replaceOverrides();
		_explosiveProjectileConfig->replaceOverrides();
		_explosiveProjectileAttributes->replaceOverrides();
		_AOEConfig->replaceOverrides();
		_AOEAttributes->replaceOverrides();
	}

public:
	UPROPERTY(EditAnywhere, Instanced)
	UExplosiveProjectileConfig* _explosiveProjectileConfig;
	UPROPERTY(EditAnywhere, Instanced)
	UExplosiveProjectileAttributeData* _explosiveProjectileAttributes;
	UPROPERTY(EditAnywhere, Instanced)
	UAOEConfig* _AOEConfig;
	UPROPERTY(EditAnywhere, Instanced)
	UAOEAttributeData* _AOEAttributes;

	UExplosiveProjectileTemplate(const FObjectInitializer& init) : Super(init) {
		_explosiveProjectileConfig = init.CreateDefaultSubobject<UExplosiveProjectileConfig>(this, "_explosiveProjectileConfig");
		_explosiveProjectileAttributes = init.CreateDefaultSubobject<UExplosiveProjectileAttributeData>(this, "_explosiveProjectileAttributes");
		_AOEConfig = init.CreateDefaultSubobject<UAOEConfig>(this, "_AOEConfig");
		_AOEAttributes = init.CreateDefaultSubobject<UAOEAttributeData>(this, "_AOEAttributes");
	}
	virtual std::unique_ptr<AttackFactory> createFactory(ACombatant* owner) const override;
};

