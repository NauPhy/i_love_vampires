#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExperienceShard.generated.h"

UCLASS()
class I_LOVE_VAMPIRES_2_API AExperienceShard : public AActor
{
	GENERATED_BODY()

	float _experienceValue = 1;
	void beginMagnetism_Implementation(APawn*) { _magnetismEnabled = true; }
	void suicide_Implementation();
protected:
	bool _magnetismEnabled = false;
public:
	float getExperienceValue() const { return _experienceValue; }
	bool isMagnetised() const { return _magnetismEnabled; }
	UFUNCTION(BlueprintNativeEvent)
	void beginMagnetism(APawn* playerRef);
	UFUNCTION(BlueprintNativeEvent)
	void suicide();
};