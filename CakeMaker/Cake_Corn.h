#pragma once
#ifndef CAKE_CORN_H
#define CAKE_CORN_H
#include "Cake.h"

class CakeCorn:public CakeLayer
{
public:
	std::string desc() {return "Corn Cake Layer"; };
	int price() { return 50000; }
	double timeTake() { return 10; };
};


#endif // !CAKE_CORN_H
