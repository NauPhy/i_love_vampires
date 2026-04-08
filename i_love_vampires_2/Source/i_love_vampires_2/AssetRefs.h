#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetRefs.generated.h"
class UInputMappingContext;
class UCombatantTemplate;
class UInputAction;
class UPaperFlipbook;
class UMaterialInterface;

UCLASS()
class I_LOVE_VAMPIRES_2_API UAssetRefs : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputMappingContext* _keyboardInputMappingContext = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCombatantTemplate* _basePlayerTemplate = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInputAction* _moveAction = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* _experienceSprite = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* _translucentMaterial = nullptr;

	UAssetRefs() = default;
	const UInputMappingContext* getKeyboardContext() const;
	const UCombatantTemplate* getBasePlayerTemplate() const;
	const UInputAction* getMoveAction() const;
	UPaperFlipbook* getExperienceSprite() const { return _experienceSprite; }
	//cannot be const
	UMaterialInterface* getSpriteMaterial() const;
};