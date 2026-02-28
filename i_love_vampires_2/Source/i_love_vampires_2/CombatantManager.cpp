#include "CombatantManager.h"
#include "Combatant.h"
#include "StatusEnum.h"
#include "Definitions.h"
#include "AbilitySystemComponent.h"
#include "DamageEffect.h"
#include "BurnEffect.h"
#include "StatusAttributeSet.h"
#include "CombatantAttributeSet.h"
#include "Math/UnrealMathUtility.h"

namespace {
	void applyDamage(ACombatant* combatant, float magnitude) {
		UAbilitySystemComponent* ASC = combatant->abilitySystemComponent;
		if (ASC == nullptr) {
			LOGERROR("UCombatantManager::applyDamage - ASC is null");
			return;
		}
		FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(UDamageEffect::StaticClass(), 1, ASC->MakeEffectContext());
		if (!SpecHandle.IsValid()) {
			LOGERROR("UCombatantManager::applyDamage - SpecHandle is invalid");
			return;
		}
		SpecHandle.Data->SetSetByCallerMagnitude(FName("UCombatantManager_damageEffect_magnitude"), -magnitude);
		ASC->ApplyGameplayEffectSpecToSelf(*(SpecHandle.Data.Get()));
	}
	void applyBleed(ACombatant* combatant, float delta) {
		float magnitude = combatant->statusAttributes->Getbleed();
		float damage = magnitude * delta;
		if (damage > EPSILON)
			applyDamage(combatant, damage);
	}
	void applyBurn(ACombatant* combatant) {
		float magnitude = combatant->statusAttributes->Getburn();
		float targetHP = combatant->combatantAttributes->GetmaxHP();
		float damage = (magnitude / 100.0) * targetHP;
		if (damage > EPSILON)
			applyDamage(combatant, damage);
	}
}

void UCombatantManager::Tick(float delta) {
	if (!gameReady)
		return;
	handleStatusEffects(delta);
}

/////////////////////////////////
// Status Effects
const std::unordered_map<EStatusEffect, float> statusEffectPeriods = {
	{EStatusEffect::bleed, 0.f},
	{EStatusEffect::burn, 1.f}
};
void UCombatantManager::handleStatusEffects(float delta) {
	for (int i = 0; i < _nextStatusEffectTickDictionary.size(); i++) {
		EStatusEffect effect = static_cast<EStatusEffect>(i);
		if (_nextStatusEffectTickDictionary[effect] <= 0) {
			if (_playerRef.Get() != nullptr) {
				combatantTick(_playerRef.Get(), effect, delta);
			}
			for (FCombatantManager_MyStruct& combatant : _enemyReferences) {
				if (combatant.value.Get() != nullptr) {
					combatantTick(combatant.value.Get(), effect, delta);
				}
			}
			_nextStatusEffectTickDictionary[effect] = statusEffectPeriods.at(effect);
		}
		_nextStatusEffectTickDictionary[effect] -= delta;
	}
}



UCombatantManager::UCombatantManager() {
	_nextStatusEffectTickDictionary = statusEffectPeriods;
}

int UCombatantManager::registerEnemy(ACombatant* enemy) {
	FCombatantManager_MyStruct newStruct;
	newStruct.key = _nextKey;
	_nextKey += 1;
	newStruct.value = TWeakObjectPtr<ACombatant>(enemy);
	_enemyReferences.push_back(newStruct);
	return newStruct.key;
}

void UCombatantManager::removeFromRegister(int key) {
	for (std::vector<FCombatantManager_MyStruct>::iterator it = _enemyReferences.begin(); it != _enemyReferences.end();)
	{
		if ((*it).key == key) {
			_enemyReferences.erase(it);
			return;
		}
		else
			++it;
	}
}

TWeakObjectPtr<ACombatant> UCombatantManager::getRandomEnemyPtr() {
	if (_enemyReferences.empty()) {
		TWeakObjectPtr<ACombatant> ret = nullptr;
		return ret;
	}
	int roll = FMath::RandRange(static_cast<int>(0), static_cast<int>(_enemyReferences.size() - 1));
	return _enemyReferences[roll].value;
}

void UCombatantManager::setPlayerRef(ACombatant* playerRef) {
	_playerRef = TWeakObjectPtr<ACombatant>(playerRef);
}





void UCombatantManager::combatantTick(ACombatant* combatant, EStatusEffect effect, float delta) {
	if (effect == EStatusEffect::bleed) {
		applyBleed(combatant, delta);
	}
	else if (effect == EStatusEffect::burn) {
		applyBurn(combatant);
	}
}

void UCombatantManager::inflictBurn(ACombatant* combatant, float magnitude, float duration) {
	//Get ASC
	UAbilitySystemComponent* ASC = combatant->abilitySystemComponent;
	//Check ASC validity
	if (ASC == nullptr) {
		LOGERROR("UCombatantManager::inflictBurn - ASC is null");
		return;
	}
	//Create query
	FGameplayEffectQuery burnQuery;
	burnQuery.EffectDefinition = UBurnEffect::StaticClass();
	//Get all burns of type CombatantManager's BurnEffect
	TArray<FActiveGameplayEffectHandle> activeBurns = ASC->GetActiveEffects(burnQuery);
	//Check burn count validity
	if (activeBurns.Num() != 1 && activeBurns.Num() != 0) {
		LOGERROR("UCombatantManager::inflictBurn - invalid number of active burns");
		return;
	}
	float finalMagnitude;
	float finalDuration;
	//If there is an active burn, find the highest of both magnitudes and durations.
	if (activeBurns.Num() == 1){
		//Get ptr to ActiveGameplayEffect by handle
		const FActiveGameplayEffect* activeBurn = ASC->GetActiveGameplayEffect(activeBurns[0]);
		//Get magnitude as set in the last block of this function
		float oldMagnitude = activeBurn->Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag("UCombatantManager_burnEffect_magnitude"), true, 0.f);

		// Get remaining duration using the same query used to get the handle
		TArray<float> remainingTimes = ASC->GetActiveEffectsTimeRemaining(burnQuery);
		// Check for count validity
		if (remainingTimes.Num() != 1) {
			LOGERROR("UCombatantManager::inflictBurn - more than 1 active burn when getting remaining time");
			return;
		}
		// Extract remaining time
		float oldDuration = remainingTimes[0];

		finalMagnitude = std::max(oldMagnitude, magnitude);
		finalDuration = std::max(oldDuration, duration);
		//If the old burn is strictly better than the new burn, don't waste time
		if (finalMagnitude <= oldMagnitude + EPSILON && finalDuration <= oldDuration + EPSILON)
			return;
		//Otherwise remove the old burn
		else
			ASC->RemoveActiveGameplayEffect(activeBurns[0]);
	}
	//If there is not an active burn, just use the supplied magnitude and duration
	else {
		finalMagnitude = magnitude;
		finalDuration = duration;
	}
	FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(UBurnEffect::StaticClass(), 1, ASC->MakeEffectContext());
	if (!SpecHandle.IsValid()) {
		LOGERROR("UCombatantManager::inflictBurn - SpecHandle is invalid");
		return;
	}
	SpecHandle.Data->SetSetByCallerMagnitude(FName("UCombatantManager_burnEffect_magnitude"), finalMagnitude);
	SpecHandle.Data->SetSetByCallerMagnitude(FName("UCombatantManager_burnEffect_duration"), finalDuration);
	ASC->ApplyGameplayEffectSpecToSelf(*(SpecHandle.Data.Get()));
}