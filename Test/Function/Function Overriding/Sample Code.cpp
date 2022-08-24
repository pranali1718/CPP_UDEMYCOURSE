#include<iostream>
using namespace std;

class Base
{
    public:
    void fun()
    {
        cout<<"I am Base \n";
    }
};

class Derived : public Base
{
    public:
    void fun()
    {
        cout<<"I am Derived\n";
    }
};

int main()
{
    Derived d;
    d.fun();
    d.Base::fun();
    return 0;
}
