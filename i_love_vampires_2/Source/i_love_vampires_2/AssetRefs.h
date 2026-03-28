#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetRefs.generated.h"
class UInputMappingContext;
class UCombatantTemplate;

UCLASS()
class I_LOVE_VAMPIRES_2_API UAssetRefs : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AssetRefs")
	UInputMappingContext* _keyboardInputMappingContext = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetRefs")
	UCombatantTemplate* _basePlayerTemplate = nullptr;

	UAssetRefs() = default;
	const UInputMappingContext* getKeyboardContext() const;
	const UCombatantTemplate* getBasePlayerTemplate() const;
};