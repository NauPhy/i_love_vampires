#pragma once

#include "CoreMinimal.h"
#include "Combatant.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MyPlayer.generated.h"
class AExperienceShard;
class AEnemyBase;
struct FInputActionValue;

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
	void handleMovement(const FInputActionValue&);
	//bool assetRefInitialise();
protected:
	virtual void onKilled() override;

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
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	UFUNCTION(BlueprintCallable)
	static AMyPlayer* spawnAMyActorDeferred(UObject* worldContext, const FTransform& trans, AActor* deferredOwner = nullptr, APawn* deferredInstigator = nullptr);
	UFUNCTION(BlueprintCallable)
	static void finishAMyActorDeferredSpawn(AMyPlayer* deferredObject, const FTransform& trans);
	float getOrthoWidth() const { return _camera->OrthoWidth; }	
	// This is the last member function called before BeginPlay()
	//virtual void PostInitializeComponents() override;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerLevelUp);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerLevelUp _onLevelUp;
};	