#include "StatusEffect_Bleed.h"

void StatusEffect_Bleed::postbonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) {
	attributeOffsets._currentHP -= _magnitude * delta;
}