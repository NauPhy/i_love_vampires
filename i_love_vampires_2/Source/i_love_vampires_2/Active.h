#pragma once

// Afaik the only attribute will be attack speed/warmup. To simplify things I'm just going to use the template as the config and copy the base warmup to a member float.
#include "CoreMinimal.h"
// Active
#include <memory>
#include <vector>
#include "AttackActor.h"
#include "StatusEnum.h"
// WeaponTemplate
#include "ActiveEnum.h"
#include "BaseTemplate.h"
// UWeaponConfig
#include "BaseConfig.h"
#include "ActiveEnum.h"
//
#include "Active.generated.h"
class ACombatant;
class CombatantAttributes;
class UWeaponTemplate;

class Active {
	const static inline EStatus _CHILL = EStatus::chill;
	const static inline EActivationType _SINGLE = EActivationType::single;
	const static inline EActivationType _BURST = EActivationType::burst;

	float _chargeRatio = 0;
	std::unique_ptr<AttackFactory> _factory;
	TWeakObjectPtr<ACombatant> _owner = nullptr;
	TObjectPtr<const UWeaponTemplate> _weaponTemplate = nullptr;
	TArray<FEffectStruct> _statusEffects;
	std::vector<float> _queuedAttacks;

	void updateWarmup(float delta);
	void activate(const FVector&);
	bool hasStatus(EStatus status) const;

public:
	Active() = delete;
	Active(const Active& other) = delete;
	Active(Active&& other);
	Active& operator=(const Active& other) = delete;
	Active& operator=(Active&& other);
	Active(ACombatant* owner, const UWeaponTemplate* data);

	void tick(float delta, const FVector& forward);
	void inflictStatus(const FEffectStruct& status);
	bool operator==(UWeaponTemplate* other) const;
	UFUNCTION(BlueprintCallable)
	void upgrade() { _factory->upgrade(); }
	bool isUpgradable() const { 
		if (_factory.get() == nullptr) {
			LOGERROR("Active::isUpgradable - uninitialized factory");
			return false;
		}
		return _factory->getLevel() < _factory->getMaxLevel(); 
	}
	int getLevel() const { return _factory->getLevel(); }
	UWeaponTemplate* getDiskTemplate() const;
};
///////////////////////////////////////////////////////////////////////////////

//UCLASS(BlueprintType, EditInlineNew)
//class I_LOVE_VAMPIRES_2_API UWeaponConfig : public UBaseConfig
//{
//	GENERATED_BODY()
//
//protected:
//	virtual void replaceOverrides() override {
//		// No members to replace
//	}
//
//public:
//	
//	UWeaponConfig(const FObjectInitializer& init) : Super(init) {}
//};
///////////////////////////////////////////////////////////////////////////////
class UAttackTemplate;

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UWeaponTemplate : public UBaseTemplate
{
	GENERATED_BODY()

	struct defaults {
		FString _name = "Active";
		float _warmup = 1.f;
		EActivationType _activationType = static_cast<EActivationType>(0);
		float _burstInterval = 0.05f;
	};
	const static inline defaults _defaults;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString _name = "_invalid_";
	// cannot really be given a sentinel value
	UPROPERTY(EditAnywhere)
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere)
	float _warmup = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, Instanced)
	TObjectPtr<UAttackTemplate> _attackData;
	UPROPERTY(EditAnywhere)
	EActivationType _activationType = static_cast<EActivationType>(static_cast<uint8>(255));
	UPROPERTY(EditAnywhere)
	float _burstInterval = SENTINEL_FLOAT;
	UWeaponTemplate(const FObjectInitializer& init) : Super(init) {
		//No default object to allow for polymorphism
	}
	virtual void replaceOverrides() override;
	virtual void dynamicDeepCopy(const UObject* context) override {
		if (!IsValid(_attackData.Get())) {
			LOGERROR("UWeaponTemplate::dynamicDeepCopy - invalid attack data");
			return;
		}
		_attackData->dynamicDeepCopy(context);
	}
};
