#pragma once

template <typename TRow>
class StatusEffect {
protected:
	float _duration = 0;
	const float _magnitude = 0;
	const float _chance = 1;

public:
	StatusEffect(float duration, float magnitude, float chance) : _duration(duration), _magnitude(magnitude), _chance(chance) {}
	StatusEffect() = delete;
	~StatusEffect() {}
	virtual void prebonusStep(TRow& finalAttributes, TRow& attributeOffsets, float delta) = 0;
	virtual void multiplierStep(TRow& finalAttributes, TRow& attributeOffsets, float delta) = 0;
	virtual void postbonusStep(TRow& finalAttributes, TRow& attributeOffsets, float delta) = 0;
	float getDuration() const { return _duration; }
};