#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include <type_traits>
#include "Engine/DataAsset.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/AssetData.h"
#include "GameplayTagContainer.h"
#include "AutomaticAssetRefs.generated.h"
class UWeaponTemplate;
class UBaseTemplate;

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAutomaticAssetRefs : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	TArray<const UWeaponTemplate*> _weapons;

	template <typename T>
	void loadAssets(TArray<const T*>& out);

public:
	UAutomaticAssetRefs();
	UFUNCTION(BlueprintCallable)
	const UWeaponTemplate* getRandomWeapon(TArray<UWeaponTemplate*> ignored) const;
};

template <typename T>
void UAutomaticAssetRefs::loadAssets(TArray<const T*>& out) {
	static_assert(std::is_base_of<UBaseTemplate, T>::value, "T must be a UBaseTemplate or derived from UBaseTemplate");

	out.Empty();
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FARFilter Filter;
	Filter.ClassPaths.Add(FTopLevelAssetPath(T::StaticClass()));
	Filter.bRecursiveClasses = true;
	TArray<FAssetData> AssetList;
	AssetRegistryModule.Get().GetAssets(Filter, AssetList);
	for (const FAssetData& Asset : AssetList) {
		TSoftObjectPtr<T> SoftPtr(Asset.ToSoftObjectPath());
		const T* AssetPtr = SoftPtr.LoadSynchronous();
		if (AssetPtr && !(AssetPtr->Tags.HasTag(FGameplayTag::RequestGameplayTag(FName("myTest"))))) {
			out.Add(AssetPtr);
		}
	}
}