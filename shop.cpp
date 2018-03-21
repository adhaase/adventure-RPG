#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>

#include "shop.h"
#include "item.h"
#include "player.h"

using namespace std;

// approaching shopkeeper and verbalizing shop name
void Shop::approachShopkeeper(Shop shop) {
	cout << "Talk to the shopkeeper? (y/n) ";
	char choice;
	cin >> choice;
	cout << "\n";
	switch (choice) {
	case 'y':
		cout << "Welcome to the " << shop.name << "! See anything you like?\n\n";
		break;
	case 'n':
		cout << "Let's get back to the adventure!\n\n";
		break;
	default:
		cout << "ERROR: option not recognized.\n\n";
		cout << "\n";
	}
}

void Shop::printItems(vector<Item> shopSupplies) {
	// print the contents of the shopSupplies vector
	int itemNumber = 1;
	for (auto &it : shopSupplies) {
		cout << " (" << itemNumber << ")  " << it.name << " | " 
			 << "Attack Power: " << it.attackPower
			 << " | " << it.price << "G\n";
		++itemNumber;
	}
}

void Shop::buyItem(Player player, Shop shop, Item item) { //todo
	int shopItemNum;
	cout << "Select which item you would like to buy: ";
	cin >> shopItemNum;

	// shopSupplies vector of Items
	for (int i = 1; i <= shop.shopSupplies.size(); ++i) {
		if (shopItemNum == i) {
			player.rucksack.push_back(shopSupplies[i - 1]);
			//shop.shopSupplies[i - 1].erase();
		}
	}

	cout << "\n\n";

	// rucksack vector of Items
	// add functions update rucksack and update store
	int newItemNumbering = 1;
	cout << "\n\n";
	cout << "New store supplies after transaction: \n\n";
	for (int i = 0; i < shop.shopSupplies.size(); ++i) {
		if (shop.shopSupplies[i].empty()) {
			cout << newItemNumbering << ". * SOLD! *\n";
			++newItemNumbering;
		}
		else {
			cout << newItemNumbering << ". " << shop.shopSupplies[i] << "\n";
			++newItemNumbering;
		}
	}
}

void Shop::sellItem(Player player, Shop shop) { //todo

	if (player.rucksack.empty()) {
		cout << "You have nothing to sell!\n\n";
		shopChoices(player, shop);
	}
	else {
		int itemNum;
		cout << "Select which item from your rucksack you would like to sell: ";
		cin >> itemNum;

		// shopSupplies vector of Items

		// rucksack vector of Items
	}
}

void Shop::shopChoices(Player player, Shop shop) {
	// player chooses: buy, sell, leave
	// leave is required to proceed
	cout << "How can I help you today? \n\n";
	cout << "(b)uy\n";
	cout << "(s)ell\n";
	cout << "(l)eave\n";
	cout << "\n";

	char shopChoice;
	cout << "Enter choice: ";
	cin >> shopChoice;
	switch (shopChoice) {
		case 'b':
			buyItem(player, shop);
			break;
		case 's':
			sellItem(player, shop);
			break;
		case 'l':
			cout << "You have left the shop. Let's get back to the (extremely linear) adventure!\n\n";
			break; // leave the shop
		default:
			cout << "ERROR: Please select a valid option.\n\n";
			shopChoices(player, shop); // re-print shop choices
	}
}