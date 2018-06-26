#include "Dice.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>
using namespace std;

//dice coding for the class header file 
Dice::Dice()
{   
	num = rand()% 6 + 1;
     cout<<"The Dice Number is set at: "<<num<<endl;
}
Dice::Roll()
{
	num = rand() % 6 + 1;
	return num;
	//cout<<"you rolled: "<<num<<endl;
}
Dice::getNum()
{
       return num;
}

