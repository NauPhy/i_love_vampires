#include "StatusEffect_Burn.h"
#include "MyGameplayStatics.h"

StatusEffect_Burn::StatusEffect_Burn(float duration, float magnitude, float chance) : StatusEffect(duration, magnitude, chance), _burnThisFrame(false) {

}

void StatusEffect_Burn::postbonusStep(FCombatantAttributes& finalAttributes, FCombatantAttributes& attributeOffsets, float delta) {
	if (_burnThisFrame) {
		attributeOffsets._currentHP -= (_magnitude / 100.0f) * finalAttributes._maxHP;
		_burnThisFrame = false;
	}
}