#include<iostream>
using namespace std;

int main ()
{
    int x = 3;
    int y = x++;// 3 is increamented after assigned to y
    cout<<"x : "<<endl;// now the x is 4 and y is 3
    cout<<"y: "<<endl;
    return 0;
}