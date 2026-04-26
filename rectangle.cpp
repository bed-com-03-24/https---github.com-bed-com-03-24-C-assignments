#include "Rectangle.h"

void Rectangle ::SetValue(float newLength , float newWidth)
{
    length = newLength;
    width = newWidth;

}

float Rectangle:: GetValue()
{
    return length,width ;

}

float Rectangle ::Area()
{
    float x = length * width;
    return x ;
}
Rectangle:: Rectangle(){
        length=0.0f;
        width=0.0f;
     }

Rectangle:: Rectangle(float NewLength , float NewWidth)// additions on q2
{
   length= NewLength;
   width = NewWidth;

}
Rectangle::~Rectangle()
{
    
}