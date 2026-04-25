//This is separated from the other helper file to reduce compile time and also because unreal functions are expected to be more buggy

#pragma once
#include "CoreMinimal.h"
//#include "SpriteEnum.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Definitions.h"
#include <type_traits>
#include "Kismet/GameplayStatics.h"
#include "MyGameplayStatics.h"
#include "DynamicAssetManager.h"
#include "UObject/Class.h"
#include "BaseTemplate.h"
class UPaperFlipbookComponent;
class UPaperFlipbook;
class USceneComponent;
class UActorComponent;

class unrealHelpers {
	static inline float _SPRITE_SCALE = 1.0f;

	static bool getActorSpawnTransform(AActor* caller, FTransform& ret);

public:
	unrealHelpers() = delete;
	static bool initFlipbook(AActor* caller, UPaperFlipbook* sprite, UPaperFlipbookComponent*& flipbook);
	static bool constructFlipbook(AActor* caller, USceneComponent* rootComp, UPaperFlipbookComponent*& flipbook);
	static bool snapSprite(const AActor* caller, const UActorComponent* comp, UPaperFlipbookComponent* flipbook);

	static float getAngleBetweenVectors(const FVector& from, const FVector& to);
	static void lookAtDirection(AActor* caller, float X, float Z);
	static void lookAtDirection(AActor* caller, const FVector& direction) { lookAtDirection(caller, direction.X, direction.Z); }
	static float getOrthoWidth(UObject* caller);

	template <typename T>
	static const T* getDynamicTemplate(const UObject* caller, T* diskTemplate);
	template<typename T>
	static bool spawnActorOnTopOfMe(AActor* caller, T*& ret);
	template <typename T>
	static bool spawnActorOnTopOfMeDeferred(AActor* caller, T*& ret);
	template <typename T>
	static bool finishDeferredSpawn(AActor* caller, T* spawnedActor);
	static bool spawnDamageNumberNearMe(AActor* caller, const FVector& offset, float damageAmount);

	static bool performSweepAtPawn(UObject* caller, const FVector& startPos, const FVector& endPos, const FCollisionShape& shape, TArray<struct FHitResult>& OutHits, const TArray<const APawn*>& ignoredPawns);
	static bool isInvalidData(const UObject* obj) { return !IsValid(obj) || obj == nullptr; }
	template<typename T>
	static bool isInvalidData(const T& e);
	template <typename T>
	static bool isInvalidData(const TSubclassOf<T> val) { return val == nullptr; }
	static bool isInvalidData(const FString& str) { return str == "_invalid_"; }	
};

template <typename T>
bool unrealHelpers::isInvalidData(const T& e) {
	static_assert(TIsEnum<T>::Value);

	return static_cast<uint8>(e) == static_cast<uint8>(255);
}

template <typename T>
const T* unrealHelpers::getDynamicTemplate(const UObject* caller, T* diskTemplate) {
	static_assert(std::is_base_of_v<UBaseTemplate, T>, "T must be a subclass of UBaseTemplate");

	UDynamicAssetManager* assetManager = nullptr;
	if (!MyGameplayStatics::getDynamicAssetManager(caller, assetManager)) {
		LOGERROR("unrealHelpers::getDynamicTemplate - failed to get asset manager");
		return nullptr;
	}
	return assetManager->registerTemplate<T>(diskTemplate);
}

template<typename T>
bool unrealHelpers::spawnActorOnTopOfMe(AActor* caller, T*& ret) {
	static_assert(TIsDerivedFrom<T, AActor>::IsDerived, "T must derive from AActor");

	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMe - caller is not valid");
		return false;
	}

	FVector location = caller->GetActorLocation();
	FRotator rot = caller->GetActorRotation();
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMe - world is not valid");
		return false;
	}
	ret = world->SpawnActor<T>(location, rot, spawnParams);
	if (!IsValid(ret)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMe - failed to spawn actor");
		return false;
	}
	return true;
}

template<typename T>
bool unrealHelpers::spawnActorOnTopOfMeDeferred(AActor* caller, T*& ret) {
	static_assert(TIsDerivedFrom<T, AActor>::IsDerived, "T must derive from AActor");

	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMeDeferred - caller is not valid");
		return false;
	}

	FTransform trans;
	if (!getActorSpawnTransform(caller, trans)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMeDeferred - failed to get spawn transform");
		return false;
	}
	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMeDeferred - world is not valid");
		return false;
	}
	APawn* possibleInstigator = Cast<APawn>(caller);

	ret = world->SpawnActorDeferred<T>(
		T::StaticClass(),
		trans,
		caller,
		possibleInstigator,
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn,
		ESpawnActorScaleMethod::MultiplyWithRoot
		);
	if (!IsValid(ret)) {
		LOGERROR("unrealHelpers::spawnActorOnTopOfMeDeferred - failed to spawn actor");
		return false;
	}
	return true;
}

template<typename T>
bool unrealHelpers::finishDeferredSpawn(AActor* caller, T* spawnedActor) {
	static_assert(TIsDerivedFrom<T, AActor>::IsDerived, "T must derive from AActor");

	if (!IsValid(caller)) {
		LOGERROR("unrealHelpers::finishDeferredSpawn - caller is not valid");
		return false;
	}
	if (!IsValid(spawnedActor)) {
		LOGERROR("unrealHelpers::finishDeferredSpawn - spawnedActor is not valid");
		return false;
	}
	FTransform trans;
	if (!getActorSpawnTransform(caller, trans)) {
		LOGERROR("unrealHelpers::finishDeferredSpawn - failed to get spawn transform");
		return false;
	}
	UGameplayStatics::FinishSpawningActor(spawnedActor, trans, ESpawnActorScaleMethod::MultiplyWithRoot);
	if (!IsValid(spawnedActor)) {
		LOGERROR("unrealHelpers::finishDeferredSpawn - failed to finish spawning actor");
		return false;
	}
	return true;
}

