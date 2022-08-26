#include <iostream>
using namespace std;

class Base
{
    int a,b;
    
    public:
    
    void fun(int ,int );
    void operator -( );
    void disp();
}; 

void Base::fun(int p,int q)
{
    a=p;
    b=q;
}

void Base::operator -()
{
    a=-a;
    b=-b;
}
void Base::disp()
{
    cout<<"Value of a and b is : "<<a<<" & "<<b;   
}

int main()
{
    Base b;
    b.fun(-64,5);
    b.disp();
    -b;
    cout<<endl;
    b.disp();
    return 0;
}
