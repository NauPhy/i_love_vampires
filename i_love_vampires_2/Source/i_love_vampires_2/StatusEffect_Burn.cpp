#include "StatusEffect_Burn.h"
#include "Combatant.h"

void UStatusEffect_Burn::postbonusStep(float delta) {
	UCombatantAttributes* finalAttr = nullptr;
	if (!castFinal<UCombatantAttributes>(finalAttr))
		return;
	UCombatantAttributes* attrOffsets = nullptr;
	if (!castOffsets<UCombatantAttributes>(attrOffsets))
		return;
	if (_burnThisFrame) {
		attrOffsets->_currentHP -= (_magnitude / 100.0f) * finalAttr->_maxHP;
		_burnThisFrame = false;
	}
}