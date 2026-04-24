#include<iostream>
using namespace std;

void swapNumbers(int& rOne, int & rTwo)
{
    int m = rOne;
    int l = rTwo;
    rOne = l;
    rTwo = m ;
    

}
int main()
{
    int varA = 25;
    int varB = 100;

    cout<< "varA before swap : "<< varA<< endl;
    cout<< "varB before swap : "<<varB<< endl;

    swapNumbers(varA, varB);

    cout<< "varA after swap : "<< varA<< endl;
    cout<< "varB aftre swap : "<<varB<< endl;
    return 0;
    
}