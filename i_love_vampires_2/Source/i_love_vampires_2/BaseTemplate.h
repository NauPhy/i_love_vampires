#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseTemplate.generated.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UBaseTemplate : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UBaseTemplate(const FObjectInitializer& init) : Super(init) {}
	virtual FPrimaryAssetId GetPrimaryAssetId() const override {
		// This is shared by all assets of subclass UBaseTemplate
		static const FName TypeName = TEXT("BaseTemplate");
		// This is a unique and arbitrary name for each instance
		return FPrimaryAssetId(TypeName, GetFName());
	}
};