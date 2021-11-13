#pragma once
#ifndef CAKE_CHERRY_H
#define CAKE_CHERRY_H
#include "Cake.h"

class CakeCherry :public CakeLayer
{
public:
	std::string desc() { return "Cherry Cake Layer"; };
	int price() { return 30000; }
	double timeTake() { return 5; };
};


#endif // !CAKE_CHERRY_H