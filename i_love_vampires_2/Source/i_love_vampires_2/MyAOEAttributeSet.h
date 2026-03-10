#pragma once
#include "CoreMinimal.h"
#include "MyAttributeSet.h"
#include "MyAOEAttributeSet.generated.h"
class UMyCombatantAttributeSet;

UCLASS()
class I_LOVE_VAMPIRES_2_API UMyAOEAttributeSet : public UMyAttributeSet<FAOETemplate_Attr>
{
	GENERATED_BODY()

protected:
	virtual void updateFromModifiers() override;

public:
	UMyAOEAttributeSet() = default;
	void initialise_UMyAOEAttributeSet(FName ID, FCombatantAttributeSet*);
};