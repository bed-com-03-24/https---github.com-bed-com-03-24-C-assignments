#pragma once
#include <iostream>

using namespace std;

class Person
{
public:

Person();
Person(string name,float newWeight) ;
~Person();

//Overload the add operator
Person operator + (const Person& otherPerson);

//Overload output operator
friend ostream& operator << (ostream& os, const Person& person);

private:

float mWeight;
string mFirstName;
int mAge ;

};