#pragma once
#include <string>
#include <vector>

class CakeLayer
{
public:
	// Vi du truyen vao ham thoi nha, muon sua thi cu tao branch r sua
	virtual std::string desc() = 0;
	virtual int price() = 0;
	virtual double timeTake() = 0;
};
class Cake
{
public:
	Cake() : cake(0) {};
	std::vector<CakeLayer*> cake;
};
