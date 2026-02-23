#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEffect.h"
#include "AttackActor.generated.h"
class ACombatant;

struct EffectStruct {
public:
	TSharedPtr<FGameplayEffectSpec> effect;
	float chance = 1;
};


UCLASS(Blueprintable)
class AAttackActor : public AActor {
	GENERATED_BODY()
public:
	AAttackActor() {
		PrimaryActorTick.bCanEverTick = true;
	}

	virtual void Tick(float delta) override;

	UFUNCTION(BlueprintCallable)
	void initialise_AAttackActor(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances) {
		_pawnRef = TWeakObjectPtr<APawn>(pawnRef);
		for (int i = 0; i < effect.Num(); i++) {
			EffectStruct newStruct;
			newStruct.effect = effect[i].Data;
			newStruct.chance = effectChances[i];
			_effect.Add(newStruct);
		}
	}
	void initialise_AAttackActor(TWeakObjectPtr<APawn> pawnRef, const TArray<EffectStruct>& effect) {
		_pawnRef = pawnRef;
		_effect = effect;
	}

protected :
	void applyEffect(ACombatant* target);
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	TArray<EffectStruct> _effect;
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;
};
