#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <random>
#include <ctime>
#include <chrono>
#include <thread>

#include "player.h"

using namespace std;

void Player::printGold(Player &player) {
	cout << "*** YOUR GOLD ***\n";
	cout << player.playerGold << " G\n\n";
}

void Player::printRucksack(std::vector<Item> rucksack) {
	cout << "*** YOUR RUCKSACK ***\n";

	int itemNumber = 1;
	for (auto &it : rucksack) {
		cout << " (" << itemNumber << ")  " << it.name << " | "
			<< "Attack Power: " << it.attackPower
			<< " | " << it.price << "G\n";
		++itemNumber;
	}

	// checks if rucksack is empty
	if (rucksack.empty()) {
		cout << "EMPTY!\n\n";
	}
}