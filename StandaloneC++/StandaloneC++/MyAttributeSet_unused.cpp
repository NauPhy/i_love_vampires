#include "pch.h"
#include "MyAttributeSet_unused.h"
#include "Definitions.h"

int MyAttributeSet::getAttributeIndex(const std::string& attributeName) const {
	for (size_t i = 0; i < attributes.size(); ++i) {
		if (attributes[i].name == attributeName) {
			return static_cast<int>(i);
		}
	}
	LOGERROR("Attribute not found: " + attributeName);
	return -1;
}

float MyAttributeSet::getAttributeValue(const std::string& attributeName) const {
	int index = getAttributeIndex(attributeName);
	if (index == -1) 
		return 1.0f;
	const MyAttribute& attr = attributes[index];
	return (attr.baseValue + attr.prebonus) * (1.0f + attr.premultiplier) + attr.postbonus;
}
void MyAttributeSet::addAttributePrebonus(const std::string& attributeName, float bonus) {
	int index = getAttributeIndex(attributeName);
	if (index == -1) 
		return;
	attributes[index].prebonus += bonus;
}
void MyAttributeSet::addAttributePremultiplier(const std::string& attributeName, float multiplier) {
	int index = getAttributeIndex(attributeName);
	if (index == -1) 
		return;
	attributes[index].premultiplier += multiplier;
}
void MyAttributeSet::addAttributePostbonus(const std::string& attributeName, float bonus) {
	int index = getAttributeIndex(attributeName);
	if (index == -1) 
		return;
	attributes[index].postbonus += bonus;
}

MyAttributeSet::MyAttributeSet() {
	std::unordered_map<std::string, float> definitions = getAttributeDefinitions();
	for (const auto& pair : definitions) {
		attributes.push_back({ pair.second, 0.0f, 0.0f, 0.0f });
	}
}