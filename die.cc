#include "die.h"
#include <cassert>
using namespace std;

Die::Die() : SIDES(6), last_roll(0) {
	for (unsigned int i = 0; i < SIDES; i++)
		weight.push_back(1.0 / SIDES);
}

Die::Die(vector<double> new_weights, /*const*/ int new_sides) : SIDES(new_sides), last_roll(0) {
	assert(new_sides >= 4);
	assert(new_weights.size() == SIDES);
	double sum = 0;
	for (unsigned int i = 0; i < SIDES; i++) {
		assert(new_weights[i] >= 0 && new_weights[i] <= 1);
		sum += new_weights[i];
		weight.push_back(new_weights[i]);
	}
	assert(sum > .99 && sum < 1.01);
}

int Die::get_roll() {
	assert(last_roll >= 1 && last_roll <= SIDES);
	return last_roll;
}

void Die::roll() {
	//TODO: Implement weight system
	//range of 0-1
	double ran_num = (double)rand() / RAND_MAX;
	double total = 0.0;
	//new weight plus all new weights divide by total weights must be 1, but to find the "weight" of one side its that weight divide by total weight
	//get weight vector per side
	for (size_t i = 0; i < weight.size(); i++) {
		total += weight[i];
		if (ran_num < total) {
			last_roll = i + 1;//range(1, SIDES)
			return;
		}
	}
	//range(1, SIDES)
	//last_roll = rand() % SIDES + 1;
}
