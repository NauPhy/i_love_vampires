#include "StatusEffect_Bleed.h"
#include "Combatant.h"

void UStatusEffect_Bleed::postbonusStep(float delta, ABaseAttributeSet* caller) {
	UCombatantComponent* component = caller->getComponent<UCombatantComponent>();
	if (component == nullptr)
		return;
	UCombatantAttributes* offsets = component->getOffsets<UCombatantAttributes>();
	if (offsets == nullptr)
		return;
	offsets->_currentHP -= _magnitude * delta;
	UStatusEffect::postbonusStep(delta, caller);
}