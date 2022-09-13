#include <iostream>
using namespace std;

void fun(int b)
{
    b=60;
    cout<<"Value is :"<<b;
}
int main()
{
    int a=30;
    fun(a);
    cout<<"\nvalue of a is :"<<a;

    return 0;
}
