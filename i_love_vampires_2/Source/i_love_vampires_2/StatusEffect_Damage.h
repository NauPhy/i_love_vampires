#pragma once
#include "StatusEffect.h"
#include "CombatantAttributes.h"

class StatusEffect_Damage : public StatusEffect<FCombatantAttributes> {

public:
	StatusEffect_Damage(float magnitude, float chance) : StatusEffect(0, magnitude, chance) {}
	StatusEffect_Damage(float magnitude) : StatusEffect(0, magnitude, 1) {}
	StatusEffect_Damage() = delete;
	void prebonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override {}
	void multiplierStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override {}
	void postbonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override;
};