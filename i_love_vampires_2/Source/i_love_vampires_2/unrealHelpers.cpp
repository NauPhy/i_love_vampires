#include "unrealHelpers.h"
#include "PaperFlipbookComponent.h"
#include "MyGameplayStatics.h"
#include "SpriteManager.h"
#include "GameFramework/Actor.h"
#include "Definitions.h"
#include "Components/SceneComponent.h"

bool unrealHelpers::initFlipbook(AActor* caller, ESprite sprite, UPaperFlipbookComponent*& flipbook) {
	if (!IsValid(caller) || !IsValid(flipbook)) {
		LOGERROR("unrealHelpers::initFlipbook - parameter is not valid");
		return false;
	}
	USpriteManager* spriteManager = nullptr;
	if (!MyGameplayStatics::getSpriteManager(caller, spriteManager)) {
		return false;
	}
	UPaperFlipbook* tempSprite = nullptr;
	if (!spriteManager->getSprite(sprite, tempSprite))
		return false;
	if (tempSprite == nullptr) {
		LOGERROR("unrealHelpers::initFlipbook - sprite is null");
		return false;
	}
	flipbook->SetFlipbook(tempSprite);
	return true;
}

bool unrealHelpers::constructFlipbook(AActor* caller, USceneComponent* rootComp, UPaperFlipbookComponent*& flipbook) {
	if (!IsValid(caller) || !IsValid(rootComp)) {
		LOGERROR("unrealHelpers::constructFlipbook - parameter is not valid");
		return false;
	}
	flipbook = caller->CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("flipbook"));
	flipbook->SetupAttachment(rootComp);
	flipbook->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	// The default flipbook scale is 2.56 pixels per unit, and as I can't use inheritance with sprites or flipbooks, I cannot make a custom default for a
	// subset of my sprites (or even all of my sprites). So I just used the default for all sprites. That can be rectified at runtime, preferrably in constructors,
	// such as here.
	FVector currentScale = caller->GetActorScale3D();
	caller->SetActorScale3D(currentScale*2.56);
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