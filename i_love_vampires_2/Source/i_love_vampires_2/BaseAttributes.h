#pragma once
#include <functional>
#include "EffectStruct.h"
#include "CoreMinimal.h"
class Stat;
class CombatantAttributes;

class BaseAttributes {
protected:
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) = 0;
	virtual void modifyAttributes(const CombatantAttributes* modifiers) {}

public:
	BaseAttributes() = default;
	BaseAttributes(const BaseAttributes& other) = default;
	BaseAttributes(BaseAttributes&& other) = default;
	BaseAttributes& operator=(const BaseAttributes& other) = default;
	BaseAttributes& operator=(BaseAttributes&& other) = default;
	virtual void discretizeFull() = 0;
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) = 0;
	
	void tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects, const CombatantAttributes* modifiers);
	void tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects);
};

class Stat {
	float _final;
	bool _softReset = false;
public:
	void discretize();
	const float _base;
	float _prebonus;
	float _postbonus;
	float _multiplier;
	float _offset;
	Stat() = delete;
	Stat(const Stat& other) : _final(other._final), _base(other._base), _prebonus(other._prebonus), _postbonus(other._postbonus), _multiplier(other._multiplier), _offset(other._offset) {}
	Stat(Stat&& other) : _final(other._final), _base(other._base), _prebonus(other._prebonus), _postbonus(other._postbonus), _multiplier(other._multiplier), _offset(other._offset) {}
	// copy and move deleted due to const member
	Stat& operator=(const Stat& other) = delete;
	Stat& operator=(Stat&& other) = delete;
	Stat(float base) : _final(base), _base(base), _prebonus(0), _postbonus(0), _multiplier(0), _offset(0) {}
	static float calculateFinal(Stat& stat) {
		stat._final = (stat._base + stat._prebonus) * (1 + stat._multiplier) + stat._postbonus + stat._offset;
		return stat._final;
	}
	float getFinal() const {
		return _final;
	}
	static void softReset(Stat& stat) {
		stat._prebonus = 0;
		stat._postbonus = 0;
		stat._multiplier = 0;
		// The starting value of a Stat each frame is set by ModifyAttributes. Setting _final=_base is
		// just default behaviour for subclasses that implement ModifyAttributes as noop.
		stat._final = stat._base;
		stat._softReset = true;
	}
	void modify(float newVal);
};

