#include "person.h"
#include <iostream>
using namespace std;

Person::Person() {
    mFirstName = "";
    mWeight = 0.0f;
    mAge = 0;
}

Person::Person(string name ,float newWeight){

    mFirstName = name;
    mWeight = newWeight;
    mAge = 0;
}

Person::~Person() {
}

ostream& operator << (ostream& os, const Person& person) {
    os << person.mFirstName << " (" << person.mWeight << "kg)";
    return os;
}

Person Person::operator + (const Person& otherperson ) {

Person one ;

one.mWeight = this->mWeight + otherperson.mWeight;

one.mAge = this->mAge + otherperson.mAge ;

one.mFirstName = this->mFirstName + " + " + otherperson.mFirstName ;

return one ;
} 
