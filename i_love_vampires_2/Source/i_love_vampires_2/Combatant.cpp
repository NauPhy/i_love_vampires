#include "Combatant.h"
#include "CombatantAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CombatantTemplate.h"
#include "WeaponTemplate.h"
//#include "WeaponAbility.h"

ACombatant::ACombatant()
{
	abilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	if (IsValid(abilitySystemComponent)) {
		UCombatantAttributeSet* defaultSet = CreateDefaultSubobject<UCombatantAttributeSet>(TEXT("DefaultAttributeSet"));
		abilitySystemComponent->AddAttributeSetSubobject(defaultSet);
		attributeSet = abilitySystemComponent->GetSet<UCombatantAttributeSet>();
	}
	else {
		checkSlow(false)
	}
}
#define SET_ATTR(attrName) \
	abilitySystemComponent->SetNumericAttributeBase(attributeSet->Get##attrName##Attribute(), myTemplate.attrName);

void ACombatant::initialiseFromTemplate(const FCombatantTemplate& myTemplate)
{
	name = myTemplate.name;
	ID = myTemplate.ID;

	if (IsValid(attributeSet)) {
		SET_ATTR(maxHP)
			SET_ATTR(damageReduction_flat)
			SET_ATTR(damageReduction_percent)
			SET_ATTR(healthRegen_flat)
			SET_ATTR(healthRegen_percent)
			SET_ATTR(critChance)
			SET_ATTR(critMultiplier)
			SET_ATTR(attackSpeed)
			SET_ATTR(bonusBounces)
			SET_ATTR(bonusPierce)
			SET_ATTR(bonusProjectiles)
			SET_ATTR(projectileSpeed)
			SET_ATTR(projectileSize)
			SET_ATTR(AOESize)
			SET_ATTR(movementSpeed)
			SET_ATTR(range)
			SET_ATTR(contactDamage)
			abilitySystemComponent->SetNumericAttributeBase(attributeSet->GetcurrentHPAttribute(), myTemplate.maxHP);
	}
	else {
		checkSlow(false)
	}
}

//void ACombatant::giveWeapon(FWeaponTemplate weapon) {
//	UWeaponAbilitySpec = Spec(UWeaponAbility::)
//	abilitySystemComponent->
//}