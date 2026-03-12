#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetRefs.generated.h"
class UInputMappingContext;
struct FActiveTemplate;
struct FCombatantTemplateFull;

UCLASS()
class I_LOVE_VAMPIRES_2_API UAssetRefs : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AssetRefs")
	UInputMappingContext* _keyboardInputMappingContext = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _activeTable = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UDataTable* _combatantTable = nullptr;


	UAssetRefs() = default;
	const UInputMappingContext* getKeyboardContext() const;
	const FCombatantTemplateFull* getCombatantTemplateFull() const;
	const FActiveTemplate* getActiveTemplate(FName) const;
};