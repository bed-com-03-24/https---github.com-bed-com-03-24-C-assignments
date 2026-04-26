#pragma once

namespace shapes
{
    class square
    {
        private:
                double length  ;

        public:
                void SetValue(double Newlength);

                double GetValue();

                square();

                square(double Newlength);
                
                ~square();
    };
};
