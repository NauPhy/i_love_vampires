#pragma once
#include <vector>
class Attack;

class Attack_Player {
	int baseMaxLevel = 5;
	int evolvedMaxLevel = 5;
	std::vector<Attack> base;
	std::vector<Attack> evolved;
};