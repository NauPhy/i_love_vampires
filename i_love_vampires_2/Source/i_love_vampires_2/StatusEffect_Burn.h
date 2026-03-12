#pragma once
#include "StatusEffect.h"
#include "CombatantAttributes.h"

class StatusEffect_Burn : public StatusEffect<FCombatantAttributes> {
	bool _burnThisFrame = false;

public:
	StatusEffect_Burn(float duration, float magnitude, float chance);
	StatusEffect_Burn() = delete;
	void prebonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override {}
	void multiplierStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override {}
	void postbonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) override;
	void burnTick() { _burnThisFrame = true; }
};