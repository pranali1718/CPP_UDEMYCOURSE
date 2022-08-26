/*in this code i used pointer and object 

    create the object of class and pointer of that object 
    after words i store the address of the object to pointer 
    n then call the function by using pointer variable by using arrow operator(->)
    
*/    
#include <iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    void fun()
    {
        cout<<"I am function 1";
    }
};

int main()
{
    Base b,*ptr;
    ptr=&b;
    
    ptr-> fun();
    return 0;
}
