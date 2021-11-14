#pragma once
#ifndef CAKEDECO_CARAMEL_H
#define CAKEDECO_CARAMEL_H
#include "CakeLayer_Decorator.h"

class addCaramel : public CakeLayer_Decorator
{
public:
	addCaramel(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + " + Caramel x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 10000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount * 0.5); };
private:
	int amount;
};


#endif // CAKEDECO_CARAMEL_H
