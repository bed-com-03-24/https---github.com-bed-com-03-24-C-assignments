#include<iostream>
using namespace std ;
// my program have a problem it becomes an infinite loop when a string is inputed!!!!!   
int main()
{
    int number ;
    cout<< "Enter an integer value between 5 and 10 "<<endl;
    //cin>> number ;
    while(!(cin >>number))
    {
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<" sorry , you entered an invalid number , please try again  "<<endl;
    }

    while( ! (number > 5 && number < 10))
    {
        if(number <= 5||number >= 10)
        cout<< "Yuo entered  "<< number << " please enter a number between 5 and 10 ."<< endl;
        else
        cout << " sorry , you entered an invalid number , please try again  "<<endl;

        cin >> number ;
    }

    cout<< "your input value ( "<<number<<") has been accepted ."<<endl;

    return 0 ;
}