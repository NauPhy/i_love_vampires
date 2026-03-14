#include "StatusEffect_Burn.h"
#include "Combatant.h"

void UStatusEffect_Burn::postbonusStep(float delta, UBaseAttributeSet* caller) {
	UCombatantComponent* component = FindComponentByClass<UCombatantComponent>();
	if (component != nullptr && _burnThisFrame) {
		component->_offsets->_currentHP -= (_magnitude / 100.0f) * component->_final->_maxHP;
		_burnThisFrame = false;
	}
	UStatusEffect::postbonusStep(delta, caller);
}