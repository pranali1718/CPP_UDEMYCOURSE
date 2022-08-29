#include <iostream>
using namespace std;

class Base
{
    int x,y,z;
    public:
    
    void setdata(int a,int b,int c)
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
    b.setdata(4,-9,-8);
    b.dispaly();
    
    ++b;
    b.dispaly();
    
    return 0;
}
