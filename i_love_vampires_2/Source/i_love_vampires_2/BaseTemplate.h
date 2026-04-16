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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTagContainer Tags;

	virtual void replaceOverrides() {
		LOGERROR("This would be a pure virtual function if Unreal allowed it");
	}
	UBaseTemplate(const FObjectInitializer& init) : Super(init) {}
	virtual FPrimaryAssetId GetPrimaryAssetId() const override {
		// This is shared by all assets of subclass UBaseTemplate
		static const FName TypeName = TEXT("BaseTemplate");
		// This is a unique and arbitrary name for each instance
		return FPrimaryAssetId(TypeName, GetFName());
	}
	UBaseTemplate* createOverrideCopy() const;
};