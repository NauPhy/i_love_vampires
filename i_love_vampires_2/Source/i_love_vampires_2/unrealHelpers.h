//This is separated from the other helper file to reduce compile time and also because unreal functions are expected to be more buggy

#pragma once
#include "CoreMinimal.h"
#include "SpriteEnum.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Definitions.h"
#include <type_traits>
class UPaperFlipbookComponent;
class USceneComponent;

class unrealHelpers {
public:
	unrealHelpers() = delete;
	static bool initFlipbook(AActor* caller, ESprite sprite, UPaperFlipbookComponent*& flipbook);
	static bool constructFlipbook(AActor* caller, USceneComponent* rootComp, UPaperFlipbookComponent*& flipbook);
	template<typename T>
	static T* spawnActorOnTopOfMe(AActor* caller);
};

template<typename T>
T* unrealHelpers::spawnActorOnTopOfMe(AActor* caller) {
	static_assert(TIsDerivedFrom<T, AActor>::IsDerived, "T must derive from AActor");

	FVector location = caller->GetActorLocation();
	FRotator rot = caller->GetActorRotation();
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMe - world is invalid");
		return nullptr;
	}
	return world->SpawnActor<T>(location, rot, spawnParams);
}