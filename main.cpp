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

void header();
void printIntro(Player player);

int main(int argc, char *argv[]) {
	Player player;
	header(); // print header
	printIntro(player); // print options menu and get player options

	simulate();





	for (int i = 0; i < 10; ++i) {
		cout << endl;
	}
	system("pause");
	return 0;
}

void header() {
	cout << "-----------------------------------------------\n";
	cout << "------------------ ADVENTURE ------------------\n";
	cout << "-----------------------------------------------\n";
	cout << "\n" << "\n";
}

void printIntro(Player player) {
	cout << "Welcome Traveler, I hope you're ready for an adventure!\n\n";

	cout << "Let's first head to the Pallet Town shop to get you the proper gear.\n";
	cout << "Are you ready to head to the shop? (y/n) ";
	char choice; // y || n
	cin >> choice;
	cout << "\n";

	switch (choice) {
	case 'y':
		cout << "Traveling";
		for (int i = 0; i < 3; ++i) {
			this_thread::sleep_for(chrono::milliseconds(750)); // SUSPENSE!
			cout << ".";
		}
		cout << "\n\n";
		cout << "We're here!\n";
		cout << "Here's 20 GP to get started! Go to the shopkeeper and buy whatever you need!\n\n";
		//player.playerGold = 20; (?) why isn't this valid ?
		break;

	case 'n':
		cout << "Try again some other time!";
		break;
	default:
		cout << "ERROR: option not recognized.";
		cout << "\n";
	}
}