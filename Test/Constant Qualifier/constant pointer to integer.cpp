/******************************************************************************
 * Constant Qualifier-(constant pointer to integer )
 * use "const" keyword 
 * the value throught the program cant get changed
 * pointe is constant
 * once it pointer point to some data it cant able to assign the another value to smae pointer 
 * Syntax:
       int *const ptr;
 
 *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a = 9;                              //value assign to a
    const int b = 8;                        //constant value assign to b
    int *const ptr =&a;
   
    *ptr=a;                                
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;
    cout<<"address of a is : "<<ptr<<endl;
    
    
    return 0;
}
