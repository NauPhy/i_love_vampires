#include "BaseAttributeSet.h"

void BaseAttributeSet::tick(float delta) {
	for (auto& status : _statusEffects) {
		status._duration -= delta;
	}
	for (auto it = _statusEffects.begin(); it != _statusEffects.end();) {
		if (it->second._duration <= 0) {
			it = _statusEffects.erase(it);
		}
		else {
			++it;
		}
	}
}