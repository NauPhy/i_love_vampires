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
#include "Kismet/KismetMathLibrary.h"
#include <cmath>
#include "MyPlayer.h"
#include "DamageNumber.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

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
	flipbook->SetMaterial(0, mat);
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

float unrealHelpers::getAngleBetweenVectors(const FVector& from, const FVector& to) {
	const float num = FVector::DotProduct(from.GetSafeNormal(), to.GetSafeNormal());
	//const float den = from.Size() * to.Size();
	return std::acos(num) * (360 / (2 * PI));
}

void unrealHelpers::lookAtDirection(AActor* caller, float X, float Z) {
	const FRotator rotation = UKismetMathLibrary::FindLookAtRotation(FVector(0, 0, 0), FVector(X,0,Z));
	caller->SetActorRotation(rotation, ETeleportType::TeleportPhysics);
}

float unrealHelpers::getOrthoWidth(UObject* caller) {
	APawn* player = UGameplayStatics::GetPlayerPawn(caller, 0);
	if (!IsValid(player)) {
		LOGERROR("unrealHelpers::getOrthoWidth - failed to get player pawn");
		return 0;
	}
	AMyPlayer* casted = Cast<AMyPlayer>(player);
	if (!IsValid(casted)) {
		LOGERROR("unrealHelpers::getOrthoWidth - player pawn is not AMyPlayer");
		return 0;
	}
	return casted->getOrthoWidth();
}

bool unrealHelpers::spawnDamageNumberNearMe(AActor* caller, const FVector& offset, float damageAmount) {
	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::spawnDamageNumberNearMe - caller is not valid");
		return false;
	}
	auto player = UGameplayStatics::GetPlayerController(caller, 0);
	if (!IsValid(player)) {
		LOGERROR("unrealHelpers::spawnDamageNumberNearMe - failed to get player controller");
		return false;
	}
	UAssetRefs* refs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(caller, refs)) {
		LOGERROR("unrealHelpers::spawnDamageNumberNearMe - failed to get asset refs");
		return false;
	}
	TSubclassOf<UDamageNumber> damagePopupClass = refs->getDamagePopupWidgetClass();
	if (!IsValid(damagePopupClass)) {
		LOGERROR("unrealHelpers::spawnDamageNumberNearMe - damage popup class not valid");
		return false;
	}
	UDamageNumber* widget = Cast<UDamageNumber>(UWidgetBlueprintLibrary::Create(caller, damagePopupClass, player));
	if (!IsValid(widget)) {
		LOGERROR("unrealHelpers::spawnDamageNumberNearMe - failed to create widget");
		return false;
	}
	widget->initialise_UDamageNumber(caller, offset, damageAmount);
	return true;
}