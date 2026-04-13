#include "MyPlayer.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "AssetRefs.h"
#include "ExperienceShard.h"
#include "EnemyBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "CombatantManager.h"
#include "MyGameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Definitions.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "SpriteSorter.h"
#include <cmath>

//void AMyPlayer::PostInitializeComponents() {
//	Super::PostInitializeComponents();
//}
//
//bool AMyPlayer::assetRefInitialise() {
//	UAssetRefs* refs = nullptr;
//	if (!MyGameplayStatics::getAssetRefs(this, refs)) {
//		LOGERROR("AMyPlayer::assetRefInitialise - failed to get asset refs");
//		return false;
//	}
//	const UCombatantTemplate* playerTemplate = refs->getBasePlayerTemplate();
//	if (!IsValid(playerTemplate)) {
//		LOGERROR("AMyPlayer::assetRefInitialise - failed to get player template");
//		return false;
//	}
//	initialise_AMyPlayer(playerTemplate);
//	return true;
//}

AMyPlayer::AMyPlayer() : ACombatant() {
	// Create camera
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	if (!IsValid(_camera)) {
		LOGERROR("AMyPlayer::AMyPlayer - _camera creation failed");
		return;
	}
	//basics
	_camera->SetupAttachment(RootComponent);
	_camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	_camera->OrthoWidth = 270;
	//aspect ratio
	_camera->bConstrainAspectRatio = true;
	_camera->AspectRatio = 1920.0 / 1080.0;
	//remove filters that can't be removed in settings
	_camera->PostProcessSettings.bOverride_AutoExposureMethod = true;
	_camera->PostProcessSettings.AutoExposureMethod = EAutoExposureMethod::AEM_Manual;
	_camera->PostProcessSettings.bOverride_AutoExposureBias = true;
	_camera->PostProcessSettings.AutoExposureBias = 0.0;
	_camera->PostProcessSettings.bOverride_AutoExposureApplyPhysicalCameraExposure = true;
	_camera->PostProcessSettings.AutoExposureApplyPhysicalCameraExposure = false;
	_camera->PostProcessSettings.bOverride_AutoExposureLowPercent = true;
	_camera->PostProcessSettings.AutoExposureLowPercent = 1.0;
	_camera->PostProcessSettings.bOverride_AutoExposureHighPercent = true;
	_camera->PostProcessSettings.AutoExposureHighPercent = 1.0;
	//orientation
	{
		FHitResult* unused = nullptr;
		_camera->SetWorldRotation(FRotator(0, -90, 0), false, unused, ETeleportType::TeleportPhysics);
		_camera->SetRelativeLocation(FVector(0, 100, 0), false, unused, ETeleportType::TeleportPhysics);
	}

	OnActorBeginOverlap.AddDynamic(this, &AMyPlayer::onOverlapBegin);
}

void AMyPlayer::onOverlapBegin(AActor* me, AActor* other) {
	if (!IsValid(me)) {
		LOGERROR("AMyPlayer::onOverlapBegin - self actor is invalid");
		return;
	}
	if (!IsValid(other))
		//other actor is being constructed or destructed
		return;
	{
		AExperienceShard* shard = Cast<AExperienceShard>(other);
		if (IsValid(shard)) {
			handleExperienceShardCollision(shard);
			return;
		}
	}
	{
		AEnemyBase* enemy = Cast<AEnemyBase>(other);
		if (IsValid(enemy)) {
			handleEnemyCollision(enemy);
			return;
		}
	}
}

void AMyPlayer::handleExperienceShardCollision(AExperienceShard* other) {
	if (!IsValid(other)) {
		LOGERROR("AMyPlayer::handleExperienceShardCollision - other is invalid");
		return;
	}
	if (other->isMagnetised()) {
		addExperience(other->getExperienceValue());
		other->suicide();
	}
	else {
		other->beginMagnetism(this);
	}
}

void AMyPlayer::addExperience(float val) {
	_experience += val;
	if (_experience >= _maxExperience)
		levelUp();
}

void AMyPlayer::levelUp() {
	_level += 1;
	_experience -= _maxExperience;
	_maxExperience = 999;
	// implement level up
}

void AMyPlayer::handleEnemyCollision(AEnemyBase* other) {
	exchangeContactDamage(this, other);
}

