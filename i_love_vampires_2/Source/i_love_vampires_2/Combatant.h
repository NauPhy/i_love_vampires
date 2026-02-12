#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Combatant.generated.h"
class UCombatantAttributeSet;
class UAbilitySystemComponent;
struct FCombatantData;

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public AActor
{
	GENERATED_BODY()

public :
	ACombatant();
	ACombatant(const FCombatantData& CombatantData);

private :
	UPROPERTY()
	const UCombatantAttributeSet* attributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* abilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
	FString name;
};