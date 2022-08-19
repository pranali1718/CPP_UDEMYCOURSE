/*Write a program to print the address of a variable whose value is input from user.*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    
    cout<<"Enter Number :";
    cin>>a;
    
    p=&a;
    
    cout<<"address of Number is :"<<p;
    return 0;
}
