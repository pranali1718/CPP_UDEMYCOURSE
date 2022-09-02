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
    for displaying the function of class B have to  use vritual keyword
        and user arrow operator to function call.
 **********************************************************************************************/
#include <iostream>
using namespace std;

class A                                                         //declare and define class A
{
    public:
 virtual void display()                                         //use virtual keyword
    {
        cout<<"Class A ";
    }
};

class B : public A                                          //declare and define class A ,inheritng Class A
{
    void display()
    {
        cout<<"Class B ";
    }
};

int main()
{
    A *a;                                                   //pointer object of Class A
    B b;                                                    //object class b
    
    a = &b;                                                 //store  add of obj_b TO OBJ_a
    a->display();                                           //calling function
    

    return 0;
}
