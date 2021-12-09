#include "GUI.h"

void GUI() {
	Cake c;
	CakeLayer* layer;
	int layerOption = 1;
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

	int layerCount = 0;
	for(layerCount = 0; layerCount < 5 && layerOption != 0;layerCount++)
	{
		std::cout << "\t Layer " << layerCount << ": ";
		std::cin >> layerOption;
		if (layerOption == 0) break;
		switch (layerOption)
		{
		case 1:
			layer = new CakeBanana;
			break;
		case 2:
			layer = new CakeCaramel;
			break;
		case 3:
			layer = new CakeCarrotAndWalnut;
			break;
		case 4:
			layer = new CakeCheese;
			break;
		case 5:
			layer = new CakeCherry;
			break;
		case 6:
			layer = new CakeChocolate;
			break;
		case 7:
			layer = new CakeCoconut;
			break;
		case 8:
			layer = new CakeCorn;
			break;
		case 9:
			layer = new CakeLemon;
			break;
		case 10:
			layer = new CakeMilk;
			break;
		case 11:
			layer = new CakeMilkTea;
			break;
		case 12:
			layer = new CakeVanilla;
			break;
		}

		if (layerOption >= 1 && layerOption <= 12)
		{
			c.cake.push_back(layer);
			std::cout << "\t " << layer->desc() << " Price: " << layer->price() << std::endl;
		}
		else
		{
			std::cout << "\t You have entered wrong option\n";
			layerCount--;
		}
	}

	std::cout << "\t\t\tTime to add topping\n";
	std::cout << "\n------------------------------------Topping------------------------------------ \n";
	std::cout << "\t [1]:  Add Apple \n";
	std::cout << "\t [2]:  Add Banana \n";
	std::cout << "\t [3]:  Add Caramel \n";
	std::cout << "\t [4]:  Add Cheese \n";
	std::cout << "\t [5]:  Add Cherry \n";
	std::cout << "\t [6]:  Add Corn \n";
	std::cout << "\t [7]:  Add Orange \n";
	std::cout << "\t [8]:  Add Yogurt \n";
	std::cout << "\t [9]:  Remove previous layer decoration \n";


	std::string cont = "n";
	do {
		int iLayer = 0;
		do
		{
			if (iLayer >= c.cake.size())
			{
				std::cout << "Invalid cake layer\n";
			}
			std::cout << "Which layer do you wanna add toppings? ";
			std::cin >> iLayer;
		} while (iLayer >= c.cake.size());
		

		std::cout << "Layer " << iLayer << " has been selected!! " << c.cake[iLayer]->desc() << "\n";
		int amount = 0;
		std::cout << "Which topping: ";
		std::cin >> toppingOption;
		switch (toppingOption) {
		case 1:
			std::cout << "Number of Apple: ";
			std::cin >> amount;
			c.cake[iLayer] = new addApple(c.cake[iLayer], amount);
			break;
		case 2:
			std::cout << "Number of Banana: ";
			std::cin >> amount;
			c.cake[iLayer] = new addBanana(c.cake[iLayer], amount);
			break;
		case 3:
			std::cout << "Number of Caramel: ";
			std::cin >> amount;
			c.cake[iLayer] = new addCaramel(c.cake[iLayer], amount);
			break;
		case 4:
			std::cout << "Number of Cheese: ";
			std::cin >> amount;
			c.cake[iLayer] = new addCheese(c.cake[iLayer], amount);
			break;
		case 5:
			std::cout << "Number of Cherry: ";
			std::cin >> amount;
			c.cake[iLayer] = new addCherry(c.cake[iLayer], amount);
			break;
		case 6:
			std::cout << "Number of Corn: ";
			std::cin >> amount;
			c.cake[iLayer] = new addCorn(c.cake[iLayer], amount);
			break;
		case 7:
			std::cout << "Number of Orange: ";
			std::cin >> amount;
			c.cake[iLayer] = new addOrange(c.cake[iLayer], amount);
			break;
		case 8:
			std::cout << "Number of Yogurt: ";
			std::cin >> amount;
			c.cake[iLayer] = new addYogurt(c.cake[iLayer], amount);
			break;
		case 9:
			c.cake[iLayer] = c.cake[iLayer]->removeDec();
		default:
			break;
		}
		std::cout << c.cake[iLayer]->desc() << std::endl << std::endl;
		std::cout << "Do you want continue adding toppings for other layers? (y/n): ";
		std::cin >> cont;
	} while (cont == "y");

	int cPrice = 0;
	int cTime = 0;
	std::cout << "\n";

	for (int i = 0; i < c.cake.size(); i++)
	{
		std::cout << "Layer " << i + 1 << " ";
		std::cout << " " << c.cake[i]->desc();
		cPrice += c.cake[i]->price();
		cTime += c.cake[i]->timeTake();
		//std::cout << "\t" << c.cake[i]->price();
		//std::cout << "\t" << c.cake[i]->timeTake() << std::endl;
		std::cout << "\n";
	}
	std::cout << "\nYou must waiting in " << cTime << " s";
	std::cout << "\nTotal money: " << cPrice << " vnd\n";



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