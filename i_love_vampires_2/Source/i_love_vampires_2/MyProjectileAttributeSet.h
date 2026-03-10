#pragma once
#include "CoreMinimal.h"
#include "MyAttributeSet.h"
#include "MyProjectileAttributeSet.generated.h"
class UMyCombatantAttributeSet;

UCLASS()
class I_LOVE_VAMPIRES_2_API UMyProjectileAttributeSet : public UMyAttributeSet<FProjectileTemplate_Attr>
{
	GENERATED_BODY()

protected:
	virtual void updateFromModifiers() override;

public:
	UMyProjectileAttributeSet() = default;
	void initialise_UMyProjectileAttributeSet(FName ID, FCombatantAttributeSet*);
};