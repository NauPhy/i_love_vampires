#pragma once
#include "StatusEffect.h"
#include <memory>
#include "StatusEffect_Burn.generated.h"
class UCombatantAttributes;

UCLASS()
class I_LOVE_VAMPIRES_2_API UStatusEffect_Burn : public UStatusEffect {
	GENERATED_BODY()

	bool _burnThisFrame = false;

public:
	void initialise_UStatusEffect_Burn(float duration, float magnitude, float chance) {
		initialise_UStatusEffect(duration, magnitude, chance);
	}
	void prebonusStep(float delta) override {}
	void multiplierStep(float delta) override {}
	void postbonusStep(float delta) override;
	void burnTick() { _burnThisFrame = true; }
};