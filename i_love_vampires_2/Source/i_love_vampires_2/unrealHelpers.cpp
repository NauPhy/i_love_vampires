#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "MyGameplayStatics.h"
//#include "SpriteManager.h"
#include "GameFramework/Actor.h"
#include "Definitions.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Pawn.h"
#include "PaperFlipbook.h"

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
	return true;
}

bool unrealHelpers::constructFlipbook(AActor* caller, USceneComponent* rootComp, UPaperFlipbookComponent*& flipbook) {
	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::constructFlipbook - parameter is not valid");
		return false;
	}
	flipbook = caller->CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("flipbook"));
	//flipbook->SetupAttachment(rootComp);
	flipbook->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	flipbook->SetGenerateOverlapEvents(true);
	//flipbook->UpdateCollisionProfile();
	// The default flipbook scale is 2.56 pixels per unit, and as I can't use inheritance with sprites or flipbooks, I cannot make a custom default for a
	// subset of my sprites (or even all of my sprites). So I just used the default for all sprites. That can be rectified at runtime, preferrably in constructors,
	// such as here.
	FVector currentScale = caller->GetActorScale3D();
	caller->SetActorScale3D(currentScale*1.00);
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