#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <functional>
#include "BaseAttributeComponent.h"
#include <vector>
#include "Definitions.h"
#include <cmath>
#include <memory>
#include "StatusEffect.h"
#include <type_traits>
#include "BaseAttributeSet.generated.h"

class CallbackBase {
public:
	virtual ~CallbackBase() = default;
	virtual bool tick() = 0;
};

template <typename T>
class CallbackClass : public CallbackBase {
	TWeakObjectPtr<UBaseAttributeComponent> _component;
	const float T::* _memberPtr = nullptr;
	float _lastValue = 0;
	const std::function<void(float, float)> _callback;
public:
	// std::unique_ptr does not allow deleted default constructors
	CallbackClass() { LOGERROR("CallbackClass default constructor should not be used"); }
	CallbackClass(UBaseAttributeComponent* component, const float T::* memberPtr, std::function<void(float,float)> callback) : _component(component), _memberPtr(memberPtr), _callback(callback), _lastValue(0) {
		T* temp = _component->getFinal<T>();
		_lastValue = temp->*_memberPtr;
	}
	virtual bool tick() override {
		if (!_component.IsValid())
			return false;
		T* temp = _component->getFinal<T>();
		if (temp == nullptr)
			return false;
		const float newValue = temp->*_memberPtr;
		if (std::abs(newValue - _lastValue) > EPSILON) {
			_callback(_lastValue, newValue);
		}
		_lastValue = newValue;
		return true;
	}
};

UCLASS()
class I_LOVE_VAMPIRES_2_API ABaseAttributeSet : public AActor
{
	GENERATED_BODY()

	TWeakObjectPtr<AActor> _owner = nullptr;
	bool _initialised = false;
	std::vector<std::unique_ptr<CallbackBase>> _callbacks;
protected:
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	TArray<UStatusEffect*> _statusEffects;
public:
	ABaseAttributeSet() { PrimaryActorTick.bCanEverTick = true; }
	void initialise_ABaseAttributeSet(AActor* caller);
	// this IS automatic. Most stuff shouldn't be done here.
	virtual void Tick(float delta) override;
	// not automatic
	void tick(float delta);
	template<typename componentType, typename attributeType>
	bool addCallback(float attributeType::* member, std::function<void(float, float)> callback);
	template<typename T>
	T* getComponent() const;
	template<typename compType, typename attrType>
	attrType* getFinal() const;
	void inflictStatus(UStatusEffect* statusEffect) { _statusEffects.Add(statusEffect); }
};
///////////////////////////////////////////////////////////////////////////////
template<typename componentType, typename attributeType>
bool ABaseAttributeSet::addCallback(float attributeType::* member, std::function<void(float, float)> callback) {
	static_assert(TIsDerivedFrom<attributeType, UBaseAttributes>::IsDerived, "T must derive from UBaseAttributes");
	static_assert(TIsDerivedFrom<componentType, UBaseAttributeComponent>::IsDerived, "T must derive from UBaseAttributeComponent");
	TSubclassOf<UBaseAttributeComponent> componentClass = componentType::StaticClass();

	UBaseAttributeComponent* component = getComponent<componentType>();
	if (component == nullptr) {
		LOGERROR("ABaseAttributeSet::addCallback - component not of expected type");
		return false;
	}
	attributeType* attrPointer = component->getFinal<attributeType>();
	if (attrPointer == nullptr) {
		LOGERROR("ABaseAttributeSet::addCallback - component final attributes not of expected type");
		return false;
	}
	std::unique_ptr<CallbackClass<attributeType>> newCallback = std::make_unique<CallbackClass<attributeType>>(component, member, callback);
	_callbacks.push_back(std::move(newCallback));
	return true;
}

template<typename T>
T* ABaseAttributeSet::getComponent() const {
	static_assert(TIsDerivedFrom<T, UBaseAttributeComponent>::IsDerived, "T must derive from UBaseAttributeComponent");
	TSubclassOf<T> compType = T::StaticClass();
	UActorComponent* foundComponent = FindComponentByClass(compType);
	return Cast<T>(foundComponent);
}

template<typename compType, typename attrType>
attrType* ABaseAttributeSet::getFinal() const {
	static_assert(TIsDerivedFrom<compType, UBaseAttributeComponent>::IsDerived, "compType must derive from UBaseAttributeComponent");
	static_assert(TIsDerivedFrom<attrType, UBaseAttributes>::IsDerived, "attrType must derive from UBaseAttributes");
	compType* component = getComponent<compType>();
	if (component == nullptr) {
		return nullptr;
	}
	attrType* attrPointer = component->getFinal<attrType>();
	if (attrPointer == nullptr) {
		LOGERROR("ABaseAttributeSet::getFinal - component final attributes not of expected type");
		return nullptr;
	}
	return attrPointer;
}