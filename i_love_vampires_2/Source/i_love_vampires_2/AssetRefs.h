#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "AssetRefs.generated.h"
class UInputMappingContext;
class UCombatantTemplate;
class UInputAction;
class UPaperFlipbook;
class UMaterialInterface;
class UUserWidget;
class UDamageNumber;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPaperFlipbook* _testOverlay = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UDamageNumber> _damagePopupWidgetClass = nullptr;

	UAssetRefs() = default;
	UInputMappingContext* getKeyboardContext() const;
	UCombatantTemplate* getBasePlayerTemplate() const;
	UInputAction* getMoveAction() const;
	UPaperFlipbook* getExperienceSprite() const { return _experienceSprite; }
	UPaperFlipbook* getTestOverlay() const { return _testOverlay; }
	//cannot be const
	UMaterialInterface* getSpriteMaterial() const;
	TSubclassOf<UDamageNumber> getDamagePopupWidgetClass() const;
};