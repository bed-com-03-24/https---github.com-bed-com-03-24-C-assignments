#include<iostream>
#include "person.h"
using namespace std;

int main() {

Person Jane = Person("Jane", 60.0f);

Person John = Person("John", 75.0f);

Person lizard;

lizard  = Jane + John;

cout << "Total weight: " << lizard << endl;

return 0;
}