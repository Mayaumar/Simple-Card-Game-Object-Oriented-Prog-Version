#include "Player.h"
#include <iostream>
#include <time.h>

player::player() {
	playerPoints = 500;
	playerWins = 0;
	playerCount = 0;
}

int player::randomPlayer(int random) {
    std::time_t t = time(0);
	random = t % 13;
	if (random == 0) {
		random = random + 1;
	}
	return random;
}

int player::getplayerPoints() {
	return playerPoints;
}
void player::increasePlayerPoints(int points ) { //player's points are incremented by 10
	 points = 10;
	playerPoints = playerPoints + points;
}
void player::decreasePlayerPoints(int points) { //player's points are decremented by 10
	points = 10;
	playerPoints = playerPoints - points;
}
int player::getplayerWins() {
	return playerWins;
}
void player::setPlayerWins() {
	playerWins++; //player wins are incremented by 1
}
int player::getplayerCount() {
	return playerCount;
}
void player::setPlayerCount(int count) {
	playerCount = count;
}