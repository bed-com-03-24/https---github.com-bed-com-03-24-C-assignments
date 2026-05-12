#include"squareC.h"
using namespace shapes;

void square:: SetValue(double Newlength)
{
    length = Newlength;

}

double square:: GetValue()
{
    return length;

}

 square::square()
 {
    length = 0.0;

 }
 square::square(double Newlength)
 {
    length = Newlength;

 }
 