bool AMyPlayer::addKeyboardContext() {
	// get enhanced input subsystem
	UEnhancedInputLocalPlayerSubsystem* enhancedInput = nullptr;
	if (!MyGameplayStatics::myGetEnhancedInputLocalPlayerSubsystem(this, enhancedInput)) {
		return false;
	}
	// Get keyboard mapping context
	UAssetRefs* assetRefs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(this, assetRefs)) {
		return false;
	}
	const UInputMappingContext* keyboardContext = assetRefs->getKeyboardContext();
	if (!IsValid(keyboardContext)) {
		return false;
	}
	// Assume keyboard for now
	enhancedInput->AddMappingContext(keyboardContext, 0, FModifyContextOptions());
	return true;
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

		UEnhancedInputComponent* enhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!IsValid(enhancedInput)) {
		LOGERROR("AMyPlayer::SetupPlayerInputComponent - invalid enhancedInput");
		return;
	}

	UAssetRefs* assetRefs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(this, assetRefs)) {
		return;
	}
	const UInputAction* move = assetRefs->getMoveAction();
	if (!IsValid(move)) {
		LOGERROR("AMyPlayer::addKeyboardContext - move action not found");
		return;
	}
	enhancedInput->BindAction(move, ETriggerEvent::Triggered, this, &AMyPlayer::handleMovement);
}

void AMyPlayer::initialise_AMyPlayer(const UCombatantTemplate* data) {
	initialise_ACombatant(data);
}

void AMyPlayer::BeginPlay() {
	//if (!assetRefInitialise()) {
	//	LOGERROR("AMyPlayer::BeginPlay - assetRefInitialise failed");
	//	return;
	//}
	ACombatant::BeginPlay();
	if (!addKeyboardContext())
		return;
	UCombatantManager* combatantManager = nullptr;
	if (!MyGameplayStatics::getCombatantManager(this, combatantManager)) {
		return;
	}
	combatantManager->setPlayerRef(this);
	USpriteSorter* sorter = nullptr;
	if (!MyGameplayStatics::getSpriteSorter(this, sorter)) {
		LOGERROR("AMyPlayer::AMyPlayer - failed to get sprite sorter");
		return;
	}
	sorter->sortSprite(this, _combatantFlipbook);
}

bool AMyPlayer::isOutOfDeadzone(float x, float z) const {
	return std::sqrt(std::pow(x, 2) + std::pow(z, 2)) > 0.3;
}

void AMyPlayer::handleMovement(const FInputActionValue& rawInput) {
	FVector2D input = rawInput.Get<FVector2D>();
	if (!isOutOfDeadzone(input.X, input.Y))
		return;
	FVector movement = FVector(input.X * _MOVEMENT_SPEED, 0, input.Y * _MOVEMENT_SPEED * ACombatant::getAttributeMember(&CombatantAttributes::_movementSpeed));
	{
		FHitResult* unused = nullptr;
		AddActorWorldOffset(movement, false, unused, ETeleportType::TeleportPhysics);
	}
}

void AMyPlayer::Tick(float delta) {
	APlayerController* controller = nullptr;
	if (!MyGameplayStatics::myGetPlayerController(this, controller))
		return;
	double X = 0;
	double Y = 0;
	if (!controller->GetMousePosition(X, Y))
		return;
	int32 viewX = 0;
	int32 viewY = 0;
	controller->GetViewportSize(viewX, viewY);

	const float directionX = X / static_cast<double>(viewX) - 0.5;
	const float directionZ = (Y / static_cast<double>(viewY) - 0.5) * -1.0;
	lookAtDirection(directionX, directionZ);
	ACombatant::Tick(delta);

	FVector currentPos = GetActorLocation();
	currentPos.X = std::round(currentPos.X);
	currentPos.Z = std::round(currentPos.Z);
	FHitResult* throwaway = nullptr;
	_camera->SetWorldLocation(currentPos, false, throwaway, ETeleportType::TeleportPhysics);
}

AMyPlayer* AMyPlayer::spawnAMyActorDeferred(UObject* worldContext, const FTransform& trans, AActor* deferredOwner, APawn* deferredInstigator) {
	UWorld* world = worldContext->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("AMyPlayer::spawnAMyActorDeferred - invalid world");
		return nullptr;
	}
	return world->SpawnActorDeferred<AMyPlayer>(
		AMyPlayer::StaticClass(),
		trans,
		deferredOwner,
		deferredInstigator,
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn,
		ESpawnActorScaleMethod::MultiplyWithRoot
	);
}

void AMyPlayer::finishAMyActorDeferredSpawn(AMyPlayer* spawnedActor, const FTransform& trans) {
	if (!IsValid(spawnedActor)) {
		LOGERROR("AMyPlayer::finishAMyActorDeferredSpawn - spawnedActor is not valid");
		return;
	}
	UGameplayStatics::FinishSpawningActor(spawnedActor, trans, ESpawnActorScaleMethod::MultiplyWithRoot);
}