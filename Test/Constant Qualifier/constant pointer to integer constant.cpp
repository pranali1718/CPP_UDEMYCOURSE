/******************************************************************************
 * Constant Qualifier-(constant pointer to integer contant )
 * use "const" keyword 
 * the value throught the program cant get changed
 * nothe pointer and data get locked
 * we cant increamnt the data or also cant increment the value too
 * Syntax:
       const int *const ptr;
 
 *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a = 9;                              //value assign to a
    const int b = 8;                        //constant value assign to b
    const int *const ptr =&a;
  
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;
    cout<<"address of a is : "<<ptr<<endl;
    
    
    return 0;
}
