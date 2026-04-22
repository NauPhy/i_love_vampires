#pragma once

#include "CoreMinimal.h"
#include "Combatant.h"
#include "EnemyBase.generated.h"


UCLASS()
class I_LOVE_VAMPIRES_2_API AEnemyBase : public ACombatant
{
	GENERATED_BODY()

	const static inline float _MOVEMENT_SPEED = 5;

	int _registerKey = -1;
	const float _experienceValue = 1;

protected:
	void persuePlayer(float);
	virtual void onKilled() override;

public:
	AEnemyBase();
	virtual void BeginPlay() override;
	virtual void Tick(float delta) override;
	UFUNCTION(BlueprintCallable)
	void initialise_AEnemyBase(UCombatantTemplate* temp) { initialise_ACombatant(temp); }
	virtual void myInitialise(UCombatantTemplate* temp) override { initialise_AEnemyBase(temp); }
	virtual FVector getMoveDirection() const;
	virtual float getMoveSpeed() const;
	int getKey() const { return _registerKey; }
};