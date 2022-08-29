#include <iostream>
using namespace std;

class Base
{
    float x,y,z;
    public:
    
    void setdata(float a,float b,float c)
    {
        x=a;
        y=b;
        z=c;
    }
    
    void dispaly()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    
    void operator ++()
    {
        x=++x;
        y=++y;
        z=++z;
    }
};
int main()
{
    Base b;
    b.setdata(4.2,-9.1,-8.1);
    b.dispaly();
    
    ++b;
    b.dispaly();
    
    return 0;
}
