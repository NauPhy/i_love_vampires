#pragma once
#include "Attack.h"

class AOE : public Attack {
	enum aoeShape { circle, arc };
	aoeShape shape = circle;
	enum aoeTargeting { self, targeted, random, autoTargeted_random, autoTargeted_nearest};
	aoeTargeting targeting = self;
	float radius = 1;
	float duration = 5;
	float warmup_postTargeting = 0.5;
};