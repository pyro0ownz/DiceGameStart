#include "Game.h"
#include "Player.h"
#include "Dice.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>

using namespace std;
Game::Game(string n1, string n2):p1(n1),p2(n2) //<<initialization list
{

			try 
			{	        
							
				         	    //p1.setName("Donald Trump");
							    cout<<"Your name has been set to: "<<p1.Person::getName()<<endl;
							    //p2.setName("Hillary Clinton");
							    cout<<"The computers name has been set to: "<<p2.Person::getName()<<endl;
							    
							    cout<<"Your stats are: "<<endl;
							    cout<<"Health: "<<p1.getHealth()<<endl;
							    cout<<"Wins: "<<p1.getWins()<<endl;
							    cout<<"Losses: "<<p1.getLosses()<<endl;
							    cout<<"\n\n"<<endl;

		    }
		catch(int e)
		{
			cout<<"Error try again!: "<<e<<endl;
		}
		
}

void Game::startGame()
{
	
	     int p1Roll;
	     int p2Roll;
	     bool exit = true;
	     cout<<"Time to play the game! \n";
         while(1)
         {
		 
		 if(p1.getHealth() < 1)
		     {cout<<"Hillary won the electrion!"<<endl; p2.setWins(); p1.setLosses(); break; }
		  if (p2.getHealth() < 1)
		      {cout<<"Trump won the election!"<<endl; p1.setWins(); p2.setLosses(); break;}
		  
          
          p1Roll = die.Roll();
	      cout<<p1.getName()<<" rolled: "<<p1Roll<<endl;
	      p2Roll = die.Roll();
	      cout<<p2.getName()<<" rolled: "<<p2Roll<<endl;
	      switchFunction(p1Roll,p2Roll);
	      cout<<p1.getName()<<"'s Health is at: "<<p1.getHealth()<<endl;
	      cout<<p2.getName()<<"'s Health is at: "<<p2.getHealth()<<endl;
	      
	      Sleep(1000);
	      
	     }
	     stats();
	
}
void Game::switchFunction(int i,int x)
{
	if(i == x)
	 cout<<"Draw!"<<endl;
	if(i > x)
	{
    	switch(i)
		{
	      case 1:
	      	cout<<p1.getName()<<" is Building the wall"<<endl;
	      	p2.Damage(1);
	      	break;
	      		      case 2:
	      	cout<<p1.getName()<<" is Deporting illegals"<<endl;
	      	p2.Damage(2);
	      	break;
	      		      case 3:
	      	cout<<p1.getName()<<" is Banning travel"<<endl;
	      	p2.Damage(3);
	      	break;
	      		      case 4:
	      	cout<<p1.getName()<<" is being investigated"<<endl;
	      	p2.Damage(4);
	      	break;
	      		      case 5:
	      	cout<<p1.getName()<<" is Hiring russians to hack the election"<<endl;
	      	p2.Damage(5);
	      	break;
	      		      case 6:
	      	cout<<p1.getName()<<" is winning the election"<<endl;
	      	p2.Damage(6);
	      	break;
	      	
		}
	}
    
     if(x > i)
     {
		switch(x)
		{
	
	      case 1:
	      	cout<<p2.getName()<<" is Deleting her emails"<<endl;
	      	p1.Damage(1);
	      	break;
	      		      case 2:
	      	cout<<p2.getName()<<" is corrupting the fbi"<<endl;
	      	p1.Damage(2);
	      	break;
	      		      case 3:
	      	cout<<p2.getName()<<" is taking bribes"<<endl;
	      	p1.Damage(3);
	      	break;
	      		      case 4:
	      	cout<<p2.getName()<<" is being cheated on by Bill"<<endl;
	      	p1.Damage(0);
	      	break;
	      		      case 5:
	      	cout<<p2.getName()<<" is laundering money at the clinton foundation"<<endl;
	      	p1.Damage(5);
	      	break;
	      		      case 6:
	      	cout<<p2.getName()<<" is loosing the election"<<endl;
	      	p1.Damage(6);
	      	break;

		}
	}
}
void Game::stats()
{
	cout<<"Stats for: "<<p1.getName()<<endl;
	cout<<"Wins: "<<p1.getWins()<<endl;
	cout<<"Losses: "<<p1.getLosses()<<endl;
	
	cout<<"Stats for: "<<p2.getName()<<endl;
	cout<<"Wins: "<<p2.getWins()<<endl;
	cout<<"Losses: "<<p2.getLosses()<<endl;
	
	
}






