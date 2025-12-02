#include "table.h"

Table::Table() : wager(0), currentScore(0) {}

void Table::rollDices() {
	for (int i = 0; i < 6; i++) {
		dices[i].roll();
	}
}

vector<int> Table::getDiceValues() {
	vector <int> dieResults;
	//may not need to reserve such a small number
	dieResults.reserve(6);
	for (int i = 0; i < 6; i++) {
		dieResults.push_back(dices[i].get_roll());
	}
	return dieResults;
}

void Table::placeWager(int w) {
	wager = w;
}

int Table::getWager() const {
	return wager;
}

void Table::addCurrScore(int s) {
	currentScore += s;
}

int Table::getCurrScore() const {
	return currentScore;
}

void Table::resetScore() {
	currentScore = 0;
}

