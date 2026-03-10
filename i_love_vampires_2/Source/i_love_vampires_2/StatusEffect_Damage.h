#pragma once
#include "StatusEffect.h"
#include "CombatantTemplate_Attr.h"

class StatusEffect_Damage : public StatusEffect<FCombatantTemplate_Attr> {

public:
	StatusEffect_Damage(float magnitude) : StatusEffect(0, magnitude) {}
	StatusEffect_Damage() = delete;
	void prebonusStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override {}
	void multiplierStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override {}
	void postbonusStep(FCombatantTemplate_Attr& finalAttributes, FCombatantTemplate_Attr& attributeOffsets, float delta) override;
};