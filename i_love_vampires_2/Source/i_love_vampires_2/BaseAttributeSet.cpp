#include "BaseAttributeSet.h"

void ABaseAttributeSet::tick(float delta) {
	for (const auto& statusEffect : _statusEffects) {
		if (IsValid(statusEffect)) {
			statusEffect->prebonusStep(delta, this);
		}
	}
	for (const auto& statusEffect : _statusEffects) {
		if (IsValid(statusEffect)) {
			statusEffect->multiplierStep(delta, this);
		}
	}
	for (const auto& statusEffect : _statusEffects) {
		if (IsValid(statusEffect)) {
			statusEffect->postbonusStep(delta, this);
		}
	}
	for (auto i = _statusEffects.Num() - 1; i > -1; i--)
	{
		if (!IsValid(_statusEffects[i]) || _statusEffects[i]->getDuration() <= 0) {
			_statusEffects.RemoveAt(i);
		}
	}
	for (auto it = _callbacks.begin(); it != _callbacks.end();) {
		CallbackBase* callback = (*it).get();
		if (!callback->tick()) {
			it = _callbacks.erase(it);
		}
		else {
			it++;
		}
	}
}