#include<iostream>
using namespace std;

int main()
{
    int*pPointer = NULL;
    int numbersArray[3] = {10,20,30};
    pPointer = numbersArray;// assigning pointer to the address of the firts element of the array

    cout<< "address at pPointer : "<<pPointer<<endl;// address of first element
    cout<<"address of numberArray[0] : "<< numbersArray<<endl;

    cout<<"value at pPointer : "<<*pPointer<<endl;

    cout<<"value at ++pPointer : "<<*++pPointer<<endl;//value at second element

    pPointer = numbersArray;

    cout<< "value at pPointer++ : "<<*(pPointer++)<<endl;//value at first element

    return 0;
    


}