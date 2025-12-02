#include "player.h"

Player::Player(string p) : name(p), totalScore(0), money(0) {}

int Player::getScore() const {
	return totalScore;
}

void Player::addScore(int s) {
	totalScore += s;
}

int Player::getMoney() const {
	return money;
}

void Player::addMoney(int m) {
	money += m;
}

void Player::loseMoney(int m) {
	money -= m;
}

string Player::getName() const {
	return name;
}

