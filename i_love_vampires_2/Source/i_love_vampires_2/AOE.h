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

	const static inline EAOEShape _CIRCLE = EAOEShape::circle;
	const static inline EAOEShape _ARC = EAOEShape::arc;

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
	void reorientSlash();

public:
	AAOE() : AAttackActor() {
		PrimaryActorTick.bStartWithTickEnabled = false;
	}
	void initialise_AAOE(const AOEInitStruct& temp);
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

///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOEConfig : public UBaseConfig
{
	GENERATED_BODY()

	struct defaults {
		EAOEShape _shape = static_cast<EAOEShape>(0);
		EAOETargeting _targeting = static_cast<EAOETargeting>(0);
	};
	const static inline defaults _defaults;

public:
	virtual void replaceOverrides() override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAOEShape _shape = static_cast<EAOEShape>(static_cast<uint8>(255));
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAOETargeting _targeting = static_cast<EAOETargeting>(static_cast<uint8>(255));
	UAOEConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOEAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

	struct defaults {
		float _radius = 1.f;
		float _duration = 0.f;
		float _arcShape_angle = 360.f;
	};
	const static inline defaults _defaults;

public:
	virtual void replaceOverrides() override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _radius = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _duration = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _arcShape_angle = -999;
};
///////////////////////////////////////////////////////////////////////////////

class AOEAttributes : public BaseAttributes {
public:
	Stat _radius;
	Stat _duration;
	Stat _arcShape_angle;

	AOEAttributes() = delete;
	AOEAttributes(const AOEAttributes& other) : BaseAttributes(other), _radius(other._radius), _duration(other._duration), _arcShape_angle(other._arcShape_angle) {}
	AOEAttributes(AOEAttributes&& other) : BaseAttributes(std::move(other)), _radius(std::move(other._radius)), _duration(std::move(other._duration)), _arcShape_angle(std::move(other._arcShape_angle)) {}
	AOEAttributes& operator=(const AOEAttributes& other) = delete;
	AOEAttributes& operator=(AOEAttributes&& other) = delete;
	AOEAttributes(const UAOEAttributeData* attr) : BaseAttributes(), _radius(attr->_radius), _duration(attr->_duration), _arcShape_angle(attr->_arcShape_angle) {}
	virtual void modifyAttributes(const CombatantAttributes* modifiers) override;
	virtual void discretizeFull() override {}
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override {}
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override {
		func(_radius);
		func(_duration);
		func(_arcShape_angle);
	}
};
///////////////////////////////////////////////////////////////////////////////

struct AOEInitStruct {
	AttackInitStruct _attack;
	const UAOEConfig* _AOEConfig;
	const AOEAttributes _AOEAttributes;
	const bool _delayFullConstruction = false;
	const FVector _arcShape_forwardVector = FVector(1, 0, 0);
	AOEInitStruct() = delete;
	AOEInitStruct(const AttackInitStruct& attk, const UAOEConfig* config, const AOEAttributes& attr, bool delay, const FVector& direction) :
		_attack(attk), _AOEConfig(config), _AOEAttributes(attr), _delayFullConstruction(delay), _arcShape_forwardVector(direction){}
};
///////////////////////////////////////////////////////////////////////////////

class AOEFactory : public AttackFactory
{
	const static inline EAOETargeting _INSTIGATOR = EAOETargeting::instigator;
	const static inline EAOETargeting _RANDOM = EAOETargeting::random;

	const TObjectPtr<const UAOEConfig> _AOEConfig = nullptr;
	BaseAttributeWrapper<AOEAttributes, UAOEAttributeData> _AOEAttributes;
protected:
	AOEInitStruct getAOEInit() const;

public:
	AOEFactory() = delete;
	AOEFactory(const AOEFactory& other) = delete;
	AOEFactory& operator=(const AOEFactory& other) = delete;
	AOEFactory(AOEFactory&& other);
	AOEFactory& operator=(AOEFactory&& other) = delete;
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

protected:
	virtual void replaceOverrides() override {
		Super::replaceOverrides();
		_AOEConfig->replaceOverrides();
		_AOEAttributes->replaceOverrides();
	}

public:
	UPROPERTY(EditAnywhere, Instanced)
	UAOEConfig* _AOEConfig;
	UPROPERTY(EditAnywhere, Instanced)
	UAOEAttributeData* _AOEAttributes;

	UAOETemplate(const FObjectInitializer& init) : Super(init) {
		_AOEConfig = init.CreateDefaultSubobject<UAOEConfig>(this, "_AOEConfig");
		_AOEAttributes = init.CreateDefaultSubobject<UAOEAttributeData>(this, "_AOEAttributes");
	}
	virtual std::unique_ptr<AttackFactory> createFactory(ACombatant* owner) const override;
};
