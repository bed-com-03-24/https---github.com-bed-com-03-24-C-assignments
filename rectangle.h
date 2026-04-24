#pragma once 

class Rectangle
{
            float length;
            float width ;
            Rectangle();
            ~Rectangle();

    public :
            void SetValue(float newLength , float newWidth) ;
           float GetValue();
        float Area(float newLength , float newWidth);
};
