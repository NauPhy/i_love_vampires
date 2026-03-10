#include "pch.h"
#include "MyCombatantAttributeSet.h"
#include "CombatantAttributeList.h"
#include "Definitions.h"
//
MyCombatantAttributeSet::MyCombatantAttributeSet() {
	for (const auto& pair : COMBATANT_DEFINITIONS) {
		_attributes.emplace(pair.first, MyAttribute(pair.second, 0.0f, 0.0f, 0.0f));
	}
}
bool MyCombatantAttributeSet::getAttributeValue(CombatantAttributeEnum attributeName, float& ret) const {
	auto it = _attributes.find(attributeName);
	if (it == _attributes.end()) {
		return false;
	}
	const MyAttribute& attr = it->second;
	ret = (attr.baseValue + attr.prebonus) * (1.0f + attr.premultiplier) + attr.postbonus;
	
	return true;
}

void MyCombatantAttributeSet::inflictStatus(std::unique_ptr<StatusEffect> statusEffect) {
	_activeStatusEffects.push_back(std::move(statusEffect));
	std::unordered_map<CombatantAttributeEnum, float> currentAttributes;
	if (!getCurrentAttributes(currentAttributes)) {
		LOGERROR("Failed to get current attributes when inflicting status effect.");
		return;
	}
	auto modifiers = statusEffect->applyEffect(currentAttributes);
	addModifiers(modifiers);
}

bool MyCombatantAttributeSet::getCurrentAttributes(std::unordered_map<CombatantAttributeEnum, float>& ret) const {
	bool success = true;
	for (const auto& attr : _attributes) {
		if (!getAttributeValue(attr.first, ret[attr.first])) {
			LOGERROR("Failed to get attribute value for attribute: " + std::to_string(static_cast<int>(attr.first)));
			success = false;
			continue;
		}
	}
	return success;
}

void MyCombatantAttributeSet::tick(float deltaTime) {
	std::unordered_map<CombatantAttributeEnum, float> currentAttributes;
	if (!getCurrentAttributes(currentAttributes)) {
		LOGERROR("Failed to get current attributes when inflicting status effect.");
		return;
	}
	for (auto it = _activeStatusEffects.begin(); it != _activeStatusEffects.end();) {
		std::unique_ptr<StatusEffect>& effect = *it;
		if (effect->getDuration() <= 0) {
			auto modifiers = effect->removeEffect(currentAttributes);
			addModifiers(modifiers);
			it = _activeStatusEffects.erase(it);
		}
		else {
			auto modifiers = (*it)->tick(currentAttributes, deltaTime);
			addModifiers(modifiers);
			it++;
		}
	}
}

void MyCombatantAttributeSet::addModifiers(const std::unordered_map<CombatantAttributeEnum, AttributeModifier>& modifiers) {
	for (const auto& mod : modifiers) {
		auto it = _attributes.find(mod.first);
		if (it == _attributes.end()) {
			LOGERROR("Invalid attribute modifier for attribute: " + std::to_string(static_cast<int>(mod.first)));
			continue;
		}
		MyAttribute& attr = it->second;
		attr.prebonus += mod.second.prebonus;
		attr.premultiplier += mod.second.premultiplier;
		attr.postbonus += mod.second.postbonus;
	}
}

void MyCombatantAttributeSet::dealDamage(float damage) {
	auto it = _attributes.find(CombatantAttributeEnum::currentHP);
	if (it == _attributes.end()) {
		LOGERROR("Current HP attribute not found when applying damage.");
		return;
	}
	it->second.postbonus -= damage;
}