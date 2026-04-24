#include<iostream>
using namespace std;

int main()
{
    int *Ppointer = new int;
    string *Plizard = new string;

    cin >> *Ppointer;
    cin>> *Plizard;

    cout<< "the dynamicaly allocated integer is : "<<*Ppointer<<endl;
    cout << "the dynamicaly allocated string is : "<<*Plizard<<endl;
    
    delete Ppointer;
    delete Plizard ;

    Ppointer = NULL ;
    Plizard = NULL ;
    return 0 ;

}

