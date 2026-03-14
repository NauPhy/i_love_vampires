#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseAttributes.h"
#include "StatusEffectInterface.h"
#include <memory>
#include "StatusEffect.generated.h"
class UMyAttributeSet;

UCLASS()
class I_LOVE_VAMPIRES_2_API UStatusEffect : public UObject {
	GENERATED_BODY()

	bool isFullyInitialised() const;

protected:
	bool _firstInitialisationComplete = false;
	bool _secondInitialisationComplete = false;
	float _duration = 0;
	float _magnitude = 0;
	float _chance = 1;
	std::shared_ptr<StatusEffectInterface> _interface = nullptr;
	TWeakObjectPtr<UBaseAttributes> _finalAttributes = nullptr;
	TWeakObjectPtr<UBaseAttributes> _attributeOffsets = nullptr;
	template<typename attributeClass>
	bool castFinal(attributeClass*&);
	template<typename attributeClass>
	bool castOffsets(attributeClass*&);

public:
	// I didn't really want to give this class extended ownerwhip of the attributes, but it's the only way to get compile time safety.
	// I'm going to mitigate this by passing a reference to the attribute set during initialisation and calling "isModificationAllowed". That way the authority still rests in a single class.
	// This creates a circular dependency, but hopefully the forward declaration handles it.
	void initialise_UStatusEffect(float duration, float magnitude, float chance) {
		_duration = duration;
		_magnitude = magnitude;
		_chance = chance;
		_firstInitialisationComplete = true;
	}
	void initialise_secondStep(std::shared_ptr<StatusEffectInterface> interface, UBaseAttributes* finalAttributes, UBaseAttributes* offsets) {
		_interface = interface;
		_finalAttributes = TWeakObjectPtr<UBaseAttributes>(finalAttributes);
		_attributeOffsets = TWeakObjectPtr<UBaseAttributes>(offsets);
		_secondInitialisationComplete = true;
	}
	virtual void prebonusStep(float delta) {}
	virtual void multiplierStep(float delta) {}
	virtual void postbonusStep(float delta) {}
	float getDuration() const { return _duration; }
};