#include<iostream>
using namespace std;

int main()
{
    string letter[] = { "B123","C234","A345","C15","B177","G3003","C235","B179"};
    
    for(int i = 0;i < 8 ;i++)
{
    if (letter[i][0]== 'B')// checks on element index i and character at first position 

    cout<< letter[i]<<endl; // print out the whole element at index i
}
    return 0;

}