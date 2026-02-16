#include "CombatantTemplate.h"
#include "CombatantAttributeSet.h"

float FCombatantTemplate::getAttributeValue(const FGameplayAttribute& attribute) const
{
	FString tempName = attribute.GetName();
	if (tempName == "maxHP")
		return maxHP;
	if (tempName == "currentHP")
		return maxHP;
	if (tempName == "damageReduction_flat")
		return damageReduction_flat;
	if (tempName == "damageReduction_percent")
		return damageReduction_percent;
	if (tempName == "healthRegen_flat")
		return healthRegen_flat;
	if (tempName == "healthRegen_percent")
		return healthRegen_percent;
	if (tempName == "critChance")
		return critChance;
	if (tempName == "critMultiplier")
		return critMultiplier;
	if (tempName == "attackSpeed")
		return attackSpeed;
	if (tempName == "bonusBounces")
		return bonusBounces;
	if (tempName == "bonusPierce")
		return bonusPierce;
	if (tempName == "bonusProjectiles")
		return bonusProjectiles;
	if (tempName == "projectileSpeed")
		return projectileSpeed;
	if (tempName == "projectileSize")
		return projectileSize;
	if (tempName == "AOESize")
		return AOESize;
	if (tempName == "movementSpeed")
		return movementSpeed;
	if (tempName == "range")
		return range;
	if (tempName == "contactDamage")
		return contactDamage;
	checkSlow(false);
		return 0.f;
}