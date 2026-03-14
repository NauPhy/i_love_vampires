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
		if (!IsValid(_statusEffects[i])) {
			_statusEffects.RemoveAt(i);
		}
	}
	for (auto it = _callbacks.begin(); it != _callbacks.end();) {
		if (!it->tick()) {
			it = _callbacks.erase(it);
		}
		else {
			it++;
		}
	}
}

template<typename T>
bool ABaseAttributeSet::addCallback(TSubclassOf<UBaseAttributeComponent> componentClass, float T::* member, std::function<void(float, float)> callback) {
	UBaseAttributeComponent* component = FindComponentByClass(componentClass);
	if (component == nullptr) {
			return false;
	}
	T* attrPointer = Cast<T>(component->getFinal());
	if (attrPointer == nullptr) {
		return false;
	}
	callbackClass newCallback = callbackClass(component, &(attrPointer->*member), callback);
	_callbacks.push_back(newCallback);
	return true;
}