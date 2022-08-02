
/*
Function Overloading:
1.that means same name of function but having No. of arguments.
2.it needs same name of fucntions but that same function cant take the same no of arguments which are already
taken by the another function.
3.
void fun(int x,float y)
{
    cout<<x<<" "<<y<<endl;
}
void fun(int x,float y)
{
    cout<<x<<" "<<y<<endl;
}
this type of functions are not going to be overloaded which have same funtion name(void_fun) and 
and have same no of same data_type Parameters[(int x,float y)]
*/
#include<iostream>
using namespace std;

void fun(int x,float y,double z)
{
    cout<<x<<" "<<y<<" "<<z<<endl;
}
void fun(int x,float y)
{
    cout<<x<<" "<<y<<endl;
}

void fun(float x,int y)
{
    cout<<x<<" "<<y<<endl;
}

void fun(float x,float y)
{
    cout<<x<<" "<<y<<endl;
}
void fun(int x,int y)
{
    cout<<x<<" "<<y<<endl;
}
int main()
{
    fun(5,8);
    fun(5.8f,8.5f);
    fun(5.8f,5);
    fun(5.8f,8.5f);
    fun(5,8.5f,34);
    return 0;
}
