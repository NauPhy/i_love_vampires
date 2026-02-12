#pragma once
#include <string>
class Combatant {
	std::string name = "Combatant";

	//Defense
	float maxHP = 1;
	float damageReduction_percent = 0;
	float damageReduction_flat = 0;
	float healthRegen_flat = 0;
	float healthRegen_percent = 0;
	//Offense
	float critChance = 0;
	float critMultiplier = 1;
	float attackSpeed = 1;
	float effectSize = 1;

	float bonusBounces = 0;
	float bonusPierce = 0;
	float bonusProjectiles = 0;
	float projectileSpeed = 1;
	float projectileSize = 1;
	//Utility
	float movementSpeed = 1;
	float range = 1;
	//Rarely used
	float contactDamage = 0;
	//elemental resistances
	//energy shield
};