#pragma once

#include "StatusEffect.h"
#include <memory>

const CombatantAttributeEnum maxHPName = CombatantAttributeEnum::maxHP;
const CombatantAttributeEnum currentHPName = CombatantAttributeEnum::currentHP;

class StatusEffect_Bleed : public StatusEffect {
public:
	StatusEffect_Bleed(float duration, float magnitude) : StatusEffect(duration, magnitude) {}
	StatusEffect_Bleed() = delete;
	std::unordered_map<CombatantAttributeEnum, AttributeModifier> applyEffect(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes) override;
	std::unordered_map<CombatantAttributeEnum, AttributeModifier> tick(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes, float deltaTime) override;
	std::unordered_map<CombatantAttributeEnum, AttributeModifier> removeEffect(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes) override;
};