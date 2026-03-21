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


AMyPlayer::AMyPlayer() : ACombatant() {
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	//_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	//_springArm->SetupAttachment(RootComponent);
	//_springArm->TargetArmLength = 58.6;
	//_springArm->bUsePawnControlRotation = false;
	//_springArm->bInheritPitch = false;
	//_springArm->bInheritRoll = false;
	//_springArm->bInheritYaw = false;
	//{
	//	FHitResult* unused = nullptr;
	//	_springArm->SetWorldRotation(FRotator(0, -90, 0), false, unused, ETeleportType::TeleportPhysics);
	//}
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	if (!IsValid(_camera)) {
		LOGERROR("AMyPlayer::AMyPlayer - _camera creation failed");
		return;
	}
	_camera->SetupAttachment(RootComponent);
	_camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	_camera->OrthoWidth = 300;
	{
		FHitResult* unused = nullptr;
		_camera->SetWorldRotation(FRotator(0, -90, 0), false, unused, ETeleportType::TeleportPhysics);
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

//void AMyPlayer::initialise_AMyPlayer(const FPrimaryAssetId& data) {
//	initialise_ACombatant(data);
//	if (!addKeyboardContext())
//		return;
//	UCombatantManager* combatantManager = nullptr;
//	if (!MyGameplayStatics::getCombatantManager(this, combatantManager)) {
//		return;
//	}
//	combatantManager->setPlayerRef(this);
//}

void AMyPlayer::initialise_AMyPlayer(const UCombatantTemplate* data) {
	if (!IsValid(data)) {
		LOGERROR("AMyPlayer::initialise_AMyPlayer - data is invalid");
		return;
	}
	initialise_ACombatant(data);
	if (!addKeyboardContext())
		return;
	UCombatantManager* combatantManager = nullptr;
	if (!MyGameplayStatics::getCombatantManager(this, combatantManager)) {
		return;
	}
	combatantManager->setPlayerRef(this);
}

bool AMyPlayer::isOutOfDeadzone(float x, float z) const {
	return x >= 0.3 && z >= 0.3;
}

void AMyPlayer::handleMovement(const FVector2D& input) {
	if (!isOutOfDeadzone(input.X, input.Y))
		return;
	UCombatantAttributes* attr = _attributeSet->getFinal<UCombatantComponent, UCombatantAttributes>();
	if (!IsValid(attr))
		return;
	FVector movement = FVector(input.X * _MOVEMENT_SPEED, 0, input.Y * _MOVEMENT_SPEED * attr->_movementSpeed);
	{
		FHitResult* unused = nullptr;
		AddActorWorldOffset(movement, false, unused, ETeleportType::TeleportPhysics);
	}
}

void AMyPlayer::Tick(float delta) {
	ACombatant::Tick(delta);
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
}