#include<iostream>
#include "Rectangle.h"

using namespace std;


int main ()
{
    Rectangle small ;

   
    cout<< "enter the values of length and width of the rectangle respectively"<<endl;

    float l ;

   

    cin >> l;

     float m ;

    cin >>m ;

     Rectangle big = Rectangle(l , m ); // initialising using overloaded consstructor

small.SetValue( l , m); 

    cout << "the area of the small rectangle :  "<<small.Area() <<endl;
    cout<< "the area of the big rectangle :  "<< big.Area() <<endl;
    
    return 0;
}