#pragma once
#ifndef CAKE_CARAMEL_H
#define CAKE_CARAMEL_H
#include "Cake.h"

class CakeCaramel :public CakeLayer
{
public:
	std::string desc() { return "Caramel Cake Layer"; };
	int price() { return 100000; }
	double timeTake() { return 20; };
	CakeLayer* removeDec() { return this; };

};


#endif // !CAKE_CARAMEL_H