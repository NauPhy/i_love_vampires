#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <functional>
#include "BaseAttributeComponent.h"
#include <vector>
#include "Definitions.h"
#include <cmath>
#include "BaseAttributeSet.generated.h"

template <typename T>
class callbackClass {
	TWeakObjectPtr<UBaseAttributeComponent> component;
	const T::* _memberPtr = nullptr;
	float _lastValue = 0;
	std::function<void(float, float)> _callback;
public:
	callbackClass() = delete;
	callbackClass(UBaseAttributeComponent* component, const T::* memberPtr, std::function<void(float,float)> callback) : _component(component), _memberPtr(memberPtr), _callback(callback), _lastValue(*memberPtr) {}
	bool tick() {
		if (!_component.IsValid())
			return false;
		UBaseAttributes* temp = _component->getFinal();
		if (temp == nullptr)
			return false;
		const float newValue = final->*_memberPtr;
		if (std::abs(newValue - _lastValue) > EPSILON) {
			_callback(_lastValue, _newValue);
		}
		_lastValue = newValue;
		return true;
	}
};

UCLASS()
class I_LOVE_VAMPIRES_2_API ABaseAttributeSet : public AActor
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<UStatusEffect*> _statusEffects;

	std::vector<callbackClass> _callbacks;

public:
	// not automatic
	void tick(float delta);
	template<typename T>
	bool addCallback(TSubclassOf<UBaseAttributeComponent> componentClass, float T::* member, std::function<void(float, float)> callback);
};