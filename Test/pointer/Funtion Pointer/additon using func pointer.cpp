#include<iostream>
using namespace std;

void fun()
{
    int a=4,b=8;
    cout<<"sum :"<<a+b;
}
int main()
{
    void (*ptr)();
    ptr = &fun;
    ptr();
}
