#pragma once
#include "CoreMinimal.h"

#include "AttackActor.h"
class UShapeComponent;
class UAOEConfig;
class UAOEAttributes;

UCLASS()
class AAOE : public AAttackActor {
	GENERATED_BODY()

	const static EAOEShape _CIRCLE = EAOEShape::circle;

	float _consumedDuration = 0;
	bool _isAfterimage = false;
	UPROPERTY()
	UShapeComponent* _collider = nullptr;

protected:
	_AOEConfig* _AOEConfig = nullptr;
	_AOEAttributes* _AOEAttributes = nullptr;

private:
	void initShape();
	TWeakObjectPtr<APawn> _delayedConstruction_pawnRef = nullptr;
	UPROPERTY()
	UAOEConfig* _delayedConstruction_AOEConfig = nullptr;
	UPROPERTY()
	UAOEAttributes* _delayedConstruction_AOEAttributes = nullptr;
	UPROPERTY()
	UAttackConfig* _delayedConstruction_attackConfig = nullptr;
	UPROPERTY()
	UAttackAttributes* _delayedConstruction_attackAttributes = nullptr;

protected:
	virtual void factoryInitQuery(const UAttackFactory* factory) override;

public:
	void initialise_AAOE(
		APawn*, 
		const UAttackConfg*,
		const UAttackAttributes*,
		const UAOEConfig*,
		const UAOEAttributes*,
		bool delayFullConstruction = false);
	void completeDelayedConstruction();

	virtual void Tick(float delta) override;

	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};
///////////////////////////////////////////////////////////////////////////////

#include "AOEEnum.h"
UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAOEConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEConfig")
	EAOEShape _shape = static_cast<EAOEShape>(0);
	UAOEConfig() { _attackClass = AAOE::StaticClass(); }
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAOEAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEAttributes")
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEAttributes")
	float _duration = 0.f;

	virtual void modifyAttributes(const UCombatantAttributes*, const UAOEAttributes*, UAOEAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UAOEComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UAOEAttributes* _base;
	UPROPERTY()
	UAOEAttributes* _final;
	UPROPERTY()
	UAOEAttributes* _offsets;
	void initialise_UAOEComponent(const UAOEAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
	}
	virtual UBaseAttributes* getFinal() const override { return _final; }
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UAOEFactory : public UAttackFactory
{
	GENERATED_BODY()

	UPROPERTY()
	UAOEConfig* _AOEConfig;
	UPROPERTY()
	UAOEComponent* _AOEComponent = nullptr;

protected:
	virtual void initAOE(AAOE*) const override;

public:
	initialise_UAOEFactory(
		APawn*,
		const UAttackConfig*,
		const UAttackAttributes*,
		const UAOEConfig*,
		const UAOEAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAOEFactoryTemplate : public UAttackFactoryTemplate {
	GENERATED_BODY()

protected:
	virtual bool isValid() const override;

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UAOEConfig* _AOEConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UProjectileAttributes* _AOEAttributes;

	virtual UAttackFactory* createFactory(APawn*, const UObject*) const override;
};

#include "AOE.generated.h"