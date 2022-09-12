#include<iostream>
using namespace std;

class Base
{
    public:
    
    void fun1()
    {
        cout<<"I am functiion 1 \n";
    }
    void fun2()
    {
        cout<<"I am functiion 2 \n";
    }
};

class Derivd : public Base
{
    public:
    void fun3()
    {
        cout<<"I am functiion 3 \n";
    }
    void fun4()
    {
        cout<<"I am functiion 4 \n";
    }
};


int main()
{
    Base *b;
    //b=new Derivd();
    
    Derivd d;
    b=&d;
    
    b->fun1();
    b->fun2();
    return 0;
}
