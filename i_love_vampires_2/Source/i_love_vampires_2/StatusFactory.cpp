#include "StatusFactory.h"
#include "StatusEffect_Bleed.h"
#include "StatusEffect_Damage.h"
#include "StatusEffect_Burn.h"

#include "Definitions.h"

std::unique_ptr<StatusEffect> StatusFactory::createStatusEffect(const EffectStruct& specs) {
	std::unique_ptr<StatusEffect> ret = nullptr;
	if (specs._type == _DAMAGE) {
		ret = std::make_unique<StatusEffect_Damage>(specs._magnitude, specs._chance);
	}
	elif(specs._type == _BLEED) {
		ret = std::make_unique<StatusEffect_Bleed>(specs._magnitude, specs._duration, specs._chance);
	}
	elif(specs._type == _BURN) {
		ret = std::make_unique<StatusEffect_Burn>(specs._magnitude, specs._duration, specs._chance);
	}
	else {
		LOGERROR("StatusFactory::createStatusEffect - not implemented");
	}
	return std::move(ret);
}