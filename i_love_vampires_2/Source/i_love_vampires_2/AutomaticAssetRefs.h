#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include <type_traits>
#include "Engine/DataAsset.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/AssetData.h"
#include "GameplayTagContainer.h"
#include "Definitions.h"
#include "AutomaticAssetRefs.generated.h"

class UWeaponTemplate;
class UBaseTemplate;
class UCombatantPassive;

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAutomaticAssetRefs : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	TArray<UWeaponTemplate*> _weapons;
	TArray<UPassiveData*> _passives;

	template <typename T>
	void loadAssets(TArray<T*>& out);
	template <typename T>
	const T* getRandomAsset(const TArray<T*>& assetArray, const TArray<T*>& ignored);

public:
	UAutomaticAssetRefs();
	UFUNCTION(BlueprintCallable)
	const UWeaponTemplate* getRandomWeapon(const TArray<UWeaponTemplate*>& ignored);
	UFUNCTION(BlueprintCallable)
	const UPassiveData* getRandomPassive(const TArray<UPassiveData*>& ignored);
};

template <typename T>
void UAutomaticAssetRefs::loadAssets(TArray<T*>& out) {
	static_assert(std::is_base_of<UBaseTemplate, T>::value, "T must be a UBaseTemplate or derived from UBaseTemplate");

	out.Empty();
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FARFilter Filter;
	Filter.ClassPaths.Add(FTopLevelAssetPath(T::StaticClass()));
	Filter.bRecursiveClasses = true;
	//Filter.bIncludeOnlyOnDiskAssets = true;
	TArray<FAssetData> AssetList;
	AssetRegistryModule.Get().GetAssets(Filter, AssetList);
	for (const FAssetData& Asset : AssetList) {
		const FString PackageShortName = FPackageName::GetShortName(Asset.PackageName.ToString());
		const FString AssetName = Asset.AssetName.ToString();
		if (AssetName != PackageShortName)
			continue;
		if (Asset.FindTag("myTest"))
			continue;
		TSoftObjectPtr<T> SoftPtr(Asset.ToSoftObjectPath());
		T* AssetPtr = SoftPtr.LoadSynchronous();
		if (IsValid(AssetPtr)) {
			out.Add(AssetPtr);
		}
	}
}

template<typename T>
const T* UAutomaticAssetRefs::getRandomAsset(const TArray<T*>& assetArray, const TArray<T*>& ignored) {
	static_assert(std::is_base_of<UBaseTemplate, T>::value, "T must be a UBaseTemplate or derived from UBaseTemplate");

	if (assetArray.Num() == 0) {
		LOGERROR("UAutomaticAssetRefs::getRandomAsset - no assets found");
		return nullptr;
	}
	if (ignored.Num() == 0) {
		return assetArray[FMath::RandRange(0, assetArray.Num() - 1)];
	}
	else {
		TArray<const T*> temp;
		for (const auto& asset : assetArray) {
			if (!ignored.Contains(asset)) {
				temp.Add(asset);
			}
		}
		if (temp.Num() == 0) {
			LOGWARNING("UAutomaticAssetRefs::getRandomAsset - no valid assets");
			return nullptr;
		}
		else
			return temp[FMath::RandRange(0, temp.Num() - 1)];
	}
}