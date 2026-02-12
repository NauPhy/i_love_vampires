// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatantAttributeSet.h"
#include "CombatantData.h"

UCombatantAttributeSet::UCombatantAttributeSet()
{
	maxHP.SetBaseValue(1.f);
	damageReduction_flat.SetBaseValue(0.f);
	damageReduction_percent.SetBaseValue(0.f);
	healthRegen_flat.SetBaseValue(0.f);
	healthRegen_percent.SetBaseValue(0.f);
	critChance.SetBaseValue(0.f);
	critMultiplier.SetBaseValue(2.f);
	attackSpeed.SetBaseValue(1.f);
	bonusBounces.SetBaseValue(0.f);
	bonusPierce.SetBaseValue(0.f);
	bonusProjectiles.SetBaseValue(0.f);
	projectileSpeed.SetBaseValue(1.f);
	projectileSize.SetBaseValue(1.f);
	AOESize.SetBaseValue(1.f);
	movementSpeed.SetBaseValue(1.f);
	range.SetBaseValue(1.f);
	contactDamage.SetBaseValue(0.f);
	currentHP.SetBaseValue(1.f);
}

//UCombatantAttributeSet::UCombatantAttributeSet(const FCombatantData& CombatantData)
//{
//	maxHP.SetBaseValue(CombatantData.maxHP);
//	damageReduction_flat.SetBaseValue(CombatantData.damageReduction_flat);
//	damageReduction_percent.SetBaseValue(CombatantData.damageReduction_percent);
//	healthRegen_flat.SetBaseValue(CombatantData.healthRegen_flat);
//	healthRegen_percent.SetBaseValue(CombatantData.healthRegen_percent);
//	critChance.SetBaseValue(CombatantData.critChance);
//	critMultiplier.SetBaseValue(CombatantData.critMultiplier);
//	attackSpeed.SetBaseValue(CombatantData.attackSpeed);
//	bonusBounces.SetBaseValue(CombatantData.bonusBounces);
//	bonusPierce.SetBaseValue(CombatantData.bonusPierce);
//	bonusProjectiles.SetBaseValue(CombatantData.bonusProjectiles);
//	projectileSpeed.SetBaseValue(CombatantData.projectileSpeed);
//	projectileSize.SetBaseValue(CombatantData.projectileSize);
//	AOESize.SetBaseValue(CombatantData.AOESize);
//	movementSpeed.SetBaseValue(CombatantData.movementSpeed);
//	range.SetBaseValue(CombatantData.range);
//	contactDamage.SetBaseValue(CombatantData.contactDamage);
//}