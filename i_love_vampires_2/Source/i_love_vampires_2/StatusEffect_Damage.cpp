#include "StatusEffect_Damage.h"

void StatusEffect_Damage::postbonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) {
	attributeOffsets._currentHP -= magnitude;
}