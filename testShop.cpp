#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>

#include "item.h"
#include "player.h"
#include "shop.h"
#include "simulate.h"

using namespace std;

int main() {

	cout << "Testing Shop functionality\n\n";

	vector<Item> shopSupplies;
	Item woodenSword = { "Wooden Sword", 7, 2 };
	Item basicStaff = { "Basic Staff", 12, 8 };
	Item bastardSword = { "Bastard Sword", 84, 946 };

	shopSupplies.push_back(woodenSword);
	shopSupplies.push_back(basicStaff);
	shopSupplies.push_back(bastardSword);

	Shop starterShop;
	starterShop.printItems(shopSupplies);


	cout << "\n\n";
	system("pause");
	return 0;
}