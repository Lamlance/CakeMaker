#pragma once
#ifndef CAKE_MILK_H
#define CAKE_MILK_H
#include "Cake.h"

class CakeMilk :public CakeLayer
{
public:
	std::string desc() { return "Milk Cake Layer"; };
	int price() { return 12000; }
	double timeTake() { return 5; };
};


#endif // !CAKE_CORN_H