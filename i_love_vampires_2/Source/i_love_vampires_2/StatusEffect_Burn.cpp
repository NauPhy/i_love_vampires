#include "StatusEffect_Burn.h"
#include "Combatant.h"

void UStatusEffect_Burn::postbonusStep(float delta, ABaseAttributeSet* caller) {
	if (_burnThisFrame) {
		UCombatantComponent* component = caller->getComponent<UCombatantComponent>();
		if (component == nullptr)
			return;
		const UCombatantAttributes* myFinal = component->getFinal<UCombatantAttributes>();
		if (myFinal == nullptr)
			return;
		UCombatantAttributes* offsets = component->getOffsets<UCombatantAttributes>();
		offsets->_currentHP -= (_magnitude / 100.0f) * myFinal->_maxHP;
		_burnThisFrame = false;
	}
	UStatusEffect::postbonusStep(delta, caller);
}