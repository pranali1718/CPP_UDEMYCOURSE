#include <iostream>
using namespace std;

class base
{   
    public:
    void fun()
    {
        cout<<"Base\n";
    }
};

class derived :public base
{
    public:
    base b;
    void fun()
    {
        b.fun();
        cout<<"derived";
    }
};

int main()
{
    derived d;
    d.fun();
    //d.fun();
    return 0;
}
