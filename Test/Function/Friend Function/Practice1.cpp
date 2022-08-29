#include<iostream>
using namespace std;

class Base
{
    int x,y;
    public:
    
    void setdata(int p,int q)
    {
        x=p;
        y=q;
    }
    
    void diplay()
    {
        cout<<"Value of X and Y is :"<<x<<" "<<y<<endl;
    }
    friend void COMPLEX (Base  );
};

void COMPLEX (Base b)
{
    cout<<"Summation is: "<<b.x+b.y;
}
int main()
{
    Base b;
    b.setdata(5,6);
    b.diplay();
    
    COMPLEX(b);
}
