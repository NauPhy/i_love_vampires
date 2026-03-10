#pragma once
#include "CoreMinimal.h"
#include "MyAttributeSet.h"
#include "MyCombatantAttributeSet.generated.h"

UCLASS()
class I_LOVE_VAMPIRES_2_API UMyCombatantAttributeSet : public UMyAttributeSet<FCombatantTemplate_Attr>
{
	GENERATED_BODY()

protected:
	virtual void updateFromModifiers() override {}

public:
	UMyCombatantAttributeSet() = default;
	// no other attribute set modifies combatant attribute set
	void initialise_UMyCombatantAttributeSet(const UObject* caller, FName ID);
	void burnTick();
};