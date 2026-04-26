#pragma once
#include "squareC.h"
#include "triangleC.h"
#include "circleC.h"

using namespace shapes;

class AREA
{
    public :
            static double AreaSquare(square first);
            static double AreaTriangle(triangle second);
            static double AreaCircle(circle third) ;

};