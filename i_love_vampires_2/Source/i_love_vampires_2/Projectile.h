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

	TObjectPtr<const UProjectileConfig> _projectileConfig = nullptr;
	std::unique_ptr<ProjectileAttributes> _projectileAttributes = nullptr;

private:
	bool performSweep(const FVector&, const FVector&, TArray<struct FHitResult>&);
	void executeBounce();

protected:
	virtual void bulletDeath() { Destroy(); }
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits);
	void handleBouncePierce();

public:
	AProjectile() : AAttackActor() {}
	virtual void BeginPlay() override;
	
	void initialise_AProjectile(const ProjectileInitStruct&);
	virtual void Tick(float delta) override;
};

///////////////////////////////////////////////////////////////////////////////


UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EProjectileShape _shape = static_cast<EProjectileShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAttackShape _attackShape = static_cast<EAttackShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isHoming = false;
	UProjectileConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _spread = -1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _speed = 200.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _range = 1000.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _pierce = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _bounce = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _projectileCount = 1.f;

	UProjectileAttributeData(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////
class ProjectileAttributes : public BaseAttributes {
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
	float _directionX = 0;
	float _directionZ = 1;

protected:
	const TObjectPtr<const UProjectileConfig> _projectileConfig;
	BaseAttributeWrapper<ProjectileAttributes, UProjectileAttributeData> _projectileAttributes;

	virtual void launchAttack(const FVector& forward) override;
	virtual void launchAttack_fan(const FVector& forward);
	FVector launchAttack_fan_getDirection(const FVector& forward, int projectileIndex, int projectileCount);
	float getDirectionX() const { return _directionX; }
	void setDirectionX(float x) { _directionX = x; }
	float getDirectionZ() const { return _directionZ; }
	void setDirectionZ(float z) { _directionZ = z; }
	ProjectileInitStruct getProjectileInit() const {
		ProjectileAttributes temp = _projectileAttributes.getCore();
		temp.discretizeFull();
		ProjectileInitStruct ret ={ AttackFactory::getAttackInit(), _projectileConfig.Get(), temp, _directionX, _directionZ};
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

public:
	UPROPERTY(EditAnywhere, Instanced)
	UProjectileConfig* _projectileConfig;
	UPROPERTY(EditAnywhere, Instanced)
	UProjectileAttributeData* _projectileAttributes;

	UProjectileTemplate(const FObjectInitializer& init) : Super(init) {
		_projectileConfig = init.CreateDefaultSubobject<UProjectileConfig>(this, "_projectileConfig");
		_projectileAttributes = init.CreateDefaultSubobject<UProjectileAttributeData>(this, "_projectileAttributes");
	}
	virtual std::unique_ptr<AttackFactory> createFactory(ACombatant* owner) const override {
		return std::make_unique<ProjectileFactory>(
			owner,
			_attackConfig,
			_attackAttributes,
			_projectileConfig,
			_projectileAttributes
		);
	}
};

