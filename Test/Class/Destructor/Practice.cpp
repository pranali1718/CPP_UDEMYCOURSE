/******************************************************************************
 * destructor
 * 
*******************************************************************************/

#include <iostream>
using namespace std;

class Demo
{
    public:
    
    Demo()
    {
        cout<<"I am Demo Constuctor\n";
    }
    
    ~Demo()
    {
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
