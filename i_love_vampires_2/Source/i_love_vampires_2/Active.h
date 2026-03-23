#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/PrimaryAssetID.h"
//
#include "BaseConfig.h"
#include "ActiveEnum.h"
//
#include "BaseTemplate.h"
#include "AttackActor.h"
//
class APawn;
class CombatantAttributes;
class UWeaponConfig;
//class AAttackFactory;

class  Active {
	float _timeSinceLastActivation = 0;
	float _chargeRatio = 0;
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	FVector _myForwardVector;

	
	UPROPERTY()
	TArray<AAttackFactory*> _factories;

	void updateWarmup(float delta);
	void activate();
	void activate_first();
	//bool initAttackData(const TArray<UAttackData*>&);

public:
	Active() = delete;
	Active(APawn* caller, const UWeaponTemplate* data);

	void initialise_UActive(APawn* caller, const UWeaponTemplate* data, UCombatantAttributes* callerAttributes);
	virtual void tick(float delta, const CombatantAttributes& attr, const FVector& forward);
	void setForwardVector(const FVector& val) { _myForwardVector = val; }
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UWeaponConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "WeaponConfig")
	FString _name = "Active";
	UPROPERTY(EditAnywhere, Category = "WeaponConfig")
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere, Category = "WeaponConfig")
	float _warmup = 1.f;
	UPROPERTY(EditAnywhere, Category = "WeaponConfig")
	EAttackType _attackType = static_cast<EAttackType>(0);
	UWeaponConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UWeaponTemplate : public UBaseTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "WeaponTemplate")
	UWeaponConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "WeaponTemplate")
	TArray<UAttackFactoryTemplate*> _attackData;
	UWeaponTemplate(const FObjectInitializer& init) : Super(init) {
		_config = init.CreateDefaultSubobject<UWeaponConfig>(this, "_config");
	}
};