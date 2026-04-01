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

	const static inline float _MOVEMENT_SPEED = 3;

	float _experience = 0;
	float _maxExperience = 1;
	float _level = 1;
	UPROPERTY(VisibleAnywhere, Category="Components")
	UCameraComponent* _camera = nullptr;

	bool addKeyboardContext();
	UFUNCTION()
	void onOverlapBegin(AActor* left, AActor* right);
	void addExperience(float);
	void levelUp();
	void handleEnemyCollision(AEnemyBase* other);
	bool isOutOfDeadzone(float, float) const;
	void handleMovement(const FVector2D&);
	//bool assetRefInitialise();

public:
	AMyPlayer();
	UFUNCTION(BlueprintCallable)
	void initialise_AMyPlayer(const UCombatantTemplate* data);
	virtual void myInitialise(const UCombatantTemplate* temp) override {
		initialise_AMyPlayer(temp);
	}
	virtual void BeginPlay() override;
	virtual void Tick(float delta) override;
	void handleExperienceShardCollision(AExperienceShard* other);
	// This is the last member function called before BeginPlay()
	//virtual void PostInitializeComponents() override;
};	