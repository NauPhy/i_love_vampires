#include "Combatant.h"
#include "CombatantAttributeSet.h"
#include "CombatantTemplate.h"
#include "StatusAttributeSet.h"
#include "AbilitySystemComponent.h"

ACombatant::ACombatant() : _combatantAttributeRefs()
{
	abilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	if (IsValid(abilitySystemComponent)) {
		{
			UCombatantAttributeSet* defaultSet = CreateDefaultSubobject<UCombatantAttributeSet>(TEXT("DefaultCombatantSet"));
			abilitySystemComponent->AddAttributeSetSubobject(defaultSet);
			combatantAttributes = abilitySystemComponent->GetSet<UCombatantAttributeSet>();
			UCombatantAttributeSet::GetAttributesFromSetClass(UCombatantAttributeSet::StaticClass(), _combatantAttributeRefs);
		}
		{
			UStatusAttributeSet* defaultSet = CreateDefaultSubobject<UStatusAttributeSet>(TEXT("DefaultStatusSet"));
			abilitySystemComponent->AddAttributeSetSubobject(defaultSet);
			statusAttributes = abilitySystemComponent->GetSet<UStatusAttributeSet>();
			//UStatusAttributeSet::GetAttributesFromSetClass(UStatusAttributeSet::StaticClass(), _statusAttributeRefs);
		}
	}
	else {
		checkSlow(false)
	}
}
void ACombatant::initialiseFromTemplate(const FCombatantTemplate& myTemplate)
{
	name = myTemplate.name;
	ID = myTemplate.ID;

	if (IsValid(combatantAttributes)) {
		for (const FGameplayAttribute& attr : _combatantAttributeRefs) {
			abilitySystemComponent->SetNumericAttributeBase(attr, myTemplate.getAttributeValue(attr));
			abilitySystemComponent->GetGameplayAttributeValueChangeDelegate(attr).AddUObject(this, &ACombatant::onAttributeChangedReroute);
		}
	}
	else {
		checkSlow(false)
	}
}
void ACombatant::onAttributeChangedReroute(const FOnAttributeChangeData& data)
{
	onAttributeChanged(data.Attribute, data.NewValue, data.OldValue);
}
void ACombatant::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (const auto& attr : _combatantAttributeRefs) {
		abilitySystemComponent->GetGameplayAttributeValueChangeDelegate(attr).RemoveAll(this);
	}
	Super::EndPlay(EndPlayReason);
}