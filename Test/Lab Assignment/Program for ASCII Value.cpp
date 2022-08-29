/******************************************************************************
Write a program to accept a character and display its ASCII value.
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter Chracter You want : ";
    cin>>ch;
    cout<<"charater Entered By YOU : "<<ch<<endl;
    cout<<"ASCII VALUE IS : "<<(int)ch;
    return 0;
}
