#pragma once

// Afaik the only attribute will be attack speed/warmup. To simplify things I'm just going to use the template as the config and copy the base warmup to a member float.
#include "CoreMinimal.h"
// Active
#include <memory>
#include <vector>
#include "AttackActor.h"
// WeaponTemplate
#include "ActiveEnum.h"
#include "BaseTemplate.h"
// UWeaponConfig
#include "BaseConfig.h"
//
#include "Active.generated.h"
class ACombatant;
class CombatantAttributes;
class UWeaponTemplate;

class Active {
	float _chargeRatio = 0;
	std::vector<std::unique_ptr<AttackFactory>> _factories;
	TWeakObjectPtr<ACombatant> _owner = nullptr;
	TObjectPtr<const UWeaponTemplate> _weaponTemplate = nullptr;

	void updateWarmup(float delta);
	void activate(const FVector&);
	void activate_first(const FVector&);

public:
	Active() = delete;
	Active(const Active& other) = delete;
	Active(Active&& other);
	Active& operator=(const Active& other) = delete;
	Active& operator=(Active&& other);
	Active(ACombatant* owner, const UWeaponTemplate* data);

	void tick(float delta, const FVector& forward);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UWeaponConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	
	UWeaponConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////
class UAttackTemplate;

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UWeaponTemplate : public UBaseTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString _name = "Active";
	UPROPERTY(EditAnywhere)
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere)
	float _warmup = 1.f;
	UPROPERTY(EditAnywhere)
	EAttackType _attackType = static_cast<EAttackType>(0);
	UPROPERTY(EditAnywhere, Instanced)
	TArray<UAttackTemplate*> _attackData;
	UWeaponTemplate(const FObjectInitializer& init) : Super(init) {
	}
};
