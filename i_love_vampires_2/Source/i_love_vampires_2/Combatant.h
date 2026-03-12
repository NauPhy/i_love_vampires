#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyCombatantAttributeSet.h"
#include "PaperFlipbookComponent.h"
#include "CombatantConfig.h"
#include "Active.h"
#include "Combatant.generated.h"

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	FName _ID;
protected:
	//not a UObject
	TSharedPtr<UMyCombatantAttributeSet> _attributeSet = nullptr;

	UPROPERTY()
	FCombatantConfig _config;
	UPROPERTY()
	TArray<UActive*> _activeAbilities;

	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACombatant")
	UPaperFlipbookComponent* _combatantFlipbook;

	ACombatant();
	void initialise_ACombatant(FName ID);
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	void burnTick() { _attributeSet->burnTick(); }
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(std::unique_ptr<StatusEffect>);
	FName getID() const { return _ID; }
};