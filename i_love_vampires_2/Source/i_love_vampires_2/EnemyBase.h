#pragma once

#include "CoreMinimal.h"
#include "Combatant.h"
#include "EnemyBase.generated.h"


UCLASS()
class I_LOVE_VAMPIRES_2_API AEnemyBase : public ACombatant
{
	GENERATED_BODY()

	const float _MOVEMENT_SPEED = 1;

	int _registerKey = -1;

protected:
	void persuePlayer(float);

public:
	AEnemyBase();
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float delta) override;
	void initialise_AEnemyBase(const FPrimaryAssetId& temp) { initialise_ACombatant(temp); }
	void initialise_AEnemyBase(const UCombatantTemplate* temp) { initialise_ACombatant(temp); }
	virtual void myInitialise(const UCombatantTemplate* temp) override { initialise_AEnemyBase(temp); }
};