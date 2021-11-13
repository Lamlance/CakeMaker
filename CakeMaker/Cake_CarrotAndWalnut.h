#pragma once
#ifndef CAKE_CARROTANDWALNUT_H
#define CAKE_CARROTANDWALNUT_H
#include "Cake.h"

class CakeCarrotAndWalnut :public CakeLayer
{
public:
	std::string desc() { return "Carrot and Walnut Cake Layer"; };
	int price() { return 100000; }
	double timeTake() { return 20; };
};


#endif // !CAKE_CORN_H