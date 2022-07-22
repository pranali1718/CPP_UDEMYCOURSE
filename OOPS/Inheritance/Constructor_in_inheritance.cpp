#include<iostream>
using namespace std;

class Base
{
    public:
   
    Base()
    {
        cout<<"Default Base class"<<endl;
    }
    Base(int l)
    {
        cout<<"Param Base class : "<<l<<endl;
    }
};

class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Default Derived class "<<endl;
    }
    Derived(int n)
    {
        cout<<"Param Derived Class : "<<n<<endl;
    }
};

int main()
{
    Base b,b1(10);
    Derived d,d1(100);
    return 0;
}
