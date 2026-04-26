#pragma once

namespace shapes
{
    class circle
    {
        private:
                double radius;

        public:
                void SetValue(double Newradius);

                double Get();

                circle();

                circle(double Newradius);

                ~circle();

    };
};