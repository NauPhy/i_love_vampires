#include "StatusEffect_Damage.h"
#include "Combatant.h"

void UStatusEffect_Damage::postbonusStep(float delta, ABaseAttributeSet* caller) {
	UCombatantComponent* component = caller->getComponent<UCombatantComponent>();
	if (component == nullptr)
		return;
	UCombatantAttributes* offsets = component->getOffsets<UCombatantAttributes>();
	if (offsets == nullptr)
		return;
	offsets->_currentHP -= _magnitude;
	UStatusEffect::postbonusStep(delta, caller);
}