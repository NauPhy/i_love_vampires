#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <memory>
#include "MyCombatantAttributeSet.h"
#include "PaperFlipbookComponent.h"
#include "Combatant.generated.h"

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACombatant")
	FString _name;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACombatant")
	FName _ID;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACombatant")
	UPaperFlipbookComponent* _combatantFlipbook;

protected:
	UPROPERTY()
	UMyCombatantAttributeSet _attributes;

public:
	ACombatant();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	void burnTick() { _attributes.burnTick(); }
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(std::unique_ptr<StatusEffect>);

	UFUNCTION(BlueprintCallable)
	void initialise_ACombatant(FName ID);

protected:
	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);
};