#include <iostream>
using namespace std;

class base
{
    public:
    
    virtual void fun()
    {
        cout<<"I am function\n";
    }
    virtual void fun1()
    {
        cout<<"I am function wuth integer argument \n";
    }
    
};

class derived:public base
{
    public:
    
    void fun()
    {
        cout<<"I am  d function\n";
    }
    void fun1()
    {
        cout<<"I am  d function wuth integer argument \n";
    }
    
};
int main()
{
    base *b;
    derived d;
    
    b=&d;
    
    b->fun();
    b->fun1();
    
    return 0;
}
