/*********************************************************************************************
 here both kind of construcor are being called
 
 1.implicit
        a.regular call
        b.class_name obj(parameters);
        
 2.explicit
        a.class_name obj=class_name(parameters)
 
 ********************************************************************************************/

#include<iostream>
using namespace std;

class Base
{
    int a,b;
    
    public:
    
    Base()
    {
        a=0;
        b=0;
    }
    
    Base(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"\nVALUES : A & B IS :"<<a<<" "<<b;
    }
};

int main()
{
    Base b1;
    Base b3(100,200);                                           //implicit call
    Base b2 = Base(10,20);                                      // explicit call of constructor
    b1.display();
    b2.display();
    b3.display();
}
