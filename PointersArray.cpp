#include<iostream>
using namespace std;

int main()
{
    int numberArray[5];
    int*pPointer = NULL;

    pPointer = numberArray;// pointer is assigned to the first address array
    *pPointer = 10;//assign first element a 1
    
    pPointer++;// the pointer to the second element
    *pPointer = 20 ;// indirection second element to 20

    pPointer = &numberArray[2]; //pointer is assigned to the address of the third element 
    *pPointer =30;

    pPointer = numberArray + 3;//a pointer to the 4th element
    *pPointer = 40;

pPointer = numberArray ;// assign pointer to the fist element
    *(pPointer+4) = 50;

    for (int n = 0; n<5; n++)
    {
        cout<< numberArray[n]<< " , ";
    }
    return 0;
}
