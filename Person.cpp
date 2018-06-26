#include "Person.h"
#include <iostream>

//person code file for h include
using namespace std;
Person::Person()
{
	
}
Person::Person(string n)
{
	name = n;
}

void Person::setName(string n)
{
	name = n;
}
string Person::getName()
{
	return name;
}
