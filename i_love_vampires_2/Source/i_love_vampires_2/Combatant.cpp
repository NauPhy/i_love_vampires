#include "Combatant.h"
#include "CombatantAttributeSet.h"
#include "CombatantTemplate.h"
#include "AbilitySystemComponent.h"
#include "WeaponTemplate.h"
//#include "GameFramework/Actor.h"

ACombatant::ACombatant() : _myAttributes()
{
	abilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	if (IsValid(abilitySystemComponent)) {
		UCombatantAttributeSet* defaultSet = CreateDefaultSubobject<UCombatantAttributeSet>(TEXT("DefaultAttributeSet"));
		abilitySystemComponent->AddAttributeSetSubobject(defaultSet);
		attributeSet = abilitySystemComponent->GetSet<UCombatantAttributeSet>();
		UCombatantAttributeSet::GetAttributesFromSetClass(UCombatantAttributeSet::StaticClass(), _myAttributes);
	}
	else {
		checkSlow(false)
	}
}
	
void ACombatant::initialiseFromTemplate(const FCombatantTemplate& myTemplate)
{
	name = myTemplate.name;
	ID = myTemplate.ID;

	if (IsValid(attributeSet)) {
		for (const FGameplayAttribute& attr : _myAttributes) {
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
	for (const auto& attr : _myAttributes) {
		abilitySystemComponent->GetGameplayAttributeValueChangeDelegate(attr).RemoveAll(this);
	}
	Super::EndPlay(EndPlayReason);
}