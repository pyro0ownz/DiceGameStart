/*Joshua Ragland cis 230 */
#include <iostream>
#include "Game.h"
#include "Player.h"
#include <windows.h>
#include <iostream>
#include <ctime>
#include <time.h>
#include <stdlib.h>
using namespace std;

//This game is in automation mode for demo purposes 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// function prototype 
void welcome();

//main
int main(int argc, char** argv) 
{
	//seed the rand function
    srand(time(NULL));
    //welcome message
    welcome();
    //game object being created 
   Game game("Donald Trump","Hillary Clinton");
   //game starting 
   game.startGame();

	return 0;
}
//function for main
void welcome()
{
	//welcome message as a char
char hi[80] = {'W','e','l','c','o','m','e', ' ', 't','o', ' ', 't','h','e',' ','D','o','n','\'','s',' ','W','o','r','l','d',' ','D','o','m','i','n','a','t','i','o','n',' ','G','a','m','e','\n'};
	
	//forloop to print one letter at a time
     for(int i = 0; i < 43;i++)
     {
     	//cout the letter one at a time and sleep for 1 second
     	cout<<hi[i];
     	Sleep(100);
	 }
}
