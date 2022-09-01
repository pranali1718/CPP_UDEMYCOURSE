#include<iostream>
using namespace std;

class Base
{
    int a,b;
    
    public:
    
    Base()
    {
        a=0;
        b=0;
    }
    
    Base(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"\nVALUES : A & B IS :"<<a<<" "<<b;
    }
};

int main()
{
    Base b1,b2(10,20);
    b1.display();
    b2.display();
}
