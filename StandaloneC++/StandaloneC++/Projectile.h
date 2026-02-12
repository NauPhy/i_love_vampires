#pragma once
#include "Attack.h"
class Projectile : public Attack {
	enum projectileShape { circle, oval_bullet };
	projectileShape shape = circle;
	enum projectileTargeting { targeted, random, autoTargeted_random, autoTargeted_nearest};
	float radius = 1;
	float spreadAngle = 15;

	float bounce = 0;
	float pierce = 0;
	float projectileCount = 1;
	float projectileSpeed = 1;

	bool isHoming = false;
	bool infinitePiercing = false;
	bool infiniteRange = false;
};