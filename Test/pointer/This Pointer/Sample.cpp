/*this pointer always points to global varible 
we use pointer function if and only if the function memeber and paramters of class both are same 

        this->global_varible = Local_variable
*/

#include<iostream>
using namespace std;

class Base
{
    public:
    int x=1, y=1;                                                       //global Varibales
   
    void fun(int x,int y)
    {
        cout<<"1st Function "<<this ->x<<" "<<this ->y<<endl;           
        this -> x=x+1;
        this -> y=y+2;
        cout<<"1st Function "<<x<<" "<<this ->y<<endl;
    }
    
    void fun1()
    {
        cout<<"2nd function "<<x<<" "<<y;
    }
}; 

int main()
{
    Base b;
    b.fun(2,3);
    b.fun1();
 
    return 0;
}
