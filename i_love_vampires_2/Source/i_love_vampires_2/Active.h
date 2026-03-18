#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/PrimaryAssetID.h"
//
#include "BaseConfig.h"
//
#include "BaseTemplate.h"
#include "AttackActor.h"
//
#include "Active.generated.h"
class APawn;
class UCombatantAttributes;
class UWeaponConfig;
//class AAttackFactory;

UCLASS()
class I_LOVE_VAMPIRES_2_API UActive : public UObject {
	GENERATED_BODY()

	float _timeSinceLastActivation = 0;
	float _chargeRatio = 0;
	TWeakObjectPtr<UCombatantAttributes> _combatantAttributes = nullptr;
	TWeakObjectPtr<APawn> _pawnRef = nullptr;

	UPROPERTY()
	UWeaponConfig* _config;
	UPROPERTY()
	TArray<AAttackFactory*> _factories;

	void updateWarmup(float delta);
	void activate();
	//bool initAttackData(const TArray<UAttackData*>&);

public:
	void initialise_UActive(APawn* caller, const FPrimaryAssetId& ID, UCombatantAttributes* callerAttributes);
	virtual void tick(float delta);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UWeaponConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	FString _name = "Active";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	float _warmup = 1.f;
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