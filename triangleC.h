#pragma once

namespace shapes
{
    class triangle
    {
        private:
                double base ;
                double height;
        
        public:
                void SetValue(double Newbase , double Newheight);

                double GetValue();

                triangle();

                triangle(double Newbase , double Newheight);
                
                ~triangle();
    };
};