#pragma once
#include <string>
using std::string;

class Player{
	private:
		string name;
		int totalScore;
		int money;
	public:
		Player(string p);
		
		int getScore() const;
		void addScore(int s);

		int getMoney() const;
		void addMoney(int m);
		void loseMoney(int m);
		
		string getName() const;
};

