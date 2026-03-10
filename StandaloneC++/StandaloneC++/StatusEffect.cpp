#include "pch.h"
#include "StatusEffect.h"

bool StatusEffect::getAttrValue(const std::unordered_map<CombatantAttributeEnum, float>& currentAttributes, const CombatantAttributeEnum& attributeName, float& ret) {
	auto it = currentAttributes.find(attributeName);
	if (it != currentAttributes.end()) {
		ret = it->second;
		return true;
	}
	return false;
}