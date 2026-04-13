#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "MyGameplayStatics.h"
//#include "SpriteManager.h"
#include "GameFramework/Actor.h"
#include "Definitions.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Pawn.h"
#include "PaperFlipbook.h"
#include "Components/ActorComponent.h"
#include "AssetRefs.h"
#include "Materials/MaterialInterface.h"
#include <cmath>

bool unrealHelpers::snapSprite(const AActor* caller, const UActorComponent* comp, UPaperFlipbookComponent* flipbook) {
	if (!IsValid(caller) || !IsValid(comp) || !IsValid(flipbook)) {
		LOGERROR("unrealHelpers::snapSprite - invalid parameter");
		return false;
	}
	FVector currentPos = caller->GetActorLocation();
	currentPos.X = std::round(currentPos.X);
	currentPos.Z = std::round(currentPos.Z);
	FHitResult* throwaway = nullptr;
	flipbook->SetWorldLocation(currentPos, false, throwaway, ETeleportType::TeleportPhysics);
	return true;
}

bool unrealHelpers::initFlipbook(AActor* caller, UPaperFlipbook* sprite, UPaperFlipbookComponent*& flipbook) {
	if (!IsValid(caller) || !IsValid(flipbook)) {
		LOGERROR("unrealHelpers::initFlipbook - parameter is not valid");
		return false;
	}
	if (!IsValid(sprite)) {
		LOGERROR("unrealHelpers::initFlipbook - sprite is invalid");
		return false;
	}
	flipbook->SetFlipbook(sprite);
	UAssetRefs* refs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(caller, refs)) {
		LOGERROR("unrealHelpers::initFlipbook - AssetRefs is invalid");
		return false;
	}
	UMaterialInterface* mat = refs->getSpriteMaterial();
	if (!IsValid(mat)) {
		LOGERROR("unrealHelpers::initFlipbook - mat is invalid");
		return false;
	}
	//flipbook->SetMaterial(0, mat);
	return true;
}

bool unrealHelpers::constructFlipbook(AActor* caller, USceneComponent* rootComp, UPaperFlipbookComponent*& flipbook) {
	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::constructFlipbook - parameter is not valid");
		return false;
	}
	flipbook = caller->CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("flipbook"));
	flipbook->SetupAttachment(rootComp);
	flipbook->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	flipbook->SetGenerateOverlapEvents(true);
	//flipbook->UpdateCollisionProfile();
	FVector currentScale = caller->GetActorScale3D();
	caller->SetActorScale3D(currentScale*_SPRITE_SCALE);
	return true;
}

bool unrealHelpers::getActorSpawnTransform(AActor* caller, FTransform& ret) {
	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMe - caller is not valid");
		return false;
	}

	FVector location = caller->GetActorLocation();
	FRotator rot = caller->GetActorRotation();
	FVector scale(1, 1, 1);
	ret = FTransform(rot, location, scale);
	return true;
}

bool unrealHelpers::performSweepAtPawn(UObject* caller, const FVector& startPos, const FVector& endPos, const FCollisionShape& shape, TArray<struct FHitResult>& OutHits, const TArray<const APawn*>& ignoredPawns) {
	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::performSweepAtPawn_Sphere - caller is not valid");
		return false;
	}
	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("unrealHelpers::performSweepAtPawn_internal - world is invalid");
		return false;
	}

	FCollisionObjectQueryParams params;
	params.AddObjectTypesToQuery(ECC_Pawn);
	//params.AddObjectTypesToQuery(ECC_WorldDynamic);
	//params.AddObjectTypesToQuery(ECC_WorldStatic);
	FCollisionQueryParams params2;
	params2.bFindInitialOverlaps = true;
	{
		APawn* tempPawn = Cast<APawn>(caller);
		if (IsValid(tempPawn))
			params2.AddIgnoredActor(tempPawn);
	}
	{
		for (const auto& tempPawn : ignoredPawns) {
			if (IsValid(tempPawn))
				params2.AddIgnoredActor(tempPawn);
		}
	}

	world->SweepMultiByObjectType(OutHits, startPos, endPos, FQuat::Identity, params, shape, params2);
	return true;
}