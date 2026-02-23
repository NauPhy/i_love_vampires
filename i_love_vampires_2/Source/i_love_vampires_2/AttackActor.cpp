#include "AttackActor.h"
#include "AbilitySystemComponent.h"
#include "CombatantManager.h"
#include "Combatant.h"
#include "Definitions.h"

namespace {
	void inflictBurn(ACombatant* combatant, TSharedPtr<FGameplayEffectSpec> effectSpec) {
		if (effectSpec.Get() == nullptr) {
			LOGERROR("AAttackActor::inflictBurn - effectSpec is null");
			return;
		}
		float magnitude = effectSpec->GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("myMagnitude"));
		float duration = effectSpec->GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("myDuration"));
		UCombatantManager* manager = GWorld->GetSubsystem<UCombatantManager>();
		if (manager == nullptr) {
			LOGERROR("AAttackActor::inflictBurn - manager is null");
			return;
		}
		manager->inflictBurn(combatant, magnitude, duration);
	}
}

void AAttackActor::Tick(float delta) {}

void AAttackActor::applyEffect(ACombatant* target) {
	if (_pawnRef.Get() != nullptr)
		if (target == _pawnRef.Get())
			return;
	UAbilitySystemComponent* targetASC = target->abilitySystemComponent;
	if (targetASC == nullptr) {
		LOGERROR("AAttackActor::applyEffect - targetASC is null");
		return;
	}
	for (const EffectStruct& tempStruct : _effect) {
		if (FMath::FRand() <= tempStruct.chance) {
			TSharedPtr<FGameplayEffectSpec> effectSpec = tempStruct.effect;
			if (effectSpec.Get() == nullptr) {
				LOGERROR("AAttackActor::applyEffect - effectSpec is null");
				continue;
			}
			//Check tags
			FGameplayTagContainer effectTags;
			effectSpec->GetAllAssetTags(effectTags);
			//Burn tag
			if (effectTags.HasTag(FGameplayTag::RequestGameplayTag("burnRequest"))) {
				inflictBurn(target, effectSpec);
			}
			//No tags
			else
				targetASC->ApplyGameplayEffectSpecToSelf(*effectSpec);
		}
	}
	_effectedPawns.Add(TWeakObjectPtr<APawn>(Cast<APawn>(target)));
}