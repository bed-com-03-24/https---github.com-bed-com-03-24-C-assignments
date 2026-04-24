#include "rectangle.h"

void Rectangle ::SetValue(float newLength , float newWidth)
{
    length = newLength;
    width = newWidth;

}

float Rectangle:: GetValue()
{
    return length,width ;

}

float Rectangle ::Area(float newLength , float newWidth)
{
    float x = newLength * newWidth;
    return x ;
}