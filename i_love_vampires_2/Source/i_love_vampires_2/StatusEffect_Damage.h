#pragma once
#include "StatusEffect.h"
#include "StatusEffect_Damage.generated.h"
class UCombatantAttributes;

UCLASS()
class UStatusEffect_Damage : public UStatusEffect {
	GENERATED_BODY()

public:
	void initialise_UStatusEffect_Damage(float magnitude, float chance) {
		initialise_UStatusEffect(0, magnitude, chance);
	}
	void initialise_UStatusEffect_Damage(float magnitude) {
		initialise_UStatusEffect_Damage(magnitude, 1);
	} 
	virtual void prebonusStep(float delta) override {}
	virtual void multiplierStep(float delta) override {}
	virtual void postbonusStep(float delta) override;
};