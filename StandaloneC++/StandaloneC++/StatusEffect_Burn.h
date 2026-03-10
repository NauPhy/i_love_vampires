#pragma once

#include "StatusEffect.h"
#include <memory>

const CombatantAttributeEnum maxHPName = CombatantAttributeEnum::maxHP;
const CombatantAttributeEnum currentHPName = CombatantAttributeEnum::currentHP;

class StatusEffect_Burn : public StatusEffect {
public:
	StatusEffect_Burn(float duration, float magnitude, std::shared_ptr<bool> burnTimer) : StatusEffect(duration, magnitude), _burnTimer(burnTimer) {}
	StatusEffect_Burn() = delete;
	std::unordered_map<CombatantAttributeEnum, AttributeModifier> applyEffect(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes) override;
	std::unordered_map<CombatantAttributeEnum, AttributeModifier> tick(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes, float deltaTime) override;
	std::unordered_map<CombatantAttributeEnum, AttributeModifier> removeEffect(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes) override;
private:
	std::shared_ptr<bool> _burnTimer;
};