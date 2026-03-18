#pragma once

#include "CoreMinimal.h"
#include "Combatant.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyPlayer.generated.h"
class AExperienceShard;
class AEnemyBase;

UCLASS()
class I_LOVE_VAMPIRES_2_API AMyPlayer : public ACombatant
{
	GENERATED_BODY()

	const float _MOVEMENT_SPEED = 3;

	float _experience = 0;
	float _maxExperience = 1;
	float _level = 1;
	UPROPERTY()
	USpringArmComponent* _springArm = nullptr;
	UPROPERTY()
	UCameraComponent* _camera = nullptr;

	bool addKeyboardContext();
	UFUNCTION()
	void onOverlapBegin(AActor* left, AActor* right);
	void handleExperienceShardCollision(AExperienceShard* other);
	void addExperience(float);
	void levelUp();
	void handleEnemyCollision(AEnemyBase* other);
	bool isOutOfDeadzone(float, float) const;
	void handleMovement(const FVector2D&);
	void lookAtDirection(float, float);

public:
	AMyPlayer();
	void initialise_AMyPlayer(const FPrimaryAssetId&);
	void initialise_AMyPlayer(const UCombatantTemplate*);
	virtual void myInitialise(const UCombatantTemplate* temp) override { initialise_AMyPlayer(temp); }
	virtual void Tick(float delta) override;
};	