#pragma once
#ifndef CAKEDECO_ORANGE_H
#define CAKEDECO_ORANGE_H
#include "CakeLayer_Decorator.h"

class addOrange : public CakeLayer_Decorator
{
public:
	addOrange(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + "\t + Orange x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 4000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount * 0.4); };
private:
	int amount;
};



#endif // !CAKEDECO_ORANGE_H