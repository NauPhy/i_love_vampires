#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameplayEffectTypes.h"
#include "Combatant.generated.h"
class UCombatantAttributeSet;
class UStatusAttributeSet;
struct FCombatantTemplate;

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	public:
	ACombatant();
	UFUNCTION(BlueprintCallable)
	void initialiseFromTemplate(const FCombatantTemplate& myTemplate);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	FString name;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General")
	FName ID;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System")
	UAbilitySystemComponent* abilitySystemComponent;
	UPROPERTY(VisibleAnywhere, Category = "Ability System")
	const UCombatantAttributeSet* combatantAttributes;
	TArray<FGameplayAttribute> _combatantAttributeRefs;
	UPROPERTY(VisibleAnywhere, Category = "Ability System")
	const UStatusAttributeSet* statusAttributes;
	TArray<FGameplayAttribute> _statusAttributeRefs;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void onAttributeChanged(const FGameplayAttribute& attribute, float newValue, float oldValue);

public:
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	void onAttributeChangedReroute(const FOnAttributeChangeData& data);
};