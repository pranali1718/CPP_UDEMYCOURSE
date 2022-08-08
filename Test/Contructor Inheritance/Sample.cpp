/*]

in constrctuor and inheritance 
1.while calling the constructor of base class and derived class  are going to be executed first
2.after the constructor ,Function will going to be called.
3.while calling the constructor is going to call 1st then after the functions are called 

*/
#include<iostream>
using namespace std;

class Base
{
    public:
    
    Base()
    {
        cout<<"I am Base Contructor\n";    
    }
    void fun()
    {
        cout<<"I am Base Function\n";
    }
    
};

class Derived : public Base
{
    public:
     
    Derived()
    {
        cout<<"I am Derived Contructor\n";
    }
    
    void fun1()
    {
        cout<<"I am derived funtciton\n";
    }
};

class Derived1 : public Derived
{
    public:
     
    Derived1()
    {
        cout<<"I am Derived Contructor11\n";
    }
    
    void fun2()
    {
        cout<<"I am derived funtciton11\n";
    }
};


int main()
{
    Derived1 d;
    d.fun();
    //d.fun1();
    //d.fun2();
    return 0;
}
