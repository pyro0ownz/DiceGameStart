#ifndef DICE_H
#define DICE_H

#include <ctime>
#include <stdlib.h>

//dice class 

class Dice
{
	private: 
	 int num;
	public:
		Dice();
		int Roll();
		int getNum();		 
};

#endif
