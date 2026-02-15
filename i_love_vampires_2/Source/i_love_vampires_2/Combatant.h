#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Combatant.generated.h"
class UCombatantAttributeSet;
class UAbilitySystemComponent;
struct FCombatantTemplate;
struct FWeaponTemplate;

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public AActor
{
	GENERATED_BODY()

public :
	ACombatant();

	UFUNCTION(BlueprintCallable)
	void initialiseFromTemplate(const FCombatantTemplate& myTemplate);

	//UFUNCTION(BlueprintCallable)
	//void giveWeapon(FWeaponTemplate weapon);

private :
	UPROPERTY(VisibleAnywhere, Category = "Ability System")
	const UCombatantAttributeSet* attributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* abilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General", meta = (AllowPrivateAccess = "true"))
	FString name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General", meta = (AllowPrivateAccess = "true"))
	FName ID;
};