#include "Combatant.h"
#include "CombatantAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CombatantData.h"

ACombatant::ACombatant()
{
	abilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	checkSlow(IsValid(abilitySystemComponent));

	attributeSet = abilitySystemComponent->GetSet<UCombatantAttributeSet>();

	name = "Combatant";
}

//ACombatant::ACombatant(const FCombatantData& combatantData)
//{
//	abilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
//	checkSlow(IsValid(abilitySystemComponent));
//
//	attributeSet = abilitySystemComponent->GetSet<UCombatantAttributeSet>(combatantData);
//
//	name = combatantData.name;
//}