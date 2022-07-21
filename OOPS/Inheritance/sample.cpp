#include <iostream>
using namespace std;

class Base
{
    int x=9;
    public:
    int z=x;
    void display()
    {
        cout<<"base classs\n"<<"x : "<<x;
    }
};

class Sub_base:public Base
{
    int y=z;
    public:
    void get()
    {
        cout<<"sub class \n"<<"z : "<<z<<endl<<"y : "<<y<<endl;
    }
};

int main()
{
    Sub_base s;
    s.get();
    s.display();
    return 0;
}
