#pragma once 

class Rectangle
{
        private:
            float length;
            float width ;
           
    public :
         Rectangle();//{ length=0.0f; width=0.0f; }

        Rectangle(float NewLength , float NewWidth); // additions on q2

        ~Rectangle();

        void SetValue(float newLength , float newWidth) ;

        float GetValue();

        float Area();
};
