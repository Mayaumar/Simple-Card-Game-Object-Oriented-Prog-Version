#include "banker.h"
#include <iostream>
#include <time.h>

banker::banker() {
	bankerWins = 0;
	bankerCount = 0;
}

int banker::randomBanker(int random) {
    std::clock_t t = clock();
    random = t % 13;
	if (random == 0) {
		random = random + 1;
	}
    return random;
}
int banker::getbankerWins() {
	return bankerWins;
}
void banker::setbankerWins() {
	bankerWins++;
}
int banker::getbankerCount() {
	return bankerCount;
}
void banker::setbankerCount(int count) {
	bankerCount = count;
}