#pragma once
#include "StatusEffect.h"
#include "CombatantTemplate_Attr.h"

class StatusEffect_Bleed : public StatusEffect<FCombatantTemplate_Attr> {
public:
	StatusEffect_Bleed(float duration, float magnitude) : StatusEffect(duration, magnitude) {}
	StatusEffect_Bleed() = delete;
	void prebonusStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override {}
	void multiplierStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override {}
	void postbonusStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override;
};