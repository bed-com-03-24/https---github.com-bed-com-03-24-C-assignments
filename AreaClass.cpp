#include"AreaClass.h"

 double AREA:: AreaSquare(square first)
{
    first.SetValue(20.0);
    double area = first.GetValue()*first.GetValue();
    return area;
}

double AREA::AreaTriangle(triangle second)
{
    second.SetValue(12 ,24);
    double area = second.GetValueB() *second.GetValueH();
    return area;

}
double AREA:: AreaCircle(circle third) 
{
    third.SetValue(7);
    double area =  13.14 * third.Get()*third.Get();
}