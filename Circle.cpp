#include "circleC.h"

using namespace shapes;
void circle :: SetValue(double Newradius)
{
    radius = Newradius;
}
 double circle:: Get()
 {
    return radius;

 }
  circle::circle(double Newradius)
  {
    radius = Newradius;

  }
circle::circle()
{
    radius = 0.00f;
}

