#pragma once
#ifndef CAKEDECO_YOGURT_H
#define CAKEDECO_YOGURT_H
#include "CakeLayer_Decorator.h"

class addYogurt : public CakeLayer_Decorator
{
public:
	addYogurt(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + " + Yogurt x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 5000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount * 0.2); };
	CakeLayer* removeDec() { return cakeLayer_obj; };

private:
	int amount;
};


#endif // CAKEDECO_YOGURT_H
