#include "BaseTemplate.h"
#include "UObject/UObjectGlobals.h"

UBaseTemplate* UBaseTemplate::createOverrideCopy(const UObject* caller) const {
	UBaseTemplate* ret = DuplicateObject<UBaseTemplate>(this, GetOuter());
	ret->dynamicDeepCopy(caller);
	ret->replaceOverrides();
	return ret;
}