#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

//inheritance for the person player class 
class Player : public Person
{
	private:
		int health;
		int wins;
		int losses;
	    
	public:
		Player();
		Player(string name);
		int getHealth();
		int getWins();
		int getLosses();
		int Damage(int i);
		void setWins();
		void setLosses();
		
};

#endif
