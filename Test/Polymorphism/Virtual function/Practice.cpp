/*********************************************************************************************
                                virtual Function (Late Binding)
    
    1.late Binding
    2.run time polymorphism
    3.compiler determines the object at run time and afterwords binds the fucntion call
    4.runtime binding is dynamic binding
    5.assit with the virtual keyword
    6.if i run the code without using virtual keyword
        code runs ,but even if i store the the address of obj_b to to the pointer *a(obj)
        
        still it displays the function of class A ,not the class B
 **********************************************************************************************/
#include <iostream>
using namespace std;

class A
{
    public:
 virtual void display()
    {
        cout<<"Class A ";
    }
};

class B : public A
{
    void display()
    {
        cout<<"Class B ";
    }
};

int main()
{
    A *a,p;
    B b;
    
    a = &b;
    a->display();
    

    return 0;
}
