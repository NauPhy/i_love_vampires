#pragma once
#include <functional>
class FStatusEffect;
class Stat;

class BaseAttributes {
public:
	virtual void discretizeFull() = 0;
	virtual void applyStatus(const FEffectStruct& status, float delta) = 0;
	//virtual void applyToAllStats(const std::function<void(Stat&)>& func) = 0;
};

class Stat {
	float _final;
public:
	void discretize();
	const float _base;
	float _prebonus;
	float _postbonus;
	float _multiplier;
	float _offset;
	Stat() = delete;
	Stat(float base) : _base(base), _final(base), _prebonus(0), _postbonus(0), _multiplier(0), _offset(0) {}
	float calculateFinal() {
		_final = (_base + _prebonus) * (1 + _multiplier) + _postbonus + _offset;
		return _final;
	}
	float getFinal() {
		return _final;
	}
	void softReset() {
		_prebonus = 0;
		_postbonus = 0;
		_multiplier = 0;
	}
};