#include "pch.h"
#include "StatusEffect_Burn.h"

using std::unordered_map;

unordered_map<CombatantAttributeEnum, AttributeModifier> StatusEffect_Burn::applyEffect(const unordered_map<CombatantAttributeEnum, float>& currentAttributes) {
	return {};
}
unordered_map<CombatantAttributeEnum, AttributeModifier> StatusEffect_Burn::tick(const unordered_map<CombatantAttributeEnum, float>& currentAttributes, float deltaTime) {
	_duration -= deltaTime;
	if (_burnTimer && *_burnTimer) {
		float maxHP = 0;
		if (!getAttrValue(currentAttributes, maxHPName, maxHP))
			return {};
		float damage = maxHP * _magnitude;
		return {
			{currentHPName, { 0, 0, -damage }}
		};
	}
	return {};
}
unordered_map<CombatantAttributeEnum, AttributeModifier> StatusEffect_Burn::removeEffect(const unordered_map<CombatantAttributeEnum, float>& currentAttributes) {
	return {};
}