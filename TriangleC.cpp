#include "triangleC.h"

using namespace shapes;

void triangle::SetValue(double Newbase , double Newheight)
{
    base = Newbase;
    height = Newheight;

}
double triangle:: GetValueB()
{
    return base ;

}
double triangle:: GetValueH()
{
    return height;
}

triangle::triangle()
{
    base = 0.0;
    height = 0.0;

}
 triangle::triangle(double Newbase , double Newheight)
 {
    base= Newbase;
    height = Newheight;

 }