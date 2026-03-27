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
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits) override;

public:
	AExplosiveProjectile() : AProjectile() {}

	void initialise_AExplosiveProjectile(ExplosiveProjectileInitStruct& temp);
	virtual void BeginPlay() override;

	const AAOE* getAOE() const { return _AOE; }
};
struct ExplosiveProjectileInitStruct {
	ProjectileInitStruct _projectile;
	AAOE* _AOE;
	const UExplosiveProjectileConfig* _explosiveProjectileConfig;
	const ExplosiveProjectileAttributes& _explosiveProjectileAttributes;
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
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

public:
	UExplosiveProjectileAttributeData(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

class ExplosiveProjectileAttributes : public BaseAttributes {
public:
	ExplosiveProjectileAttributes() = delete;
	ExplosiveProjectileAttributes(const UExplosiveProjectileAttributeData* data) {}
	virtual void modifyAttributes(const CombatantAttributes* modifiers) override {}
	virtual void discretizeFull() override {}
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override {}
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override {}
};
///////////////////////////////////////////////////////////////////////////////

class ExplosiveProjectileFactory : public ProjectileFactory
{
	TWeakObjectPtr<AAOE> _tempAOE = nullptr;

protected:
	TObjectPtr<const UExplosiveProjectileConfig> _explosiveProjectileConfig = nullptr;
	BaseAttributeWrapper<ExplosiveProjectileAttributes, UExplosiveProjectileAttributeData> _explosiveProjectileAttributes;
	TObjectPtr<const UAOEConfig> _AOEConfig = nullptr;
	BaseAttributeWrapper<AOEAttributes, UAOEAttributeData> _AOEAttributes;

	ExplosiveProjectileInitStruct getExplosiveProjectileInit() const;
	AOEInitStruct getAOEInit() const;
public:
	virtual void launchAttack(const FVector& forward) override;
	virtual void launchAttack_fan(const FVector& forward) override;
	ExplosiveProjectileFactory() = delete;
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
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UExplosiveProjectileTemplate : public UProjectileTemplate {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UExplosiveProjectileConfig* _explosiveProjectileConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UExplosiveProjectileAttributeData* _explosiveProjectileAttributes;
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UAOEConfig* _AOEConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UExplosiveProjectileFactoryTemplate")
	UAOEAttributeData* _AOEAttributes;

	UExplosiveProjectileTemplate(const FObjectInitializer& init) : Super(init) {
		_explosiveProjectileConfig = init.CreateDefaultSubobject<UExplosiveProjectileConfig>(this, "_explosiveProjectileConfig");
		_explosiveProjectileAttributes = init.CreateDefaultSubobject<UExplosiveProjectileAttributeData>(this, "_explosiveProjectileAttributes");
		_AOEConfig = init.CreateDefaultSubobject<UAOEConfig>(this, "_AOEConfig");
		_AOEAttributes = init.CreateDefaultSubobject<UAOEAttributeData>(this, "_AOEAttributes");
	}
};