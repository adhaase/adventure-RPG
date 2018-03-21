#pragma once

#include <string>
#include <vector>
#include "player.h"
#include "item.h"

struct Shop {
	std::string name;
	std::vector<Item> shopSupplies;

	void approachShopkeeper(Shop shop);

	void printItems(std::vector<Item> shopSupplies);

	void buyItem(Player player, Shop shop, Item item); // put item into Rucksack (- gold)
	void sellItem(Player player, Shop shop); // remove item from Rucksack (+ gold)
	void addItem(); // adds an item to your rucksack
	void shopChoices(Player player, Shop shop); // player chooses: buy, sell, leave
};
