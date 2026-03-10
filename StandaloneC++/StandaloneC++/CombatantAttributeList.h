#pragma once

#include <unordered_map>
#include <string>
// CHANGE TO FNAME
enum class CombatantAttributeEnum {
	maxHP,
	currentHP,
	damageReduction_flat,
	damageReduction_percent,
	healthRegen_flat,
	healthRegen_percent,
	critChance,
	critMultiplier,
	attackSpeed,
	bonusBounces,
	bonusPierce,
	bonusProjectiles,
	projectileSpeed,
	projectileSize,
	movementSpeed,
	range,
	contactDamage,
	selfSize,
	iFrameDuration
};
const std::unordered_map<CombatantAttributeEnum, float> COMBATANT_DEFINITIONS = {
	{CombatantAttributeEnum::maxHP, 1},
	{CombatantAttributeEnum::currentHP, 1},
	{CombatantAttributeEnum::damageReduction_flat, 0},
	{CombatantAttributeEnum::damageReduction_percent, 0},
	{CombatantAttributeEnum::healthRegen_flat, 0},
	{CombatantAttributeEnum::healthRegen_percent, 0},
	{CombatantAttributeEnum::critChance, 0},
	{CombatantAttributeEnum::critMultiplier, 0},
	{CombatantAttributeEnum::attackSpeed, 0},
	{CombatantAttributeEnum::bonusBounces, 0},
	{CombatantAttributeEnum::bonusPierce, 0},
	{CombatantAttributeEnum::bonusProjectiles, 0},
	{CombatantAttributeEnum::projectileSpeed, 0},
	{CombatantAttributeEnum::projectileSize, 0},
	{CombatantAttributeEnum::movementSpeed, 0},
	{CombatantAttributeEnum::range, 0},
	{CombatantAttributeEnum::contactDamage, 0},
	{CombatantAttributeEnum::selfSize, 0},
	{CombatantAttributeEnum::iFrameDuration, 0}
};
// NOTE
// These enums have the following dependencies:
// maxHP:
// - StatusEffect_Burn
// currentHP:
// - StatusEffect_Burn
// - StatusEffect_Bleed