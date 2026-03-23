#pragma once
#include "CoreMinimal.h"

template<typename attrType>
class GeneralAttributeWrapper {
	attrType _core;

public:
	//not automatic
	// Status effects are owned by attributeClass' owner. The owner is responsible for managing duration and deletion of elements, as well as handling
	// statusEffect subclass-specific internal state.
	// It will also be responsible for modifiers? Maybe not, we'll see.

	// Alternatively, instead of passing GlobalStatusState, just call MyGameplayStatics::GetCombatantManager->getBurnThisFrame()
	void tick(float delta, const TMap<FEffectStruct>& statusEffects) {
		_core.softReset();
		for (auto& status : _statusEffects)
			_core.applyStatus(status, delta);
	}
	GeneralAttributeWrapper() = delete;
	//extra copy
	GeneralAttributeWrapper(const attrType& core) : _core(core) {}
	const attrType& getCore() { return _core; }
	float getMember(float attrType::* member) const {
		return _core.*member;
	}
};