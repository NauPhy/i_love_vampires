#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectStruct.h"
#include "WeaponAttributes.h"
#include "WeaponConfig.h"
#include "AttackActor.generated.h"
class ACombatant;

UCLASS(Blueprintable)
class AAttackActor : public AActor {
	GENERATED_BODY()

	FName _ID = "attackActor";
protected:
	UPROPERTY()
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	UPROPERTY()
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;

	TUniquePtr<FWeaponConfig> _config = nullptr;
	TUniquePtr<FWeaponAttributes> _attributes = nullptr;

	FName getID() const { return _ID; }

public:
	AAttackActor() {PrimaryActorTick.bCanEverTick = true;}

	void initialise_AAttackActor(APawn* pawnRef);
	// Since this class is virtual this should never be called, but it's here to set the convention. This is called when this is the final class
	// in the inheritance structure. In other words, initialise_AAttackActor(APawn* pawnRef) should only be called by child classes' initialise functions
	void initialise_AAttackActor(APawn* pawnRef, const FWeaponConfig& config, const FWeaponAttributes& attributes);
	virtual void Tick(float delta) override;
	void applyEffect(ACombatant* target);
};
