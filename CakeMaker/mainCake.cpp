#include "ALL_TOPPING.h"
#include "CAKE_ALL.h"
#include <iostream>
#include <string>

int main()
{
	Cake fullCake;
	int layerOption;
	int toppingOption;
	std::cout << "We have these layers and these topping, please choose the one you like: \n";
	std::cout << "Please press 0 to finish your cake!!! \n";
	std::cout << "------------------------------------Layer------------------------------------ max(5)\n";
	std::cout << "\t [1]:  Banana Layer \n";
	std::cout << "\t [2]:  Caramel Layer \n";
	std::cout << "\t [3]:  Carot & Walnut Layer \n";
	std::cout << "\t [4]:  Cheese Layer \n";
	std::cout << "\t [5]:  Cherry Layer \n";
	std::cout << "\t [6]:  Chocolate Layer \n";
	std::cout << "\t [7]:  Cononut Layer \n";
	std::cout << "\t [8]:  Corn Layer \n";
	std::cout << "\t [9]:  Lemon Layer \n";
	std::cout << "\t [10]: Milk Layer \n";
	std::cout << "\t [11]: Milk tea Layer \n";
	std::cout << "\t [12]: Vanilla Layer \n";

	std::cout << "------------------------------------Topping------------------------------------ \n";
	std::cout << "\t [1]:  Add Apple \n";
	std::cout << "\t [2]:  Add Banana \n";
	std::cout << "\t [3]:  Add Caramel \n";
	std::cout << "\t [4]:  Add Cheese \n";
	std::cout << "\t [5]:  Add Cherry \n";
	std::cout << "\t [6]:  Add Corn \n";
	std::cout << "\t [7]:  Add Orange \n";
	std::cout << "\t [8]:  Add Yogurt \n";

	std::cout << "------------------------------------Be happy with your cake!------------------------------------ \n";
	int layerCount = 0;
	do {
		++layerCount;
		std::cout << "\t Layer " << layerCount << ": ";
		std::cin >> layerOption;
		if (layerOption == 0) break;
		switch (layerOption)
		{
		case 1:
			CakeLayer * layer1 = new CakeBanana;
			fullCake.cake.push_back(layer1);
			std::cout << layer1->price() << "\n";
			break;
		/*case 2:
			CakeLayer * layer2 = new CakeCaramel;
			std::cout << layer2->price() << "\n";
			break;
		case 3:
			CakeLayer * layer3 = new CakeCarrotAndWalnut;
			std::cout << layer3->price() << "\n";
			break;
		case 4:
			CakeLayer * layer4 = new CakeCheese; std::cout << layer4->price() << "\n";
			break;
		case 5:
			CakeLayer * layer5 = new CakeCherry; std::cout << layer5->price() << "\n";
			break;
		case 6:
			CakeLayer * layer6 = new CakeChocolate; std::cout << layer6->price() << "\n";
			break;
		case 7:
			CakeLayer * layer7 = new CakeCoconut; std::cout << layer7->price() << "\n";
			break;
		case 8:
			CakeLayer * layer8 = new CakeCorn; std::cout << layer8->price() << "\n";
			break;
		case 9:
			CakeLayer * layer9 = new CakeLemon; std::cout << layer9->price() << "\n";
			break;
		case 10:
			CakeLayer * layer10 = new CakeMilk; std::cout << layer10->price() << "\n";
			break;
		case 11:
			CakeLayer * layer11 = new CakeMilkTea; std::cout << layer11->price() << "\n";
			break;
		case 12:
			CakeLayer * layer12 = new CakeVanilla; std::cout << layer12->price() << "\n";
			break;*/
		} 
	} while (layerOption != 0 && layerCount <= 5);
	/*CakeLayer* layer1 = new CakeCheese;
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
	}*/
	return 0;
}