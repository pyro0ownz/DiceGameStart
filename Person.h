#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

//person class with prototypes 
class Person
{
	 private:
	 	string name = " ";
	public:
		Person();
		Person(string);
	    void setName(string);
	    string getName();
		
		
};

#endif
