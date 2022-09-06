#include<iostream>
using namespace std;


class Base
{
    public:
    void fun(int a)
    {
        cout<<"I am Base class"<<a;
    }
};

class Derived : public Base
{
    public:
    void fun(int a)
    {
        cout<<"\nI am derived :"<<a;
    }
};
int main()
{
    Derived d;
    d.Base :: fun(3);
    d.fun(1);
    
    return 0;
}
