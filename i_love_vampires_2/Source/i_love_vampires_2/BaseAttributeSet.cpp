#include "BaseAttributeSet.h"
#include "Definitions.h"

void BaseAttributeSet::tick(float delta) {
	for (auto& status : _statusEffects) {
		status._duration -= delta;
	}
	int index = 0;
	while (index < _statusEffects.Num()) {
		if (_statusEffects[index]._duration <= EPSILON) {
			_statusEffects.RemoveAt(index);
		}
		else {
			index++;
		}
	}
	handleBurn();
	handlePoison();
}

std::vector<int> BaseAttributeSet::getStatusesOfType(EStatus type, float& highestMagnitude, float& longestDuration) {
	std::vector<int> ret;
	highestMagnitude = -1;
	longestDuration = -1;
	for (int i = 0; i < _statusEffects.Num(); i++) {
		if (_statusEffects[i]._type == type) {
			ret.push_back(i);
			if (_statusEffects[i]._magnitude > highestMagnitude)
				highestMagnitude = _statusEffects[i]._magnitude;
			if (_statusEffects[i]._duration > longestDuration)
				longestDuration = _statusEffects[i]._duration;
		}
	}
	return ret;
}

void BaseAttributeSet::removeStatusesOfType(EStatus type) {
	int index = 0;
	while (index < _statusEffects.Num()) {
		if (_statusEffects[index]._type == type) {
			_statusEffects.RemoveAt(index);
		}
		else {
			index++;
		}
	}
}

int BaseAttributeSet::getStatusCount(EStatus type) {
	int count = 0;
	for (const auto& status : _statusEffects) {
		if (status._type == type)
			count++;
	}
	return count;
}

void BaseAttributeSet::handleBurn() {
	float longestDuration = -1;
	float highestMagnitude = -1;
	std::vector<int> burnStatuses = getStatusesOfType(_BURN, highestMagnitude, longestDuration);
	if (burnStatuses.size() > 1) {
		removeStatusesOfType(_BURN);
		FEffectStruct newBurn = FEffectStruct(_BURN, highestMagnitude, longestDuration, 1);
		inflictStatus(newBurn);
	}
}

void BaseAttributeSet::handlePoison() {
	float longestDuration = -1;
	float unused = 0;
	std::vector<int> poisonStatuses = getStatusesOfType(_POISON, unused, longestDuration);
	if (poisonStatuses.size() > 1) {
		FEffectStruct newPoison = FEffectStruct(_POISON, 0, longestDuration, 1);
		for (int i = 0; i < poisonStatuses.size(); i++) {
			newPoison._magnitude += _statusEffects[poisonStatuses[i]]._magnitude;
		}
		removeStatusesOfType(_POISON);
		inflictStatus(newPoison);
	}
	for (auto& status : _statusEffects) {
		if (status._type == _POISON) {
			status._magnitude *= 1.1f;
			break;
		}
	}
}

bool BaseAttributeSet::hasPersistentStatus() const {
	for (const auto& status : _statusEffects) {
		if (status._duration > EPSILON)
			return true;
	}
	return false;
}