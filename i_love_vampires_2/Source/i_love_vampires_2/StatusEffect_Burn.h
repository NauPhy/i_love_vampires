#pragma once
#include "StatusEffect.h"
#include "CombatantTemplate_Attr.h"

class StatusEffect_Burn : public StatusEffect<FCombatantTemplate_Attr> {
	bool _burnThisFrame = false;

public:
	StatusEffect_Burn(float duration, float magnitude);
	StatusEffect_Burn() = delete;
	void prebonusStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override {}
	void multiplierStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override {}
	void postbonusStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override;
	void burnTick() { _burnThisFrame = true; }
};