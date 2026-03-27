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
	UPROPERTY(EditAnywhere, Category = "WeaponTemplate")
	FString _name = "Active";
	UPROPERTY(EditAnywhere, Category = "WeaponTemplate")
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere, Category = "WeaponTemplate")
	float _warmup = 1.f;
	UPROPERTY(EditAnywhere, Category = "WeaponTemplate")
	EAttackType _attackType = static_cast<EAttackType>(0);
	UPROPERTY(EditAnywhere, Instanced, Category = "WeaponTemplate")
	TArray<UAttackTemplate*> _attackData;
	UWeaponTemplate(const FObjectInitializer& init) : Super(init) {
	}
};