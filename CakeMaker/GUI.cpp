#include "GUI.h"
void GUI() {
	Cake c;
	CakeLayer* layer;
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
			layer = new CakeBanana;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 2:
			layer = new CakeCaramel;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 3:
			layer = new CakeCarrotAndWalnut;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 4:
			layer = new CakeCheese;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 5:
			layer = new CakeCherry;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 6:
			layer = new CakeChocolate;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 7:
			layer = new CakeCoconut;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 8:
			layer = new CakeCorn;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 9:
			layer = new CakeLemon;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 10:
			layer = new CakeMilk;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 11:
			layer = new CakeMilkTea;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		case 12:
			layer = new CakeVanilla;
			c.cake.push_back(layer);
			std::cout << layer->price();

			break;
		}
	} while (layerOption != 0 && layerCount <= 5);
	int total_money = 0;
	for (int i = 0; i < c.cake.size(); i++) {
		total_money += c.cake[i]->price();
	}
	std::cout << "\nTotal money: " << total_money;
	for (int i = 0; i < c.cake.size(); i++) {
		delete c.cake[i];
	}
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
}