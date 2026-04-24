#include<iostream>
using namespace std;

int main()
{
    int*pPointer = NULL;// declaring the pointer with null value 
    int integerVar = 5;
    pPointer = &integerVar;// assigning the pointer to the address of variable integerVar

    cout << "integerVar : " <<integerVar<<endl;// printing the value stored by a variable

    cout<< "Address of integerVar : "<<&integerVar<<endl;

    cout<<"pPointer : "<< pPointer<<endl;

    cout<<"Address of ppointer : "<<&pPointer<<endl;

    return 0;

}