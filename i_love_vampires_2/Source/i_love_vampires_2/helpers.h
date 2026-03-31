#pragma once

class helpers {
public:
	helpers() = delete;
	static bool nearEq(float left, float right);
	static bool isInvalidData(float data) { return nearEq(data, -999); }
};