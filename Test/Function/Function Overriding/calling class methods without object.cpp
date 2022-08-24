#include<iostream>
using namespace std;

class Base
{
    public:
    static void fun()
    {
        cout<<"I am Base \n";
    }
};

class Derived : public Base
{
    public:
    static void fun()
    {
        cout<<"I am Derived\n";
    }
};

int main()
{
  //  Derived d;
    Derived ::fun();
    Base::fun();
    return 0;
}
