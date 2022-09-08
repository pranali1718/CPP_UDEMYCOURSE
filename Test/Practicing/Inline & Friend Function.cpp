/******************************************************************************
                        Inline Function
*******************************************************************************/
#include <iostream>
using namespace std;


class Base
{
    private:
    int x,y;
    
    public:
    void set_data(int a,int b)
    {
        x=a;
        y=b;
    }
    
    inline void get_data()                                      //inline Function
    {
        cout<<"Value of x and y is : "<<x<<" "<<y<<endl;
    }
    
    friend void addition(Base b);                               //friend function
};

void addition(Base b)
{
    cout<<"add is : "<<b.x+b.y;
}

class Derived : public Base
{
    public:
    
    Derived()
    {
        cout<<"Derived class\n";
    }
};

int main()
{
    Base b;
    Derived d;
    b.set_data(3,4);
    b.get_data();
    
    addition(b);
    
    return 0;
}
