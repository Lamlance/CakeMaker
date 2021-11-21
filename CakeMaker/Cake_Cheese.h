#pragma once
#ifndef CAKE_CHEESE_H
#define CAKE_CHEESE_H
#include "Cake.h"

class CakeCheese :public CakeLayer
{
public:
	std::string desc() { return "Cheese Cake Layer"; };
	int price() { return 5000; }
	double timeTake() { return 10; };
	CakeLayer* removeDec() { return this; };

};


#endif // !CAKE_CHEESE_H