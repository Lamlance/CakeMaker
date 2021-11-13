#pragma once
#ifndef CAKEDECO_CARAMEL_H
#define CAKEDECO_CARAMEL_H
#include "CakeLayer_Decorator.h"

class addCheese : public CakeLayer_Decorator
{
public:
	addCheese(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + " + Cheese x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 5000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount * 0.2); };
private:
	int amount;
};


#endif // CAKEDECO_CARAMEL_H
