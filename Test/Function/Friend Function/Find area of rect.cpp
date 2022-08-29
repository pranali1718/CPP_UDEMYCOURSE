/*code for find the area of rectangle using the friend function*/

#include<iostream>
using namespace std;

class rect
{
    private:
    int l,b;
    
    public:
    
    void setValue(int ,int);
    void getValue();
    friend void Function(rect r);
};

void rect :: setValue(int length,int breadth)
{
    l=length;
    b=breadth;
}

void rect :: getValue()
{
    cout<<"Lenght is : "<<l<<" "<<"breadth : "<<b<<endl; 
}

void Function(rect r)
{
    r.l;
    r.b;
    cout<<"AREA OF RECTANGLE IS : "<<r.l*r.b;
}
int main()
{
    rect r;
    r.setValue(3,4);
    r.getValue();
    Function(r);
    return  0;
}
