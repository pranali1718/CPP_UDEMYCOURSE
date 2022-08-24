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
---------------------------------------------------------------------------------------------------------------------------------------
    #include<iostream>
using namespace std;

void add(int a,int b)
{
    cout<<"add is :"<<a+b;
}


int main()
{
    void(*funcptr)(int ,int );
    funcptr=add;                                //function pointing toward the func pointer 
    funcptr(5,5);                               //passing arguemnts to function by function pointer
    return 0;
}
