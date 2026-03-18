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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	EProjectileShape _shape = static_cast<EProjectileShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	EAttackShape _attackShape = static_cast<EAttackShape>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	EProjectileTargeting _targeting = static_cast<EProjectileTargeting>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProjectileConfig")
	bool _isHoming = false;
	UProjectileConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
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

	static void modifyAttributes(const UCombatantAttributes*, const UProjectileAttributes*, UProjectileAttributes*);
	virtual UProjectileAttributes* getDiscretizedCopy(UObject* outer) const override {
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
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
	}
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
	template<typename attackType>
	virtual void launchAttack_fan(const FVector& forward);
	FVector launchAttack_fan_getDirection(const UProjectileAttributes* attr, const FVector& forward, int projectileIndex);
	float getDirectionX() const { return _directionX; }
	float getDirectionZ() const { return _directionZ; }

public:
	virtual void initProjectile(AProjectile*) override;
	void initialise_AProjectileFactory(
		APawn*,
		const UAttackConfig*,
		const UAttackAttributes*,
		const UProjectileConfig*,
		const UProjectileAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UProjectileFactoryTemplate : public UAttackFactoryTemplate {
	GENERATED_BODY()

protected:
	virtual bool isValid() const override;

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UProjectileConfig* _projectileConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UProjectileAttributes* _projectileAttributes;

	virtual AAttackFactory* createFactory(APawn*, UObject*) const override;
	UProjectileFactoryTemplate(const FObjectInitializer& init) : Super(init) {
		_projectileConfig = init.CreateDefaultSubobject<UProjectileConfig>(this, "_projectileConfig");
		_projectileAttributes = init.CreateDefaultSubobject<UProjectileAttributes>(this, "_projectileAttributes");
	}
};

/////////////////////////////////////////////////////////////////////////////////////////////
template<typename attackType>
void AProjectileFactory::launchAttack_fan(const FVector& forward) {
	static_assert(std::derived_from<attackType, AProjectile>, "attackType must be derived from AProjectile");

	UProjectileComponent* comp = getComponent<UProjectileComponent>();
	if (!IsValid(comp))
		return;
	UProjectileAttributes* attr = comp->getDiscretizedFinal<UProjectileAttributes>(this);
	if (!IsValid(attr))
		return;
	for (int i = 0; i < static_cast<int>(attr->_projectileCount); i++) {
		FVector direction = launchAttack_fan_getDirection(attr, i);
		_directionX = direction.X;
		_directionZ = direction.Z;
		FActorSpawnParameters params;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AProjectile* projectile = GetWorld()->SpawnActor<attackType>(GetActorLocation(), FRotator::ZeroRotator, params);
		if (!IsValid(projectile)) {
			LOGERROR("AProjectileFactory::launchAttack_fan - failed to spawn projectile");
			continue;
		}
		projectile->factoryInitQuery(this);
	}
}

