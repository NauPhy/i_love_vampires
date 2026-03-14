#include "StatusEffect_Bleed.h"
#include "Combatant.h"

void UStatusEffect_Bleed::postbonusStep(float delta) {
	UCombatantAttributes* attr = nullptr;
	if (!castOffsets<UCombatantAttributes>(attr))
		return;
	attr->_currentHP -= _magnitude * delta;
}