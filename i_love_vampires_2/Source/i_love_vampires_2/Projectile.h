#pragma once
#include "CoreMinimal.h"
//
#include "AttackActor.h"
//
#include "ProjectileEnum.h"
//
#include "Projectile.generated.h"
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

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	UProjectileConfig* _projectileConfig = nullptr;
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	UProjectileAttributes* _projectileAttributes = nullptr;

private:
	void performSweep(const FVector&, const FVector&, TArray<struct FHitResult>&);
	void executeBounce();

protected:
	virtual void bulletDeath() { Destroy(); }
	virtual void handleSweepResults(const TArray<struct FHitResult>& hits);
	void handleBouncePierce();

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
	virtual void factoryInitQuery(AAttackFactory* factory) override;
};
///////////////////////////////////////////////////////////////////////////////


UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "ProjectileConfig")
	EProjectileShape _shape = static_cast<EProjectileShape>(0);
	UPROPERTY(VisibleAnywhere, Category = "ProjectileConfig")
	EAttackShape _attackShape = static_cast<EAttackShape>(0);
	UPROPERTY(VisibleAnywhere, Category = "ProjectileConfig")
	EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);
	UPROPERTY(VisibleAnywhere, Category = "ProjectileConfig")
	bool _isHoming = false;
	UProjectileConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileAttributes : public UBaseAttributes
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = "ProjectileAttributes")
	float _spread = 1.f;
	UPROPERTY(VisibleAnywhere, Category = "ProjectileAttributes")
	float _radius = 1.f;
	UPROPERTY(VisibleAnywhere, Category = "ProjectileAttributes")
	float _speed = 1.f;
	UPROPERTY(VisibleAnywhere, Category = "ProjectileAttributes")
	float _range = 1.f;
	UPROPERTY(VisibleAnywhere, Category = "ProjectileAttributes")
	float _pierce = 0.f;
	UPROPERTY(VisibleAnywhere, Category = "ProjectileAttributes")
	float _bounce = 0.f;
	UPROPERTY(VisibleAnywhere, Category = "ProjectileAttributes")
	float _projectileCount = 1.f;

	static void modifyAttributes(const UCombatantAttributes*, const UProjectileAttributes*, UProjectileAttributes*);
	virtual UProjectileAttributes* getDiscretizedCopy(UObject* outer) const override {
		if (!IsValid(outer)) {
			LOGERROR("UProjectileAttributes::getDiscretizedCopy - outer not valid");
			return nullptr;
		}
		UProjectileAttributes* ret = DuplicateObject<UProjectileAttributes>(this, outer, FName());
		ret->_pierce = discretize(ret->_pierce);
		ret->_bounce = discretize(ret->_bounce);
		ret->_projectileCount = discretize(ret->_projectileCount);
		return ret;
	}
	UProjectileAttributes(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UProjectileComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	void initialise_UProjectileComponent(const UProjectileAttributes* baseAttributes) {
		if (!IsValid(baseAttributes)) {
			LOGERROR("UProjectileComponent::initialise_UProjectileComponent - baseAttributes not valid");
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

UCLASS()
class I_LOVE_VAMPIRES_2_API AProjectileFactory : public AAttackFactory
{
	GENERATED_BODY()

	float _directionX = 0;
	float _directionZ = 1;

protected:
	UPROPERTY()
	UProjectileConfig* _projectileConfig;
	UPROPERTY()
	UProjectileComponent* _projectileComponent = nullptr;

	virtual void launchAttack(const FVector& forward) override;
	virtual void launchAttack_fan(const FVector& forward);
	FVector launchAttack_fan_getDirection(const UProjectileAttributes* attr, const FVector& forward, int projectileIndex);
	float getDirectionX() const { return _directionX; }
	void setDirectionX(float x) { _directionX = x; }
	float getDirectionZ() const { return _directionZ; }
	void setDirectionZ(float z) { _directionZ = z; }

public:
	virtual void initProjectile(AProjectile*) override;
	void initialise_AProjectileFactory(
		APawn*,
		UCombatantAttributes*,
		const UAttackConfig*,
		const UAttackAttributes*,
		const UProjectileConfig*,
		const UProjectileAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileFactoryTemplate : public UAttackFactoryTemplate {
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UProjectileConfig* _projectileConfig;
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UProjectileAttributes* _projectileAttributes;

	virtual AAttackFactory* createFactory(APawn*, UCombatantAttributes*) const override;
	UProjectileFactoryTemplate(const FObjectInitializer& init) : Super(init) {
		_projectileConfig = init.CreateDefaultSubobject<UProjectileConfig>(this, "_projectileConfig");
		_projectileAttributes = init.CreateDefaultSubobject<UProjectileAttributes>(this, "_projectileAttributes");
	}
};