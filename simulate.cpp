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

using namespace std;

void palletTownShop(Shop &palletShop, Player &player) {
	palletShop.name = "Pallet Town Shop";
	palletShop.approachShopkeeper(palletShop); // approach shopkeeper

	cout << "------------------------------------------\n";
	cout << "------------ PALLET TOWN SHOP ------------\n";
	cout << "------------------------------------------\n";

	// define Pallet Town Shop inventory
	// Name | Attack Power | Price
	Item rustySword = { "Rusty Sword", 4, 6 };
	Item rustyDagger = { "Rusty Dagger", 2, 3 };
	Item apprenticeWand = { "Apprentice Wand", 7, 11 };
	Item wornShortBow = { "Worn Short Bow", 6, 9 };

	// add items to Pallet Town Shop inventory
	palletShop.shopSupplies.push_back(rustySword);
	palletShop.shopSupplies.push_back(rustyDagger);
	palletShop.shopSupplies.push_back(apprenticeWand);
	palletShop.shopSupplies.push_back(wornShortBow);

	// print the items of Pallet Town Shop
	palletShop.printItems(palletShop.shopSupplies);
	cout << "\n";

	// print player gold
	player.playerGold = 20; // The player initially starts with 20 gold
	player.printGold(player);

	// print player rucksack
	player.printRucksack(player.rucksack);

	// print shop choices
	palletShop.shopChoices(player, palletShop);
}

void simulate() {
	Shop palletShop;
	Player player;

	palletTownShop(palletShop, player); // TODO : don't always do this. If player chooses then simulate shop

}