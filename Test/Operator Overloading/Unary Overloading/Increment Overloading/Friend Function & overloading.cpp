#include<iostream>
using namespace std;

class One
{
    private:
    int x,y;
    public:
    
    void set_value(int p,int q)
    {
        x=p;
        y=q;
    }
    void display()
    {
        cout<<"Values of X & Y in Class One is  :"<<x<<" "<<y<<endl;
    }
    
    friend void function(One);
};

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
        cout<<"Values of X & Y in Class Two is  :"<<x1<<" "<<y1<<endl;
    }
   friend void function_1(Two);
   
    void operator ++()
    {
        ++x1;
        ++y1;
    }
};

void function(One o)
{
    cout<<o.x<< " " <<o.y<<endl;
}

void function_1(Two t)
{
    cout<<t.x1<< " " <<t.y1<<endl;
}

int main()
{
    One o;
    Two t;
    o.set_value(3,4);
    o.display();
    t.set_value(1,1);
    t.display();
    
    function(o);
    function_1(t);
    
    ++t;
    cout<<"After Overloading in class Two "<<endl;
    t.display();
    return 0;
}
