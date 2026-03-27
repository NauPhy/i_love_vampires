#pragma once
#include "EffectStruct.h"
#include "CoreMinimal.h"
#include <memory>

class BaseAttributeSet {
	TArray<FEffectStruct> _statusEffects;
protected:
	const TArray<FEffectStruct>& getStatusEffects() { return _statusEffects; }

public:
	virtual ~BaseAttributeSet() = default;
	// not automatic
	virtual void tick(float delta);
	void inflictStatus(const FEffectStruct& statusEffect) { _statusEffects.Add(statusEffect); }
};