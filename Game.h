#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Dice.h"
#include <ctime>
#include <stdlib.h>

class Game
{
	private:
		//composition 
	Player p1;
	Player p2;
	Dice die;
	   public:
	   	Game(string n1,string n2);
	   	void startGame();
	   	void switchFunction(int i,int x);
	   	void stats();
};

#endif
