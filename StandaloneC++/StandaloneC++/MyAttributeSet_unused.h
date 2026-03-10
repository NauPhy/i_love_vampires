#pragma once
#include <iostream>
#include <unordered_map>
#include "MessengerStructs.h"

class MyAttributeSet {
public:
	MyAttributeSet();
	// CHANGE TO FNAME
	float getAttributeValue(int attributeName) const;
	// Not automatic
	void tick(float deltaTime);

protected:
	struct MyAttribute {
		const float baseValue;
		float prebonus;
		float premultiplier;
		float postbonus;
	};
	std::unordered_map<int, MyAttribute> _attributes;

	virtual std::unordered_map<int, float> getAttributeDefinitions() const = 0;
};