/*
****************************Pointers and Objects*****************************************

1.here I create the pointer of class with Objects
2.then assign the address of object to the pointer           p = &ob;
3.call the function by using this pointer                    p->show_num();  
*****************************************************************************************
*/
#include <iostream>
using namespace std;

class Base
{
    public:
    void fun(int x)
    {
        cout<<"Value of X is : "<<x;
    }
    
    void fun(float x)
    {
        cout<<"\nValue of x is : "<<x;
    }
};
int main()
{
    Base b,*ptr;
    
    ptr = &b;
    ptr -> fun(4);
    ptr -> fun(3.5f);
    return 0;
}
