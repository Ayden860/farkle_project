//Ayden Yang and Gurshan Singh
#include <iostream>
#include "die.h"
using namespace std;

int main() {
	srand(time(0));
	//name player 1
	cout << "Hello World!\n";
	//chose if player 2 will use a cheat die or regular (let user create the die) (for txt will need to do more work)
	//you chose if you will use a cheat die or regular
	//role die 6 times
	Die d({0.5, 0.1, 0.1, 0.1, 0.1, 0.1}, 6);
	Die d2;
	d.roll();
	d2.roll();
	cout << d.get_roll() << endl;
	cout << d2.get_roll() << endl;
}
