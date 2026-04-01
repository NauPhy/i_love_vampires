#pragma once

class helpers {
public:
	helpers() = delete;
	static bool nearEq(float left, float right);
	static bool isInvalidData(float data) { return nearEq(data, -999); }
	static bool isInvalidData(int data) { return data == -999; }
};