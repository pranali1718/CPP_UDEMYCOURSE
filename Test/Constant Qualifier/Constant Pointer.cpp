/******************************************************************************
 * Constant Qualifier-(pointer to integer constant)
 * use "const" keyword 
 * the value throught the program cant get changed
 * here data is constant but we can assign any new value to the same pointer 
                        or
 * we can assign the another value to the same pointer address
 
 * Syntax:
        const int *ptr;
 
 *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    const int a = 9;                        //constant value assign to a
    const int b = 8;                        //constant value assign to b
    const int *ptr = &a;
   
    ptr=&b;                                 
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;
    cout<<"address of a is : "<<&a<<endl;
    cout<<"address of b is : "<<ptr<<endl;
    
    return 0;
}
