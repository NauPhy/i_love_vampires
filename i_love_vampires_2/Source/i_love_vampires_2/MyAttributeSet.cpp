#include "MyAttributeSet.h"
#include "StatusEffect.h"
#include "Definitions.h"

namespace {
	const float* getMember(size_t offset, uint8* base) {
		if (offset >= sizeof(TRow)) {
			LOGERROR("UMyAttributeSet::getMember - offset is out of bounds");
			return nullptr;
		}
		uint8* byte = base + offset;
		return reinterpret_cast<const float*>(byte);
	}
}

float UMyAttributeSet::getBaseValue(size_t offset) const {
	const float* member = getMember(offset, reinterpret_cast<uint8*>(&_baseAttributes));
	if (member == nullptr)
		return 0;
	return *member;
}

float UMyAttributeSet::getFinalValue(size_t offset) const {
	const float* member = getMember(offset, reinterpret_cast<uint8*>(&_finalAttributes));
	if (member == nullptr)
		return 0;
	return *member;
}



virtual void UMyAttributeSet::tick(delta) {
	std::unordered_map<size_t, float> oldValues;
	for (const auto& pair : _callbacks) {
		oldValues[pair.first] = getFinalValue(pair.first);
	}
	reconstruct(delta);
	for (const auto& pair : _callbacks) {
		float newValue = getMemberValue(pair.first);
		if (abs(newValue - oldValues[pair.first]) > EPSILON)
			pair.second(oldValues[pair.first], newValue);
	}
	// UMyAttributeSet is responsible for the lifetime of status effects
	for (auto it = _statusEffects.begin(); it != _statusEffects.end();)
	{
		if (it->getDuration() <= 0)
			it = _statusEffects.erase(it);
		else
			++it;
	}
	_instantStatusQueue.clear();
}

void UMyAttributeSet::Initialise_UMyAttributeSet(FName ID, const TRow* rowReference) {
	if (rowReference == nullptr) {
		LOGERROR("UMyAttributeSet::Initialise_UMyAttributeSet - rowReference is null");
		Destroy();
		return;
	}
	_ID = ID;
	_baseAttributes = *rowReference;
	_finalAttributes = *rowReference;
	_rowSize = sizeof(TRow);
}

// Note that _finalValues and _attributeValues are passed by reference
void UMyAttributeSet::reconstruct(float delta) {
	updateFromModifiers();
	for (const auto& status : _statusEffects) {
		status->prebonusStep(_finalValues, _attributeOffsets, delta);
	}
	for (const auto& status : _statusEffects) {
		status->multiplierStep(_finalValues, _attributeOffsets, delta);
	}
	for (const auto& status : _statusEffects) {
		status->postbonusStep(_finalValues, delta);
	}
	// I cannot think of a reason why instant status effects would need a prebonus or multiplier step, so they are omitted for safety.
	for (const auto& status : _instantStatusQueue) {
		status->postbonusStep(&_attributeOffsets, delta);
	}
}

void UMyAttributeSet::addCallback(size_t offset, std::function<void(float, float)> callback) {
	_callbacks[offset] = callback;
}

size_t UMyAttributeSet::calculateOffset(const TRow& structRef, const float& memberRef) {
	const uint8* base = reinterpret_cast<const uint8*>(&structRef);
	const uint8* member = reinterpret_cast<const uint8*>(&memberRef);
	size_t offset = member - base;
	if (offset >= sizeof(TRow)) {
		LOGERROR("UMyAttributeSet::calculateOffset - member reference is out of bounds");
		return 0;
	}
	return offset;
}

void UMyAttributeSet::inflictInstantStatus(std::unique_ptr<StatusEffect> statusEffect) {
	_instantStatusQueue.push_back(std::move(statusEffect));
}

void UMyAttributeSet::inflictStatus(std::unique_ptr<StatusEffect> statusEffect) {
	_statusEffects.push_back(std::move(statusEffect));
}