#pragma once
#include "CoreMinimal.h"
//
#include "AttackActor.h"
//
#include "AOEEnum.h"
//
#include "AOE.generated.h"

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
	UAOEConfig* _AOEConfig = nullptr;
	UAOEAttributes* _AOEAttributes = nullptr;

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

public:
	void initialise_AAOE(
		APawn*, 
		const UAttackConfig*,
		const UAttackAttributes*,
		const UAOEConfig*,
		const UAOEAttributes*,
		bool delayFullConstruction = false);
	void completeDelayedConstruction();
	virtual void factoryInitQuery(AAttackFactory* factory) override;

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


UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOEConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEConfig")
	EAOEShape _shape = static_cast<EAOEShape>(0);
	UAOEConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOEAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEAttributes")
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEAttributes")
	float _duration = 0.f;

	static void modifyAttributes(const UCombatantAttributes*, const UAOEAttributes*, UAOEAttributes*);
	virtual UAOEAttributes* getDiscretizedCopy(UObject* outer) const override {
		if (!IsValid(outer)) {
			LOGERROR("UAOEAttributes::getDiscretizedCopy - outer not valid");
			return nullptr;
		}
		return DuplicateObject(this, outer, FName());
	}
	UAOEAttributes(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UAOEComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	void initialise_UAOEComponent(const UAOEAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
		zeroOffsets();
	}
	virtual void modifyAttributes(ABaseAttributeSet* set) override;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API AAOEFactory : public AAttackFactory
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UAOEConfig* _AOEConfig;
	UPROPERTY()
	UAOEComponent* _AOEComponent = nullptr;

	virtual void initAOE(AAOE*) override;
	virtual void launchAttack(const FVector& forward) override;
	void initialise_AAOEFactory(
		APawn*,
		UCombatantAttributes* comb,
		const UAttackConfig*,
		const UAttackAttributes*,
		const UAOEConfig*,
		const UAOEAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOEFactoryTemplate : public UAttackFactoryTemplate {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UAOEConfig* _AOEConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UAOEAttributes* _AOEAttributes;

	virtual AAttackFactory* createFactory(APawn*, UCombatantAttributes*) const override;
	UAOEFactoryTemplate(const FObjectInitializer& init) : Super(init) {
		_AOEConfig = init.CreateDefaultSubobject<UAOEConfig>(this, "_AOEConfig");
		_AOEAttributes = init.CreateDefaultSubobject<UAOEAttributes>(this, "_AOEAttributes");
	}
};

