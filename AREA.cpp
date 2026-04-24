#include<iostream>
using namespace std;

double Square(double l)
{
    return l * l ;
}

double Rectangle(double l , double w)
 {
    return l * w ;

 }

 double Triangle(double b , double h)
  {
    return (b * h )/2;

  }

int main ()
{
    double s ;
    double l = 4;
    while(l ==4) // for repeatetion of the process so that its always true
   { 
    cout<< "please select the area of the shape to calculate"<< endl;
    cout<< "1. Square"<<endl;
    cout<< "2. Rectangle"<<endl;
    cout<<"3. Triangle"<<endl;
    cout<<"4. Quit program"<<endl;

    cout<< "Enter selection : "<<endl;

    cin>> s ;

    while(!(s >= 1 && s <= 4))// this is for forcing user to enter a valid input
    {
        cout<<" You have entered an invalid input. Please enter in range between 1 and 4 !"<<endl;
        cin>> s ;

    }

    if(s ==1) // if user want to calculate the area of square
    {
     double length;
     cout << " enter the length of the square : " <<endl;
     cin >> length;
    double square = Square(length);
    cout<< "the area of the square with length of "<< length << "cm is "<< square <<endl;
    }
    else if(s == 2) // if user choose to calculate area of rectangle
    {
     double length;
     double width;
     cout<<"Enter the length and width of the rectangle "<< endl;
     cin >> length ;
     cin>> width;
     cout <<"the area of the rectangle with lenth of  "<< length<< " and width of " <<width<< " is " << Rectangle(length , width)<<endl;
    }

    else if (s == 3) // user chooses to calculate area of traingle
    { 
        double base ;
        double height;
         cout<< "please enter the value of the base and heigt for the traingle "<<endl;
         cin>> base;
         cin >> height;
        cout<<"the area of the triangle with the base of  "<< base<<" and  height of  "<<height<<  " is " << Triangle(base , height)<<endl;
        
    }


    else 
   { cout<< " You choose to quit the program ! "<< endl;

   }
   if (s == 4) // to exit the loop
   break ;
    
}

return 0;

}
