//Made by Ayden Yang
#include <iostream>
#include "die.h"
#include "player.h"
#include "table.h"

using namespace std;

int main() {
	srand(time(0));
	//name player 1(skip)
	Player P1("Player1");
	Player P2("Player2");
	char option;
	//Player1 choice
	cout << "Should Player1(you) use a cheat die? (y/n):\n";
	cin >> option;
	Table table;
	if (option == 'y' || option == 'Y') {
		vector<double> cheatWeights = {0.1, 0.1, 0.1, 0.2, 0.2, 0.3};
		table = Table(cheatWeights);
		cout << "Player1 is using a cheat die\n";
	} else {
		cout << "Player1 is using a normal dice\n";
	}
	table.rollDices();
	vector<int> results1 = table.getDiceValues();
	int points1 = table.calcScore();
	P1.addScore(points1);
	//cout << "Player1 dice results: ";
	//for(int i:results) cout << i << ", ";

	//Player2 choice (if I condense get rid of beginning \n)
	cout << "\nShould Player2 use a cheat die? (y/n):\n";
	cin >> option;

	if (option == 'y' || option == 'Y') {
		vector<double> cheatWeights = {0.1, 0.1, 0.1, 0.2, 0.2, 0.3};
		table = Table(cheatWeights);
		cout << "Player2 is using a cheat die\n";
	} else {
		cout << "Player2 is using a normal dice\n";
	}
	//role die 6 times
	cout << "\nDices are rolling\n";
	table.rollDices();
	vector<int> results2 = table.getDiceValues();
	cout << "Player1 dice results: \n";
	for (int i : results1) cout << i << "\n";
	cout << "Player2 dice results:\n";
	for (int i : results2) cout << i << "\n";

	//scores
	int points2 = table.calcScore();
	P2.addScore(points2);

	if (P1.getScore() < P2.getScore()) cout << "You lose\n";
	else if (P1.getScore() > P2.getScore()) cout << "You win\n";
	else {
		cout << "It's a tie\n";
	}
	/*Die d({0.5, 0.1, 0.1, 0.1, 0.1, 0.1}, 6);
	Die d2;
	d.roll();
	d2.roll();
	cout << d.get_roll() << endl;
	cout << d2.get_roll() << endl;*/
}
