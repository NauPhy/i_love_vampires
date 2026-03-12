#include "MyCombatantAttributeSet.h"
#include "StatusEffect_Burn.h"
#include <vector>
#include <memory>

void UMyCombatantAttributeSet::initialise_UMyCombatantAttributeSet(const FCombatantAttributes* rowRef) {
	Initialise_UMyAttributeSet(rowRef);
}

void UMyCombatantAttributeSet::burnTick() {
	const std::vector<std::unique_ptr<StatusEffect>>& statusEffects = getStatusEffects();
	for (const auto& statusEffect : statusEffects) {
		StatusEffect_Burn* burnEffect = dynamic_cast<StatusEffect_Burn*>(statusEffect.get());
		if (burnEffect != nullptr) {
			burnEffect->burnTick();
		}
	}
}