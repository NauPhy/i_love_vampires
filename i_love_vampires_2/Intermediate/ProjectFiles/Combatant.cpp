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

void ACombatant::initialiseFromTemplate(FString filename) {
	UDataDable* table = LoadObject<UDataTable>(nullptr, TEXT("/Game/Data/CombatantAttributes.CombatantAttributes"));
	checkSlow(table);
	static const FString contextString(TEXT("initialiseAttributes"));
	FAttributeMetaData* row = table->FindRow<FAttributeMetaData>(FName(name), ContextString);
	checkSlow(row);
	attributeSet.
}