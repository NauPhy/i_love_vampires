#include "StatusEffect.h"
#include "Definitions.h"

bool UStatusEffect::isFullyInitialised() const {
	return _firstInitialisationComplete && _secondInitialisationComplete;
}

template<typename attributeClass>
bool UStatusEffect::castFinal(attributeClass*& ret) {
	if (!isFullyInitialised()) {
		LOGERROR("StatusEffect_Damage::postbonusStep - status effect not fully initialised");
		return false;
	}
	if (_interface == nullptr || !_interface->isModificationPermitted()) {
		LOGERROR("StatusEffect_Damage::postbonusStep - interface is null or modification not permitted");
		return false;
	}
	// I'm not sure if it's possible for this function to run during destruction of the parent object, but I'd rather find out than be safe. Besides,
	// the "be safe" option is what LOGERROR() does in deployment? Is that the right word? Release, that's it.
	if (!_finalAttributes.IsValid()) {
		LOGERROR("StatusEffect_Damage::postbonusStep - attribute offsets not valid");
		return false;
	}
	ret = Cast<attributeClass>(_finalAttributes);
	if (ret == nullptr) {
		LOGERROR("StatusEffect_Damage::postbonusStep - cast failed");
		return false;
	}
	return true;
}

template<typename attributeClass>
bool UStatusEffect::castOffsets(attributeClass*& ret) {
	if (!isFullyInitialised()) {
		LOGERROR("StatusEffect_Damage::postbonusStep - status effect not fully initialised");
		return false;
	}
	if (_interface == nullptr || !_interface->isModificationPermitted()) {
		LOGERROR("StatusEffect_Damage::postbonusStep - interface is null or modification not permitted");
		return false;
	}
	if (!_attributeOffsets.IsValid()) {
		LOGERROR("StatusEffect_Damage::postbonusStep - attribute offsets not valid");
		return false;
	}
	ret = Cast<attributeClass>(_attributeOffsets);
	if (ret == nullptr) {
		LOGERROR("StatusEffect_Damage::postbonusStep - cast failed");
		return false;
	}
	return true;
}