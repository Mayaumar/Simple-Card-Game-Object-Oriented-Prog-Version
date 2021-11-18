#pragma once

class banker {
private:
	int bankerWins = 0;
	int bankerCount = 0;
public:
	banker();
	int randomBanker(int);
	
	int getbankerWins();
	void setbankerWins();
	int getbankerCount();
	void setbankerCount(int);
};
