#include "StatusEffect_Bleed.h"
#include "Combatant.h"

void UStatusEffect_Bleed::postbonusStep(float delta, UBaseAttributeSet* caller) {
	UCombatantComponent* component = FindComponentByClass<UCombatantComponent>();
	if (component != nullptr) {
		component->_offsets->_currentHP -= _magnitude * delta;
	}
	UStatusEffect::postbonusStep(delta, caller);
}