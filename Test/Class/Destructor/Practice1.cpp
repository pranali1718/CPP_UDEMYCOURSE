/******************************************************************************
 * destructor
 * 
*******************************************************************************/

#include <iostream>
using namespace std;

class Demo
{
    public:
    int *a;
    Demo()
    {
        a=new int[10];
        cout<<"I am Demo Constuctor\n";
    }
    
    ~Demo()
    {
        delete []a;
        cout<<"I am Demo Destrcutor\n";
    }
    
};

void fun()
{
    Demo *p = new Demo();
    delete p;
}

int main()
{
    fun();
    return 0;
}
