#include<iostream>
using namespace std;

class Base
{
    int meter;
    public:
    
    Base()
    {
        meter=0;
    }
    void display()
    {
        cout<<"Meter : "<<meter;
    }
    
    friend void Fun(Base );
};

void Fun(Base d)
{
    d.meter=d.meter+5;
    cout<<endl<<"Meter is: "<<d.meter;
}

int main()
{
    Base d;
    d.display();
    
    Fun(d);
   // d.display();
    return 0;
}
