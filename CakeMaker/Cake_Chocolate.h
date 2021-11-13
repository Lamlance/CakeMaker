#pragma once
#ifndef CAKE_CHOCOLATE_H
#define CAKE_CHOCOLATE_H
#include "Cake.h"

class CakeChocolate :public CakeLayer
{
public:
	std::string desc() { return "Chocolate Cake Layer"; };
	int price() { return 105000; }
	double timeTake() { return 25; };
};


#endif // !CAKE_CHOCOLATE_H