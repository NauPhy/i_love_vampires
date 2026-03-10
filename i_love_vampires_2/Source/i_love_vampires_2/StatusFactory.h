#pragma once
#include "StatusEffect.h"
#include <memory>
#include "EffectStruct.h"

class StatusFactory {
	const static EStatus _DAMAGE = EStatus::damage;
	const static EStatus _BLEED = EStatus::bleed;
	const static EStatus _BURN = EStatus::burn;

public:
	static std::unique_ptr<StatusEffect> createStatusEffect(const FEffectStruct& effectStruct);
};