#pragma once
#include "EffectStruct.h"
#include "CoreMinimal.h"
#include <memory>
#include <vector>

class BaseAttributeSet {
	const static inline EStatus _BURN = EStatus::burn;
	const static inline EStatus _POISON = EStatus::poison;

	TArray<FEffectStruct> _statusEffects;

	void handleBurn();
	void handlePoison();
	std::vector<int> getStatusesOfType(EStatus, float& highestMagnitude, float& longestDuration);
	void removeStatusesOfType(EStatus);

protected:
	const TArray<FEffectStruct>& getStatusEffects() { return _statusEffects; }
	int getStatusCount(EStatus type);

public:
	virtual ~BaseAttributeSet() = default;
	// not automatic
	virtual void tick(float delta);
	void inflictStatus(const FEffectStruct& statusEffect) { _statusEffects.Add(statusEffect); }
};