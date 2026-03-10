#include "StatusEffect_Burn.h"
#include "MyGameplayStatics.h"

StatusEffect_Burn(float duration, float magnitude) : StatusEffect(duration, magnitude, _burnThisFrame(false)) {

}

void StatusEffect_Burn::postbonusStep(std::unordered_map<CombatantAttribute::MyEnum, float>& finalAttributes, std::unordered_map<CombatantAttribute::MyEnum, float>& attributeOffsets, float delta) {
	if (_burnThisFrame) {
		attributeOffsets._currentHP -= (_magnitude / 100.0f) * finalAttributes._maxHP;
		_burnThisFrame = false;
	}
}