#pragma once
#ifndef CAKE_COCONUT_H
#define CAKE_COCONUT_H
#include "Cake.h"

class CakeCoconut :public CakeLayer
{
public:
	std::string desc() { return "Coconut Cake Layer"; };
	int price() { return 25000; }
	double timeTake() { return 5; };
	CakeLayer* removeDec() { return this; };

};


#endif // !CAKE_COCONUT_H