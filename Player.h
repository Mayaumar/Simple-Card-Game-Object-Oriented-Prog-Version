#pragma once

class player {
private:
	int playerPoints = 500;
	int playerWins = 0;
	int playerCount = 0;
public:
	player();
	int randomPlayer(int);
	int getplayerPoints();
	void increasePlayerPoints(int);
	void decreasePlayerPoints(int);
	int getplayerWins();
	void setPlayerWins();
	int getplayerCount();
	void setPlayerCount(int);


};