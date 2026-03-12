#pragma once
#include "StatusEffect.h"
#include "CombatantAttributes.h"

class StatusEffect_Bleed : public StatusEffect<FCombatantAttributes> {
public:
	StatusEffect_Bleed(float duration, float magnitude, float chance) : StatusEffect(duration, magnitude, chance) {}
	StatusEffect_Bleed() = delete;
	void prebonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override {}
	void multiplierStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override {}
	void postbonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override;
};