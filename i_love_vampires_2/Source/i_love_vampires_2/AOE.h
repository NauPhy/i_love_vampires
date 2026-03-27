#pragma once
#include "CoreMinimal.h"
// AAOE
#include "AttackActor.h"
// UAOEConfig
#include "AOEEnum.h"
// UAOEAttributeData
#include "BaseAttributeData.h"
// AOEAttributes
#include "BaseAttributes.h"
//
#include "AOE.generated.h"

class UShapeComponent;
class UAOEConfig;
class UAOEAttributeData;
class AOEAttributes;
struct AOEInitStruct;

UCLASS()
class AAOE : public AAttackActor {
	GENERATED_BODY()

	const static EAOEShape _CIRCLE = EAOEShape::circle;

	float _consumedDuration = 0;
	bool _isAfterimage = false;
	bool _initialisedWithDelay = false;
	UPROPERTY()
	UShapeComponent* _collider = nullptr;

protected:
	TObjectPtr<const UAOEConfig> _AOEConfig = nullptr;
	std::unique_ptr<const AOEAttributes> _AOEAttributes = nullptr;

private:
	void initShape();

public:
	void initialise_AAOE(AOEInitStruct& temp);
	void completeDelayedConstruction();
	//virtual void factoryInitQuery(AAttackFactory* factory) override;

	virtual void Tick(float delta) override;
	virtual void BeginPlay() override;

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
struct AOEInitStruct {
	AttackInitStruct _attack;
	const UAOEConfig* _AOEConfig;
	const AOEAttributes& _AOEAttributes;
	bool _delayFullConstruction = false;
};
///////////////////////////////////////////////////////////////////////////////


UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOEConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "AOEConfig")
	EAOEShape _shape = static_cast<EAOEShape>(0);
	UAOEConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOEAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "AOEAttributes")
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, Category = "AOEAttributes")
	float _duration = 0.f;
};
///////////////////////////////////////////////////////////////////////////////

class AOEAttributes : public BaseAttributes {
public:
	Stat _radius;
	Stat _duration;
	AOEAttributes() = delete;
	AOEAttributes(const UAOEAttributeData* attr) : _radius(attr->_radius), _duration(attr->_duration) {}
	virtual void modifyAttributes(const CombatantAttributes* modifiers) override;
	virtual void discretizeFull() override {}
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override {}
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override {
		func(_radius);
		func(_duration);
	}
};
///////////////////////////////////////////////////////////////////////////////

class AOEFactory : public AttackFactory
{
	TObjectPtr<const UAOEConfig> _AOEConfig = nullptr;
	BaseAttributeWrapper<AOEAttributes, UAOEAttributeData> _AOEAttributes;
protected:
	AOEInitStruct getAOEInit() const {
		AOEAttributes temp = _AOEAttributes.getCore();
		temp.discretizeFull();
		AOEInitStruct ret ={ AttackFactory::getAttackInit(), _AOEConfig.Get(), temp };
		return ret;
	}

public:
	AOEFactory();
	AOEFactory(
		ACombatant* owner,
		const UAttackConfig* attackConfig,
		const UAttackAttributeData* attackAttributes,
		const UAOEConfig* AOEConfig,
		const UAOEAttributeData* AOEAttributes
	);
	virtual void launchAttack(const FVector& forward) override;
	virtual void tick(float delta) override;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOETemplate : public UAttackTemplate {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UAOEConfig* _AOEConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UProjectileFactoryTemplate")
	UAOEAttributeData* _AOEAttributes;

	UAOETemplate(const FObjectInitializer& init) : Super(init) {
		_AOEConfig = init.CreateDefaultSubobject<UAOEConfig>(this, "_AOEConfig");
		_AOEAttributes = init.CreateDefaultSubobject<UAOEAttributeData>(this, "_AOEAttributes");
	}
	virtual std::unique_ptr<AttackFactory> createFactory(ACombatant* owner) const override {
		return std::make_unique<AOEFactory>(
			owner,
			_attackConfig,
			_attackAttributes,
			_AOEConfig,
			_AOEAttributes
		);
	}
};

