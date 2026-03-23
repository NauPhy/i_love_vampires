#pragma once
#include "GeneralAttributeWrapper.h"
#include "EffectStruct.h"
#include "CoreMinimal.h"
#include <memory>

class BaseAttributeSet {
	TMap<FEffectStruct> _statusEffects;
protected:
	const TMap<FEffectStruct>& getStatusEffects() { return _statusEffects; }

public:
	// not automatic
	virtual void tick(float delta);
	void inflictStatus(const FEffectStruct& statusEffect) { _statusEffects.Add(statusEffect); }
};