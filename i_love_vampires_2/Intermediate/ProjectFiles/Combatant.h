#pragma once

#include "CoreMinimal.h"
#include "Actor.h"
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

	UFUNCTION(BlueprintCallable)
	void initialiseFromTemplate(filename);

private :
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = "true"))
	UAbilitySystemComponent* abilitySystemComponent;

	UPROPERTY(Category = "Ability System")
	const CombatantAttributeSet* attributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General", meta = (AllowPrivateAccess = "true"))
	FString name;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General", meta = (AllowPrivateAccess = "true"))
	FName ID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "General", meta = (AllowPrivateAccess = "true"))
	TSoftObjectPtr<UTexture2D> sprite;


};