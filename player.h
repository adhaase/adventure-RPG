#pragma once

#include <vector>
#include "item.h"

struct Player {
	int playerHealth;
	int playerGold;
	std::vector<Item> rucksack;
	void printGold(Player &player);
	void printRucksack(std::vector<Item> rucksack); // prints the Items in your Rucksack
};

//std::vector<Item> rucksack;

// updateRucksack (?)