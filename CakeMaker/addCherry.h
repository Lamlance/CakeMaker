#pragma once
#ifndef CAKEDECO_CHERRY_H
#define CAKEDECO_CHERRY_H
#include "CakeLayer_Decorator.h"

class addCherry: public CakeLayer_Decorator
{
public:
	addCherry(CakeLayer* obj, int amountVal = 1) :CakeLayer_Decorator(obj), amount(amountVal) {};
	std::string desc() { return CakeLayer_Decorator::desc() + " + Cherry x " + std::to_string(amount); };
	int price() { return CakeLayer_Decorator::price() + (amount * 2000); };
	double timeTake() { return CakeLayer_Decorator::timeTake() + (amount*0.2); };
	CakeLayer* removeDec() { return cakeLayer_obj; };

private:
	int amount;
};


#endif // CAKEDECO_CHERRY_H
