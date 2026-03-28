#include "ExperienceShard.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "MyPlayer.h"

void AExperienceShard::suicide() {
	Destroy();
}

void AExperienceShard::initialise_AExperienceShard(float val) {
	_experienceValue = val;
}

AExperienceShard::AExperienceShard() {
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	}
	PrimaryActorTick.bCanEverTick = true;
	{
		if (!unrealHelpers::constructFlipbook(this, RootComponent, _flipbook)) {
			LOGERROR("AExperienceShard::AExperienceShard - failed to construct flipbook");
			return;
		}
		_flipbook->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_flipbook->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
		//Initialise flipbook as disabled
		_flipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	{
		_collider = NewObject<USphereComponent>(this);
		if (!IsValid(_collider)) {
			LOGERRROR("AExperienceShard::AExperienceShard - failed to construct collider");
			return;
		}
		_collider->InitSphereRadius(_MAGNETISM_RADIUS);
		_collider->SetupAttachment(RootComponent);
		_collider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		_collider->SetCollisionObjectType(ECC_WorldDynamic);
		_collider->SetCollisionResponseToAllChannels(ECR_Ignore);
		_collider->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
		_collider->OnComponentBeginOverlap.AddDynamic(this, &AAOE::OnOverlapBegin);
		_collider->RegisterComponent();
		_collider->UpdateOverlaps();
	}
}

void AExperienceShard::BeginPlay() {
	auto end = [this]() {
		Super::BeginPlay();
		return;
		};
	if (_experienceValue < EPSILON) {
		LOGERROR("AExperienceShard::BeginPlay - invalid experienceValue");
		end();
	}
	if (!unrealHelpers::initFlipbook(this, _DEFAULT_SPRITE, _flipbook)) {
		LOGERROR("AExperienceShard::BeginPlay - failed to initialise flipbook");
		end();
	}
	end();
}

void AExperienceShard::Tick(float delta) {
	Super::Tick(delta);
	if (!_isMagnetised)
		return;
	accelerateTowardsPlayer(delta);
}

void AExperienceShard::accelerateTowardsPlayer(float delta) {
	if (!_playerRef.IsValid()) {
		suicide();
		return;
	}
	const FVector myPos = GetActorLocation();
	const FVector playerPos = _playerRef->GetActorLocation();



	FVector start = GetActorLocation();
	FVector end = start + FVector(_directionX, 0, _directionZ) * _projectileAttributes->_speed.getFinal() * delta;
	{
		TArray<struct FHitResult> OutHits;
		performSweep(myPos, playerPos, OutHits);
		for (const FHitResult& hit : OutHits) {
			if (!IsValid(hit.GetActor()))
				continue;
			if (hit.GetActor() == _playerRef.Get()) {
				_playerRef->handleExperienceShardCollision(this);
				return;
			}
		}
	}
	{
		const FVector difference = playerPos - myPos;
		const FVector direction = difference.Normalize();
		const FVector displacement = direction * _speed * delta;
		FHitResult* throwaway = nullptr;
		AddActorWorldOffset(displacement, false, throwaway, ETeleportType::TeleportPhysics);
	}
	_speed += _ACCELERATION * delta;
}

AExperienceShard::beginMagnetism(AMyPlayer* player) {
	if (!IsValid(player)) {
		LOGERROR("AExperienceShard::beginMagnetism - player is not valid");
		return;
	}
	_flipbook->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	_collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	_magnetismEnabled = true;
	_playerRef = TWeakObjectPtr<APawn>(player);
	_speed = _STARTING_SPEED;
}