#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpriteEnum.h"
#include "ExperienceShard.generated.h"
class UPaperFlipbookComponent;
class AMyPlayer;

UCLASS()
class I_LOVE_VAMPIRES_2_API AExperienceShard : public AActor
{
	GENERATED_BODY()

	const ESprite _DEFAULT_SPRITE = ESprite::testShard;
	const float _MAGNETISM_RADIUS = 1000;
	const float _STARTING_SPEED = -1000;
	const float _ACCELERATION = 5000;
	
	float _experienceValue = -1;
	bool _magnetismEnabled = false;
	float _speed = 0;
	TWeakObjectPtr<AMyPlayer> _playerRef = nullptr;
	UPROPERTY()
	USphereComponent* _collider = nullptr;

public:
	UPROPERTY(VisibleAnywhere)
	UPaperFlipbookComponent* _flipbook = nullptr;

private:
	void accelerateTowardsPlayer(float delta);

public:
	void initialise_AExperienceShard(float experienceValue);
	AExperienceShard();
	virtual void BeginPlay() override;
	virtual void Tick(float delta) override;

	void beginMagnetism(AMyPlayer*);
	float getExperienceValue() const { return _experienceValue; }
	bool isMagnetised() const { return _magnetismEnabled; }
	void suicide();
};