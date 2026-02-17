#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEffect.h"
#include "AttackActor.generated.h"


UCLASS(Blueprintable)
class AAttackActor : public AActor {
	GENERATED_BODY()
public:
	AAttackActor() {
		PrimaryActorTick.bCanEverTick = true;
	}

	virtual void Tick(float delta) override;

	UFUNCTION(BlueprintCallable)
	void initialise_AAttackActor(const FGameplayEffectSpecHandle& effect) {
		_effect = effect.Data;
	}

protected :
	void applyEffect(AActor* target);

private:
	TSharedPtr<FGameplayEffectSpec> _effect = nullptr;
};
