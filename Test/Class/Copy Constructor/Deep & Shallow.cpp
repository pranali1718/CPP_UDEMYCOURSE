#include<iostream>
using namespace std;


class Base
{
    int x,y,*z;
    public :
    void function(int a,int b,int c)
    {
        z=new int;
        x=a;
        y=b;
        *z=c;
    }
    
    void Display()
    {
        cout<<"Value of X and Y is "<<x<<" & "<<y<<" & "<<*z<<endl;
    }
};
int main()
{
    Base b1,b2;
    b1.function(3,9,8);
    b1.Display();
    
    b2=b1;
    b2.Display();
    return 0;
}
