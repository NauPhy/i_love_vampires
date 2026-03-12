#pragma once
#include "CoreMinimal.h"
#include "CombatantAttributes.h"
#include "MyAttributeSet.h"

class UMyCombatantAttributeSet : public UMyAttributeSet<FCombatantAttributes>
{
protected:
	virtual void updateFromModifiers() override {}

public:
	UMyCombatantAttributeSet() = default;
	// no other attribute set modifies combatant attribute set
	void initialise_UMyCombatantAttributeSet(const FCombatantAttributes*);
	void burnTick();
};