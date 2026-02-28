#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayEffect.h"
#include "PassiveTemplate.generated.h"

// For if using the modifiers directly doesn't work out
//USTRUCT(BlueprintType)
//struct I_LOVE_VAMPIRES_2_API FPassiveTemplate_Modifier
//{
//	GENERATED_USTRUCT_BODY()
//
//public:
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PassiveTemplate_Modifier");
//	FName attributeName;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PassiveTemplate_Modifier");
//	FGameplayModifierInfo modifierInfo;
//};

USTRUCT(BlueprintType)
struct I_LOVE_VAMPIRES_2_API FPassiveTemplate : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
public:
	FPassiveTemplate() :
		name("Passive"),
		ID("passive"),
		combatantAttributeModifiers()
	{}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PassiveTemplate")
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PassiveTemplate")
	FName ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PassiveTemplate")
	TMap<FName, FGameplayModifierInfo> combatantAttributeModifiers;
};