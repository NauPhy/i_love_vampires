#pragma once
#include "CoreMinimal.h"
#include "MyAttributeSet.h"
#include "MyWeaponAttributeSet.generated.h"
class UMyCombatantAttributeSet;

UCLASS()
class I_LOVE_VAMPIRES_2_API UMyWeaponAttributeSet : public UMyAttributeSet<FWeaponTemplate_Attr>
{
	GENERATED_BODY()

protected:
	virtual void updateFromModifiers() override;

public:
	UMyWeaponAttributeSet() = default;
	void initialise_UMyWeaponAttributeSet(FName ID, FCombatantAttributeSet*);
};