#include<iostream>
#include "rectangle.h"

int main ()
{
    Rectangle small ;
    float l ;
    float m ;

    small.SetValue( cin>> l ,cin>> m );

    cout << "the area of the small rectangle "<<small.Area(l , m )<<endl;
    

}