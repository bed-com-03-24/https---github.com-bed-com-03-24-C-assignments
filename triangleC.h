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

                double GetValueH();
                  double GetValueB();

                triangle();

                triangle(double Newbase , double Newheight);
                
                ~triangle();
    };
};