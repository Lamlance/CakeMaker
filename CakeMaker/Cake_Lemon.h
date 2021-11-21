#pragma once
#ifndef CAKE_LEMON_H
#define CAKE_LEMON_H
#include "Cake.h"

class CakeLemon :public CakeLayer
{
public:
	std::string desc() { return "Lemon Cake Layer"; };
	int price() { return 10000; }
	double timeTake() { return 5; };
	CakeLayer* removeDec() { return this; };

};


#endif // !CAKE_LEMON_H