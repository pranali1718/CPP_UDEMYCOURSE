/*Write a program to print the value of the address of the pointer to a variable whose value is input from user.*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p;                                                     //int pointer 
    
    cout<<"Enter Number :";
    cin>>a;
    
    p=&a;                                                       //store add of int
    
    cout<<"Address of "<< a<<" is : "<<p;                       //print address of int
    cout<<endl<<"value Enter By You Is : "<<*p;                 //dereferencing 
    return 0;
}
