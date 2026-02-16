#include "AttackActor.h"
#include "AbilitySystemComponent.h"


void AAttackActor::Tick(float delta) {}

void AAttackActor::applyEffect(AActor* target) {
	UAbilitySystemComponent* targetASC = Cast<UAbilitySystemComponent>(target->GetComponentByClass(UAbilitySystemComponent::StaticClass()));
	if (targetASC == nullptr)
		return;
	targetASC->BP_ApplyGameplayEffectSpecToSelf(_effect);
}