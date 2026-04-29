#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Definitions.h"
#include "GameplayTagContainer.h"
#include "BaseTemplate.generated.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UBaseTemplate : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTagContainer _assetTags;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString _desc = "Default Description";

	virtual void replaceOverrides()
		PURE_VIRTUAL(UBaseTemplate::replaceOverrides,
			LOGERROR("replaceOverrides not implemented in this class"););
	virtual void dynamicDeepCopy(const UObject* context)
		PURE_VIRTUAL(UBaseTemplate::dynamicDeepCopy,
			LOGERROR("dynamicDeepCopy not implemented in this class"););

	UBaseTemplate(const FObjectInitializer& init) : Super(init) {}
	virtual FPrimaryAssetId GetPrimaryAssetId() const override {
		// This is shared by all assets of subclass UBaseTemplate
		static const FName TypeName = TEXT("BaseTemplate");
		// This is a unique and arbitrary name for each instance
		return FPrimaryAssetId(TypeName, GetFName());
	}
	UBaseTemplate* createOverrideCopy(const UObject* caller) const;
	virtual void GetAssetRegistryTags(TArray<FAssetRegistryTag>& OutTags) const override
	{
		Super::GetAssetRegistryTags(OutTags);
		for (const FGameplayTag& Tag : _assetTags)
		{
			OutTags.Add(FAssetRegistryTag(
				Tag.GetTagName(),
				FString("N/A"),
				FAssetRegistryTag::TT_Alphabetical
			));
		}
	}
};