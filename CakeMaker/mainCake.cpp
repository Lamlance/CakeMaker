#include "ALL_TOPPING.h"
#include "CAKE_ALL.h"
#include <iostream>

int main()
{
	Cake fullCake;
	CakeLayer* layer1 = new CakeCheese;
	layer1 = new addCherry(layer1, 4);
	fullCake.cake.push_back(layer1);

	layer1 = new CakeCorn;
	layer1 = new addCherry(layer1, 5);
	layer1 = new addOrange(layer1, 10);
	fullCake.cake.push_back(layer1);

	for (int i = 0; i < fullCake.cake.size(); i++)
	{
		std::cout << "Layer " << i << std::endl;
		std::cout << " " << fullCake.cake[i]->desc() << std::endl;
		std::cout << " " << fullCake.cake[i]->price() << std::endl;
		std::cout << " " << fullCake.cake[i]->timeTake() << std::endl;
	}

}