/*
1.with argument ,with return type

Write a program to print the sum of two numbers entered by user by defining your own function.
*/

#include<iostream>
using namespace std;

int fun(int x,int y)
{
    return x+y;
}

int main()
{
    int a,b;
    cout<<"Enter two no :";
    cin>>a>>b;
    cout<<fun(a,b);
}



/////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

int fun(int x,int y)
{
    return x+y;
}

int main()
{
    cout<<"Addition is : ";
    cout<<fun(3,4);
}

