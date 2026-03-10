#pragma once
#include "MessengerStructs.h"
#include "CombatantAttributeList.h"

class StatusEffect {
public:
	StatusEffect(float duration, float magnitude) : _duration(duration), _magnitude(magnitude) {}
	StatusEffect() = delete;
	virtual std::unordered_map<CombatantAttributeEnum, AttributeModifier> applyEffect(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes) = 0;
	// Not automatic
	virtual std::unordered_map<CombatantAttributeEnum, AttributeModifier> tick(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes, float deltaTime) = 0;
	virtual std::unordered_map<CombatantAttributeEnum, AttributeModifier> removeEffect(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes) = 0;

	float getDuration() const { return _duration; }
protected:
	float _duration = 0;
	const float _magnitude = 0;

	static bool getAttrValue(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes, const CombatantAttributeEnum& attributeName, float& value);
};