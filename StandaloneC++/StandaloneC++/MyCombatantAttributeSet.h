#pragma once
#include "CombatantAttributeList.h"
#include "StatusEffect.h"
#include <unordered_map>
#include <vector>
#include <memory>

class MyCombatantAttributeSet {
public:
	struct MyAttribute {
		const float baseValue;
		float prebonus;
		float premultiplier;
		float postbonus;
		MyAttribute(float a, float b, float c, float d) : baseValue(a), prebonus(b), premultiplier(c), postbonus(d) {}
	};
	MyCombatantAttributeSet();
	bool getAttributeValue(CombatantAttributeEnum attributeName, float&) const;
	// Not automatic
	void tick(float deltaTime);
	void inflictStatus(std::unique_ptr<StatusEffect> statusEffect);
	void dealDamage(float damage);
private:
	std::unordered_map<CombatantAttributeEnum, MyAttribute> _attributes;
	std::vector<std::unique_ptr<StatusEffect>> _activeStatusEffects;
	void addModifiers(const std::unordered_map<CombatantAttributeEnum, AttributeModifier>& modifiers);
	bool getCurrentAttributes(std::unordered_map<CombatantAttributeEnum, float>& ret) const;
};