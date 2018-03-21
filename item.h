#pragma once

#include <string>
#include <vector>

struct Item {
	std::string name;
	int attackPower;
	int price; // in "gold"
	int itemNum; // index the item is at in the container (shop/rucksack/etc)
	int count; // the number of items
};