#pragma once
#ifndef CAKE_BANANA_H
#define CAKE_BANANA_H
#include "Cake.h"

class CakeBanana :public CakeLayer
{
public:
	std::string desc() { return "Banana Cake Layer"; };
	int price() { return 8000; }
	double timeTake() { return 5; };
};


#endif // !CAKE_CORN_H