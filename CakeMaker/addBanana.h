#pragma once
#ifndef CAKEDECO_BANANA_H
#define CAKEDECO_BANANA_H
#include "CakeLayer_Decorator.h"

class addBanana : public CakeLayer_Decorator
{
public:
	addBanana(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + " + Banana x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 2000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount * 0.2); };
private:
	int amount;
};


#endif // CAKEDECO_BANANA_H
