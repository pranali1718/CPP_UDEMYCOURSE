#include<iostream>
using namespace std;

class Base
{
    private:
    int x, y;
    
    public:
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void getdata()
    {
        cout<<"Value of X and Y before Overloading : "<<x<<" "<<y<<endl;
    }
    
    void operator -()
    {
        x=-x;
        y=-y;
    }
    friend void function(Base b);
};


void function(Base b)
{
    cout<<"Value of X and Y after Overloading : "<<b.x<<" "<<b.y<<endl;
    cout<<"Multiplication of x and y is : "<<b.x*b.y;
}
int main()
{
    Base b;
    b.setdata(6,4);
    b.getdata();
    
    -b;
    function(b);
    
}
