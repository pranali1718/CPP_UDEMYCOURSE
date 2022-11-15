/******************************************************************************
 * Template class
 * 
 * Syntax
 *      template<typename T>
        class class_name
        {
            //body;
        };
        
 * while using class template compiler cant deduce the parameter type ,we have to tell the compiler which data type we will using.
 * When we defining the function outsiude the class we have ti again write template statement above the defination
 * 
*******************************************************************************/

#include <iostream>
using namespace std;

template<typename T>                        //template class
class Math
{
    T num1,num2;
    
    public:     
    Math(T a,T b)                           //parameterised constructor
    {
        num1 = a;
        num2 = b;
    }
    
    void add();                             //declaring function
    void mul();
};

template<typename T>    
void Math<T> :: add()                       //defining function
{
    cout<<"Addition is : "<<num1+num2<<endl;
}

template<typename T>
void Math<T> :: mul()                        //defining function
{
    cout<<"Multiplication is : "<<num1*num2<<endl;
}

int main()
{
    Math<int> obj(10,20);                   //creating object
    obj.add();
    obj.mul();
    
    return 0;
}
