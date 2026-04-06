#pragma once
#include "CoreMinimal.h"
// AProjectile
#include "AttackActor.h"
#include "ProjectileEnum.h"
// UProjectileConfig
#include "BaseConfig.h"
// UProjectileAttributeData
#include "BaseAttributeData.h"
// ProjectileAttributes
#include "BaseAttributes.h"
//
#include "Projectile.generated.h"
class UProjectileConfig;
class UProjectileAttributeData;
class ProjectileAttributes;
struct ProjectileInitStruct;
class AEnemyBase;

UCLASS()
class AProjectile : public AAttackActor {
	GENERATED_BODY()

	const static inline EProjectileShape _CIRCLE = EProjectileShape::circle;

	TWeakObjectPtr<const ACombatant> _targetEnemy = nullptr;
	void setNewDirection();

protected:
	float _directionX = 0;
	float _directionZ = 1;
	float _pierce = 0;
	float _bounce = 0;
	float _distanceTravelled = 0;

	TObjectPtr<const UProjectileConfig> _projectileConfig = nullptr;
	std::unique_ptr<ProjectileAttributes> _projectileAttributes = nullptr;

private:
	bool performSweep(const FVector&, const FVector&, TArray<struct FHitResult>&);
	void executeBounce(AEnemyBase* ineligibleTarget);

protected:
	virtual void bulletDeath() { Destroy(); }
	// returns true iff bulletDeath was called
	virtual bool handleSweepResults(const TArray<struct FHitResult>& hits);
	// returns true iff bulletDeath was called
	bool handleBouncePierce(ACombatant* ineligibleTarget);

public:
	AProjectile() : AAttackActor() {}
	virtual void BeginPlay() override;
	
	void initialise_AProjectile(const ProjectileInitStruct&);
	// currently unused, since I realized making all random projectiles homing was stupid
	void homeToTarget(ACombatant* homingTarget) {
		_targetEnemy = homingTarget;
		setNewDirection();
	}
	virtual void Tick(float delta) override;
};

///////////////////////////////////////////////////////////////////////////////


UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileConfig : public UBaseConfig
{
	GENERATED_BODY()

	struct defaults {
		EProjectileShape _shape = static_cast<EProjectileShape>(0);
		EAttackShape _attackShape = static_cast<EAttackShape>(0);
		EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);
	};
	const static inline defaults _defaults;

public:
	virtual void replaceOverrides() override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EProjectileShape _shape = static_cast<EProjectileShape>(static_cast<uint8>(255));
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAttackShape _attackShape = static_cast<EAttackShape>(static_cast<uint8>(255));
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(static_cast<uint8>(255));
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isHoming = false;
	UProjectileConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

	struct defaults {
		float _spread = -1.f;
		float _radius = 1.f;
		float _speed = 1.f;
		float _range = 1.f;
		float _pierce = 0.f;
		float _bounce = 0.f;
		float _projectileCount = 1.f;
	};
	const static inline defaults _defaults;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _spread = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _radius = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _speed = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _range = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _pierce = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _bounce = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _projectileCount = -999;

	UProjectileAttributeData(const FObjectInitializer& init) : Super(init) {}
	virtual void replaceOverrides() override;
};
///////////////////////////////////////////////////////////////////////////////
class ProjectileAttributes : public BaseAttributes {
	const static inline float _PROJECTILE_SPEED = 200.f;
	const static inline float _PROJECTILE_RANGE = 500.f;

public:
	Stat _spread;
	Stat _radius;
	Stat _speed;
	Stat _range;
	Stat _pierce;
	Stat _bounce;
	Stat _projectileCount;

	ProjectileAttributes() = delete;
	ProjectileAttributes(const ProjectileAttributes& other);
	ProjectileAttributes(ProjectileAttributes&& other);
	ProjectileAttributes& operator=(const ProjectileAttributes& other) = delete;
	ProjectileAttributes& operator=(ProjectileAttributes&& other) = delete;
	ProjectileAttributes(const UProjectileAttributeData* attr);
	virtual void modifyAttributes(const CombatantAttributes* modifiers) override;
	virtual void discretizeFull() override;
	virtual void applyToAllStats(const std::function<void(Stat&)>& func);
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override {}
};
///////////////////////////////////////////////////////////////////////////////

struct ProjectileInitStruct {
	AttackInitStruct _attack;
	const UProjectileConfig* _projectileConfig;
	const ProjectileAttributes _projectileAttributes;
	const float _directionX;
	const float _directionZ;
};
///////////////////////////////////////////////////////////////////////////////

class ProjectileFactory : public AttackFactory
{
	const static inline EProjectileTargeting _SKILLSHOT = EProjectileTargeting::skillshot;
	const static inline EProjectileTargeting _RANDOM = EProjectileTargeting::random;
	const static inline EProjectileTargeting _RANDOM_ENEMY = EProjectileTargeting::randomEnemy;
	const static inline EAttackShape _FAN = EAttackShape::fan;

	float _directionX = 0;
	float _directionZ = 1;

	static FVector getDirection_random();

protected:
	const TObjectPtr<const UProjectileConfig> _projectileConfig;
	BaseAttributeWrapper<ProjectileAttributes, UProjectileAttributeData> _projectileAttributes;
	//Gives a vector depending on the projectile's targeting type
	FVector getTempForward(const FVector& forward) const;
	//Uses the vector from the targeting type to create the final direction for all fired projectiles
	TArray<FVector> getProjectileDirections(const FVector& tempForward);
	virtual AProjectile* launchSingleProjectile(const FVector& direction);

	virtual void launchAttack(const FVector& forward) override;

	float getDirectionX() const { return _directionX; }
	void setDirectionX(float x) { _directionX = x; }
	float getDirectionZ() const { return _directionZ; }
	void setDirectionZ(float z) { _directionZ = z; }
	ProjectileInitStruct getProjectileInit() const {
		ProjectileAttributes temp = _projectileAttributes.getCore();
		temp.discretizeFull();
		ProjectileInitStruct ret = { AttackFactory::getAttackInit(), _projectileConfig.Get(), temp, _directionX, _directionZ};
		return ret;
	}

public:
	ProjectileFactory() = delete;
	ProjectileFactory(const ProjectileFactory& other) = delete;
	ProjectileFactory& operator=(const ProjectileFactory& other) = delete;
	ProjectileFactory(ProjectileFactory&& other);
	ProjectileFactory& operator=(ProjectileFactory&& other) = delete;
	ProjectileFactory(
		ACombatant*,
		const UAttackConfig*,
		const UAttackAttributeData*,
		const UProjectileConfig*,
		const UProjectileAttributeData*);
	virtual void tick(float delta) override;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileTemplate : public UAttackTemplate {
	GENERATED_BODY()

protected:
	virtual void replaceOverrides() override {
		Super::replaceOverrides();
		_projectileConfig->replaceOverrides();
		_projectileAttributes->replaceOverrides();
	}

public:
	UPROPERTY(EditAnywhere, Instanced)
	UProjectileConfig* _projectileConfig;
	UPROPERTY(EditAnywhere, Instanced)
	UProjectileAttributeData* _projectileAttributes;

	UProjectileTemplate(const FObjectInitializer& init) : Super(init) {
		_projectileConfig = init.CreateDefaultSubobject<UProjectileConfig>(this, "_projectileConfig");
		_projectileAttributes = init.CreateDefaultSubobject<UProjectileAttributeData>(this, "_projectileAttributes");
	}
	virtual std::unique_ptr<AttackFactory> createFactory(ACombatant* owner) const override;
};

