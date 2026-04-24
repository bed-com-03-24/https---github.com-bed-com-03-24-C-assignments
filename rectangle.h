#pragma once 

class Rectangle
{
        private:
            float length;
            float width ;
           
    public :
         Rectangle();//{ length=0.0f; width=0.0f; }

         ~Rectangle();

         void SetValue(float newLength , float newWidth) ;

         float GetValue();

        float Area();
};
