#pragma once
#ifndef CAKELAYER_DECO_H
#define CAKELAYER_DECO_H
#include "Cake.h"

class CakeLayer_Decorator:public CakeLayer
{
public:
	CakeLayer_Decorator(CakeLayer* obj) :cakeLayer_obj(obj) {};
	std::string desc() { return cakeLayer_obj->desc(); };
	int price() { return cakeLayer_obj->price(); };
	double timeTake() { return cakeLayer_obj->timeTake(); };

protected:
	CakeLayer* cakeLayer_obj;
};


#endif // !CAKELAYER_DECO_H
