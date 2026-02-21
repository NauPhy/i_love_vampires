#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEffect.h"
#include "AttackActor.generated.h"

struct EffectStruct {
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
	void initialise_AAttackActor(const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances) {
		for (int i = 0; i < effect.Num(); i++) {
			EffectStruct newStruct;
			newStruct.effect = effect[i].Data;
			newStruct.chance = effectChances[i];
			_effect.Add(newStruct);
		}
	}

protected :
	void applyEffect(AActor* target);

private:
	TArray<EffectStruct> _effect;
};
