#include "StatusEffect_Damage.h"
#include "Combatant.h"

void UStatusEffect_Damage::postbonusStep(float delta) {
	UCombatantAttributes* attr = nullptr;
	if (!castOffsets<UCombatantAttributes>(attr))
		return;
	attr->_currentHP -= _magnitude;
}