#include "ExperienceShard.h"
#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "MyPlayer.h"
#include "Components/SphereComponent.h"
#include "Definitions.h"
#include "AssetRefs.h"
#include "PaperFlipbook.h"

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
		const FVector currentScale = GetActorScale3D();
		SetActorScale3D(currentScale*_SIZE_MULTIPLIER);
		_flipbook->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
		_flipbook->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
		//Initialise flipbook as disabled
		_flipbook->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	{
		_collider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
		if (!IsValid(_collider)) {
			LOGERROR("AExperienceShard::AExperienceShard - _collider creation failed");
			return;
		}
		_collider->InitSphereRadius(_MAGNETISM_RADIUS);
		_collider->SetupAttachment(RootComponent);
		_collider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		_collider->SetCollisionObjectType(ECC_WorldDynamic);
		_collider->SetCollisionResponseToAllChannels(ECR_Ignore);
		_collider->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
		// The actual physics collision is handled by Player.
		/*_collider->OnComponentBeginOverlap.AddDynamic(this, &AAOE::OnOverlapBegin);*/
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
	{
		UAssetRefs* refs = nullptr;
		if (!MyGameplayStatics::getAssetRefs(this, refs)) {
			LOGERROR("AExperienceShard::AExperienceShard - invalid UAssetRefs");
			end();
		}
		UPaperFlipbook* sprite = refs->getExperienceSprite();
		if (!IsValid(sprite)) {
			LOGERROR("AExperienceShard::AExperienceShard - invalid flipbook");
			end();
		}
		if (!unrealHelpers::initFlipbook(this, sprite, _flipbook))
			end();
	}
	//if (!unrealHelpers::initFlipbook(this, _DEFAULT_SPRITE, _flipbook)) {
	//	LOGERROR("AExperienceShard::BeginPlay - failed to initialise flipbook");
	//	end();
	//}
	end();
}

void AExperienceShard::Tick(float delta) {
	Super::Tick(delta);
	if (!_magnetismEnabled)
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
	const FVector difference = playerPos - myPos;
	const FVector direction = difference.GetSafeNormal(EPSILON, FVector(1, 0, 0));
	const FVector endPos = myPos + direction * _speed * delta;
	// This block is one of two ways the experience shard can be collected by the player. To ensure that the shard doesn't teleport over the player, a sweep is performed, modelling the shard
	// as a sphere. 
	// The other way it can be collected is if the Player's sprite is overlapping the shard's sprite during AMyPlayer::Tick(float)
	{
		{
			TArray<struct FHitResult> OutHits;
			if (!unrealHelpers::performSweepAtPawn(this, myPos, endPos, FCollisionShape::MakeSphere(SPRITE_RADIUS), OutHits, {})) {
				LOGERROR("AExperienceShard::accelerateTowardsPlayer - performSweepAtPawn failed");
				return;
			}
			for (const FHitResult& hit : OutHits) {
				if (!IsValid(hit.GetActor()))
					continue;
				if (hit.GetActor() == _playerRef.Get()) {
					_playerRef->handleExperienceShardCollision(this);
					return;
				}
			}
		}
	}
	{
		const FVector displacement = direction * _speed * delta;
		FHitResult* throwaway = nullptr;
		AddActorWorldOffset(displacement, false, throwaway, ETeleportType::TeleportPhysics);
	}
	_speed += _ACCELERATION * delta;
}

void AExperienceShard::beginMagnetism(AMyPlayer* player) {
	if (!IsValid(player)) {
		LOGERROR("AExperienceShard::beginMagnetism - player is not valid");
		return;
	}
	_flipbook->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	_collider->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	_magnetismEnabled = true;
	_playerRef = TWeakObjectPtr<AMyPlayer>(player);
	_speed = _STARTING_SPEED;
}