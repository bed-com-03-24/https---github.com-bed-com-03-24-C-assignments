#include<iostream>
#include "Rectangle.h"

using namespace std;


int main ()
{
    Rectangle small ;
    float l ;

    float m ;
    cin>> l>>m ;

    small.SetValue( l ,m); 

    cout << "the area of the small rectangle "<<small.Area()<<endl;
    

}