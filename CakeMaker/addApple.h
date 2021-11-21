#pragma once
#ifndef CAKEDECO_APPLE_H
#define CAKEDECO_APPLE_H
#include "CakeLayer_Decorator.h"

class addApple : public CakeLayer_Decorator
{
public:
	addApple(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + "\t + Apple x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 3000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount * 0.1); };
private:
	int amount;
};


#endif // CAKEDECO_APPLE_H
