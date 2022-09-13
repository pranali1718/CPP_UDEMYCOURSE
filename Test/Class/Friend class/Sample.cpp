/******************************************************************************
                    Friend Class 
                    
1.here i used friend class 
2.acess thenprivate member of one class into the another class by using friend class

*******************************************************************************/

#include <iostream>
using namespace std;

class Derived;                                              //class declration 

class Base                                                  //class declration 
{
    int x=10;                                               //class defination
    friend Derived;                                         //friend class
    
};
    
class Derived                                               //class declration 
{
    public:
    Base b;
    void display()                                          //function 
    {
        cout<<"Value of x is : "<<b.x;
    }
};
int main()
{
    Derived d;
    d.display();

    return 0;
}
