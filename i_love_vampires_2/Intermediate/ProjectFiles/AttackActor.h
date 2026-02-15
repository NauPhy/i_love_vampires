#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AttackActor.generated.h"
class UGameplayEffectSpecHandle;

UCLASS()
class AAttackActor : public AActor {
	GENERATED_BODY()
public:
	AAttackActor() {
		PrimaryActorTick.bCanEverTick = true;
	}

	virtual void Tick(float delta) override;

	UFUNCTION(BlueprintCallable)
	void initialise_AttackActor(UGameplayEffectSpecHandle& effect) {
		_effect = effect;
	}

private:
	UGameplayEffectSpecHandle _effect;
};
