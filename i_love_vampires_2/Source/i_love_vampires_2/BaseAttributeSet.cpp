#include "BaseAttributeSet.h"

void ABaseAttributeSet::tick(float delta) {
	TArray<UBaseAttributeComponent*> components;
	GetComponents(components, false);
	for (auto& component : components) {
		component->_final = component->_base;
		component->modifyAttributes(_modifiers);
	}
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
	for (auto& component : components) {
		component->_final = component->_base
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

void ABaseAttributeSet::initialise_ABaseAttributeSet(AActor* caller) {
	_owner = TWeakObjectPtr<AActor>(caller);
	_initialised = true;
}

void ABaseAttributeSet::Tick(float delta) {
	if (!_initialised)
		return;
	if (!_owner.IsValid()) {
		Destroy();
		return;
	}
}