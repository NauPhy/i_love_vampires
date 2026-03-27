#include "BaseAttributeSet.h"

void BaseAttributeSet::tick(float delta) {
	for (auto& status : _statusEffects) {
		status._duration -= delta;
	}
	int index = 0;
	while (index < _statusEffects.Num()) {
		if (_statusEffects[index]._duration <= 0) {
			_statusEffects.RemoveAt(index);
		}
		else {
			index++;
		}
	}
}