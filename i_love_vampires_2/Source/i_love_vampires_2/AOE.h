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
#include "Combatant.h"
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

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _duration = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _arcShape_angle = SENTINEL_FLOAT;

	virtual void replaceOverrides() override;
};

template<>
class DefaultProxy<UAOEAttributeData> {
public:
	using self = UAOEAttributeData;
	const static std::unordered_map<float(self::*), float, helpers::MemberPtrHash>& get() {
		const static std::unordered_map<float(self::*), float, helpers::MemberPtrHash> temp = {
			{&self::_duration, 0.f},
			{&self::_arcShape_angle, 360.f}
		};
		return temp;
	}
};
///////////////////////////////////////////////////////////////////////////////
#define STAT(X) \
	X(_duration) \
	X(_arcShape_angle) \

class AOEAttributes : public BaseAttributes {
	std::weak_ptr<const CombatantAttributes> _attrRef;

	void modifyAttributes(const std::shared_ptr<const CombatantAttributes>&);

public:
	STAT(BASEATTRIBUTES_DECLARE);

	AOEAttributes() = delete;
	AOEAttributes(const AOEAttributes& other);
	AOEAttributes(AOEAttributes&& other);
	AOEAttributes& operator=(AOEAttributes&& other) = delete;
	AOEAttributes(const UAOEAttributeData* attr, std::shared_ptr<const CombatantAttributes> attrRef);

	virtual void tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects) override;
	virtual void discretizeFull() override {}
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override {}
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override {
		STAT(BASEATTRIBUTES_APPLY);
	}
	virtual void applyToAllStats(const std::function<void(const Stat&)>& func) const override {
		STAT(BASEATTRIBUTES_APPLY);
	}
	virtual bool isCompatibleWith(const UBaseAttributeData* data) const override { return dynamic_cast<const UAOEAttributeData*>(data) != nullptr; }
};
#undef STAT
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

	TObjectPtr<const UAOEConfig> _AOEConfig = nullptr;
	std::unique_ptr<BaseAttributeWrapper<AOEAttributes>> _AOEAttributes = nullptr;
protected:
	AOEInitStruct getAOEInit() const;
	virtual bool isCompatible(const UAttackLevel* level) const override { return dynamic_cast<const UAOELevel*>(level) != nullptr; }
	virtual void finishUpgrade(const UAttackLevel* newLevel) override;

public:
	AOEFactory() = delete;
	AOEFactory(const AOEFactory& other) = delete;
	AOEFactory& operator=(const AOEFactory& other) = delete;
	AOEFactory(AOEFactory&& other);
	AOEFactory& operator=(AOEFactory&& other) = delete;
	AOEFactory(ACombatant* owner, const UAOETemplate* temp);
	virtual void launchAttack(const FVector& forward) override;
	virtual void tick(float delta) override;
};
///////////////////////////////////////////////////////////////////////////////
UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOELevel : public UAttackLevel {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced)
	TObjectPtr<UAOEAttributeData> _AOEOffsets;

	virtual void replaceOverrides() override {
		Super::replaceOverrides();
		_AOEOffsets->replaceOverrides();
	}
	UAOELevel(const FObjectInitializer& init) : Super(init) {
		_AOEOffsets = init.CreateDefaultSubobject<UAOEAttributeData>(this, "_AOEOffsets");
	}
};

///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAOETemplate : public UAttackTemplate {
	GENERATED_BODY()

protected:
	virtual void replaceOverrides() override {
		Super::replaceOverrides();
		_AOEConfig->replaceOverrides();
		//_AOEAttributes->replaceOverrides();
	}

public:
	UPROPERTY(EditAnywhere, Instanced)
	TObjectPtr<UAOEConfig> _AOEConfig;
	/*UPROPERTY(EditAnywhere, Instanced)
	TObjectPtr<UAOEAttributeData> _AOEAttributes;*/

	UAOETemplate(const FObjectInitializer& init) : Super(init) {
		_AOEConfig = init.CreateDefaultSubobject<UAOEConfig>(this, "_AOEConfig");
		//_AOEAttributes = init.CreateDefaultSubobject<UAOEAttributeData>(this, "_AOEAttributes");
	}
	virtual std::unique_ptr<AttackFactory> createFactory(ACombatant* owner) const override;
};
