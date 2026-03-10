#include "pch.h"
#include "StatusEffect_Bleed.h"

using std::unordered_map;

unordered_map<CombatantAttributeEnum, AttributeModifier> StatusEffect_Bleed::applyEffect(const unordered_map<CombatantAttributeEnum, float>& currentAttributes) {
	return {};
}
unordered_map<CombatantAttributeEnum, AttributeModifier> StatusEffect_Bleed::tick(const unordered_map<CombatantAttributeEnum, float>& currentAttributes, float deltaTime) {
	_duration -= deltaTime;
	float damage = _magnitude * deltaTime;
	return {
		{currentHPName, { 0, 0, -damage }}
	};
}
unordered_map<CombatantAttributeEnum, AttributeModifier> StatusEffect_Bleed::removeEffect(const unordered_map<CombatantAttributeEnum, float>& currentAttributes) {
	return {};
}