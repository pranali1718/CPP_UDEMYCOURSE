/**********************************************************************************************
 * Addressess
 * 1) here p is an object, and the object has it's own address
 * 2)ptr is pointer and it also has it's own address
 * 3)ptr pointer points to an address
 * 
***********************************************************************************************/

#include<iostream>
#include<memory>

using namespace std;

void fun()
{
    cout<<"-----------------------Unique Pointer------------------------------"<<endl<<endl;
    unique_ptr<int> p(new int(20));

    int *ptr = p.get();

    cout<<"Unique PTR : "<<&p<<endl;
    cout<<"*ptr : "<<*ptr<<endl;
    cout<<"ptr : "<<ptr<<endl;
    cout<<"&ptr : "<<&ptr<<endl;
}

int main()
{
    fun();
    cout<<"---------------------------End-----------------------------"<<endl<<endl;
    return 0;
}
