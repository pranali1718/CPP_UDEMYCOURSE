
#include <iostream>

using namespace std;

class Two
{
    private:
    int x1,y1;
    
    public:
    void set_value(int p1,int q1)
    {
        x1=p1;
        y1=q1;
    }
    void display()
    {
        cout<<"Values of X & Y in Main class is  :"<<x1<<" "<<y1<<endl;
    }
    friend void function(Two);
};

void function(Two t)
{
    t.x1;
    t.y1;
    cout<<"Addition is : "<<t.x1+t.y1<<endl;
}


class derived : public Two
{
    private:
    
    int a,b;
    
    public:
    void ff(int u,int v)
    {
        a=u;
        b=v;
    }
    void fff()
    {
        cout<<"Value of A & B in Derived class is : "<<a<<" "<<b<<endl; 
    }
    friend void function_1(derived);
};

void function_1(derived t)
{
    t.a;
    t.b;
    cout<<"Addition is : "<<t.a+t.b<<endl;
}
int main()
{
    derived t;
    
    t.set_value(1,1);
    t.display();
    
    function(t);
    
    t.ff(9,0);
    t.fff();
    
    function_1(t);
    return 0;
}
