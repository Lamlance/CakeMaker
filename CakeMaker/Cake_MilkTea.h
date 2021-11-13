#pragma once
#ifndef CAKE_MILKTEA_H
#define CAKE_MILKTEA_H
#include "Cake.h"

class CakeMilkTea :public CakeLayer
{
public:
	std::string desc() { return "Milk Tea Cake Layer"; };
	int price() { return 15000; }
	double timeTake() { return 5; };
};


#endif // !CAKE_CORN_H