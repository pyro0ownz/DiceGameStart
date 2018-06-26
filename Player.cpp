#include "Player.h"
#include "person.h"

//player class with person initialization
Player::Player()
{
}
Player::Player(string n):Person(n)
{
	health = 20;
	wins = 0;
	losses = 0;
}
int Player::getHealth()
{
	return health;
}
int Player::getWins()
{
	return wins;
}
int Player::getLosses()
{
	return losses;
}
int Player::Damage(int i)
{
	health -= i;
}
void Player::setLosses()
{
	losses+=1;
}
void Player::setWins()
{
	wins+=1;
}
