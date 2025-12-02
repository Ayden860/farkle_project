#pragma once
#include "die.h"
#include <vector>

using std::vector;

class Table{
	private:
		//six dice
		Die dices[6];
		int wager;
		int currentScore;
	public:
		Table();
		void rollDices();
		vector<int> getDiceValues();
		//the wager up for winning,
		void placeWager(int w);
		int getWager() const;
		//and the score for the current turn
		void addCurrScore(int s);
		int getCurrScore() const;
		//Replay-ablity
		void resetScore();
};


