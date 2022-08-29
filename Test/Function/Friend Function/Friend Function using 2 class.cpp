#include<iostream>
using namespace std;
class B;

class A
{
    private:
    int x;
    
    public:
    void Set_value(int a)
    {
        x=a;
    }
    friend void product(A,B);
};

class B
{
    private:
    int y;
    
    public:
    void Set_value(int b)
    {
        y=b;
    }
    friend void product(A,B);
};

void product(A a,B b)
{
    cout<<"X :"<<a.x<<" Y :"<<b.y<<endl;
    cout<<"Product :"<<a.x*b.y<<endl;
}


int main()
{
    A a;
    B b;
    a.Set_value(4);
    b.Set_value(5);
    
    product(a,b);
    
    return 0;
}
