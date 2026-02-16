#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameplayEffectTypes.h"
#include "Combatant.generated.h"
class UCombatantAttributeSet;
struct FCombatantTemplate;
struct FWeaponTemplate;

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	TArray<FGameplayAttribute> _myAttributes;
	UPROPERTY(VisibleAnywhere, Category = "Ability System")
	const UCombatantAttributeSet* attributeSet;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* abilitySystemComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General", meta = (AllowPrivateAccess = "true"))
	FString name;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General", meta = (AllowPrivateAccess = "true"))
	FName ID;
public:
	ACombatant();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION(BlueprintCallable)
	void initialiseFromTemplate(const FCombatantTemplate& myTemplate);
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void onAttributeChanged(const FGameplayAttribute& attribute, float newValue, float oldValue);
private:
	void onAttributeChangedReroute(const FOnAttributeChangeData& data);
};