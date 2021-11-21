#pragma once
#ifndef CAKEDECO_CORN_H
#define CAKEDECO_CORN_H
#include "CakeLayer_Decorator.h"

class addCorn : public CakeLayer_Decorator
{
public:
	addCorn(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + "\t + Corn x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 2000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount * 0.2); };
private:
	int amount;
};


#endif // CAKEDECO_CORN_H
