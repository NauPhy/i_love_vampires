#pragma once

namespace ProjectileShape {
	enum class MyEnum {
		circle
	};
	using enum MyEnum;
}
// Dependencies
// All
//    - Projectile.h
namespace AttackShape {
	enum class MyEnum {
		fan
	};
	using enum MyEnum;
}
// Dependencies
// All
//    - Projectile.h
namespace ProjectileTargeting {
	enum class MyEnum {
		skillshot,
		closest,
		random
	};
	using enum MyEnum;
}
// Dependencies
// All
//    - Projectile.h