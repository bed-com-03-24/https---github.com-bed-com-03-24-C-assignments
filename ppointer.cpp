#include<iostream>
using namespace std;

int main()
{
    
    int l= 7;
    
 int* pl = &l ;

    cout<< "the address of the l is : " << pl<<endl;

    cout<< "the value of the l is : "<< *pl<<endl;
     pl = pl + 1;
        cout<< "the address of the pl is : " << pl<<endl;
 
    return 0;

}