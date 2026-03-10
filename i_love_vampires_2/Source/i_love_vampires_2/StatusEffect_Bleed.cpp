#include "StatusEffect_Bleed.h"

void StatusEffect_Bleed::postbonusStep(std::unordered_map<CombatantAttribute::MyEnum, float>& finalAttributes, std::unordered_map<CombatantAttribute::MyEnum, float>& attributeOffsets, float delta) {
	attributeOffsets._currentHP -= _magnitude * delta;
}