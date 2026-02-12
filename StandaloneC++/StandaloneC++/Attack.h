#pragma once
#include "enums.h"
#include <string>

class Attack {
	std::string name = "Attack";
	float damage = 1;
	float bonusCrit = 0;
	float bonusCritMultiplier = 0;
	float warmup = 3;
	statusEffect effect = none;
	float statusChance = 0.5;
};