#include "StatusEffect_Damage.h"
#include "Combatant.h"

void UStatusEffect_Damage::postbonusStep(float delta, UBaseAttributeSet* caller) {
	UCombatantComponent* component = FindComponentByClass<UCombatantComponent>();
	if (component != nullptr) {
		component->_offsets->_currentHP -= _magnitude;
	}
	UStatusEffect::postbonusStep(delta, caller);
}