#include "BaseTemplate.h"
#include "UObject/UObjectGlobals.h"

UBaseTemplate* UBaseTemplate::createOverrideCopy() const {
	UBaseTemplate* ret = DuplicateObject<UBaseTemplate>(this, GetOuter());
	ret->replaceOverrides();
	return ret;
}