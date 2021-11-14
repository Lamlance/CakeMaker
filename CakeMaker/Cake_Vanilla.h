#pragma once
#ifndef CAKE_VANILLA_H
#define CAKE_VANILLA_H
#include "Cake.h"

class CakeVanilla :public CakeLayer
{
public:
	std::string desc() { return "Vanilla Cake Layer"; };
	int price() { return 45000; }
	double timeTake() { return 10; };
};


#endif // !CAKE_VANILLA_H