#include<iostream>
using namespace std;

int main()
{
    int column;
    int row ;

    cout<< "enter the dimention of rows less than or equal to 3"<<endl;
    cout<< "enter the dimention of column less than or equal to 3"<<endl
    ;
    cin>> row;
    cin>> column;

    while( (row > 3) || (column >3))
    {  cout<<"please enter # rows and #column less than or equal to 3 "<<endl;
        cin>> row;
        cin>> column;
    }

    double**pLizard = new double*[row];
    for(int n = 0; n< row; n++)
    {
        pLizard[n]=new double[column];
    }

    double l;

    cout<< "enter the bouble values of the array"<<endl;

     for(int n = 0; n< row; n++) // for assinigning 
     {
        for(int m = 0; m<column ; m++)
        {
             cin>> l;
            pLizard[n][m]= l;
            
        }
     }
cout <<"the created array is this one "<<endl;

     for(int n = 0; n< row; n++) // for output
     {
        for(int m = 0; m<column ; m++)
        {
           cout<< pLizard[n][m]<< "  ";
        }
        cout<<endl;
    }
delete[] pLizard;
pLizard = NULL ;

    


}