#include<cstdlib>
#include<iostream>
#include<ctime>


using namespace std;

int main()
{
    srand(time(0)); // using time to change the value of seed for different random numbers
    
    int daysUntilExpiration = rand()% 12 ;//  random numbers range from 0 to 11

cout << daysUntilExpiration<<endl;

    if (daysUntilExpiration<=10 && daysUntilExpiration > 5)
   {cout << "Your subscription will expire soo . Renew now !!"<< endl;  
                                                                    } 

    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
   { cout <<"Your subscription expires in "<< daysUntilExpiration <<"  days"<<endl;
    cout<<"Renew now and save 10% !"<< endl;}

    else if (daysUntilExpiration == 1)

   {cout<< "Your subscription expires within a day "<<endl;
    cout << "Renew now and save 20 % "<<endl;}

    else if (daysUntilExpiration == 0)
    cout << "Your subscription has expired ! "<< endl;

    else
    cout << "You have an active subscription "<<endl;

    return 0 ;
}