#pragma once
#include "AttributeModifier.h"
#include "CombatantAttributeSetEnum.h"

template <typename TRow>
class StatusEffect {
protected:
	float _duration = 0;
	const float _magnitude = 0;

public:
	StatusEffect(float duration, float magnitude) : _duration(duration), _magnitude(magnitude) {}
	StatusEffect() = delete;
	virtual void prebonusStep(TRow& finalAttributes, TRow& attributeOffsets, float delta) = 0;
	virtual void multiplierStep(TRow& finalAttributes, TRow& attributeOffsets, float delta) = 0;
	virtual void postbonusStep(TRow& finalAttributes, TRow& attributeOffsets, float delta) = 0;
	float getDuration() const { return _duration; }
};