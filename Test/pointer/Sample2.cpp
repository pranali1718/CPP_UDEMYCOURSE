/*Write a program to print the value of the address of the pointer to a variable whose value is input from user.*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    
    cout<<"Enter Number :";
    cin>>a;
    
    p=&a;
    
    cout<<"Address of "<< a<<" is : "<<p;
    return 0;
}
