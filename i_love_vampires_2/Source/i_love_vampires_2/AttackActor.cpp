#include "AttackActor.h"
#include "AbilitySystemComponent.h"


void AAttackActor::Tick(float delta) {}

void AAttackActor::applyEffect(AActor* target) {
	UAbilitySystemComponent* targetASC = Cast<UAbilitySystemComponent>(target->GetComponentByClass(UAbilitySystemComponent::StaticClass()));
	UE_LOG(LogTemp, Warning, TEXT("Target ASC: %s"), targetASC ? *targetASC->GetName() : TEXT("NULL"));

	if (targetASC)
	{
		TArray<FGameplayAttribute> attributes;
		targetASC->GetAllAttributes(attributes);
		for (const FGameplayAttribute& Attr : attributes)
		{
			UE_LOG(LogTemp, Warning, TEXT("ASC has attribute: %s"), *Attr.GetName());
		}
	}
	if (targetASC == nullptr)
		return;
	targetASC->ApplyGameplayEffectSpecToSelf(*_effect);
}