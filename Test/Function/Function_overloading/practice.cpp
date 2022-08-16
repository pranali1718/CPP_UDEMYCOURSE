#include <iostream>
using namespace std;

void fun(int x,int y)
{
    cout<<"fun with int x int y "<<x<<" "<<y<<endl;
}

void fun(int x)
{
    cout<<"function with int x "<<x<<endl;
}

void fun(double z)
{
    cout<<"I am funtion "<<z<<endl;
}

void fun(int x,float y)
{
    cout<<"I am function with int x float y "<<x<<" " <<y<<endl;
}
void fun(float x,float y)
{
    cout<<"function with float x float y "<<x<<" " <<y<<endl;
}

void fun(float x,float y,int z)
{
    cout<<"function with float x float y  "<<x<<" " <<y<<" "<<z <<endl;
}
int main()
{
    fun(3,4);
    fun(2);
    fun(4.5);
    fun(3,6.7f);
    fun(3.3f,4.5f);
    fun(3.3f,4.9f,8);
    return 0;
}
