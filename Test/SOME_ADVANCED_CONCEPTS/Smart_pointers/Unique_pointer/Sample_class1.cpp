/**********************************************************************
 * 1) must be use #include<memory>
 * 2) it is class template
       syntax:
            unique_ptr< class_name > ptr_name (new class_name(parameters));
 * 
 * 3) we can use dereferencing( * ) operator and arrow operator( -> ) on object of unique pointer
 * ********************************************************************/

#include<iostream>
#include<memory>

using namespace std;

class test
{
    int x;
    public:
    
    test(int a)
    {
        x=a;
    }

    int fun()
    {
        return x;
    }
};

int main()
{
    unique_ptr<test> obj (new test(10));
    cout<<"Value of x is : "<<obj -> fun()<<endl;

    unique_ptr <test> obj2;
    obj2 = move(obj);
    cout<<"obj 2 : "<<obj2->fun();
}
