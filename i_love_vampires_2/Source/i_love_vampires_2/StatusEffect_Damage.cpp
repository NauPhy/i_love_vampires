#include "StatusEffect_Damage.h"

void StatusEffect_Damage::postbonusStep(std::unordered_map<CombatantAttribute::MyEnum, float>& finalAttributes, std::unordered_map<CombatantAttribute::MyEnum, float>& attributeOffsets, float delta) {
	attributeOffsets._currentHP -= magnitude;
}