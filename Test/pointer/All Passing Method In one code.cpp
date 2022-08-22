//all Passing methods in 1 code//

#include<iostream>
using namespace std;

void add(int x,int y)                                   //passing by value
{
    cout<<"Addition is : "<<x+y<<endl;
}

void mul(int &x,int &y)                                 //passing by reference
{
    cout<<"Multiplication is : "<<x*y<<endl;
}
        
void sub(int *x,int *y)                                 //passing by address
{
    cout<<"Substraction is : "<<*x - *y;
}
int main()
{
    int x,y;
    cout<<"Enter No : ";
    cin>>x>>y;
    
    add(x,y);                                           //passing value to function
    mul(x,y);                                           //passing value to function
    sub(&x,&y);                                         //passing address to function
}
