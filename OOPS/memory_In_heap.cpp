#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle r1;               //object creation
    Rectangle *p;               //declare pointer
    p=&r1;                      //stored the address of an object
   // cout<<&r1<<endl;
//      cout<<p<<endl;
    p=new Rectangle;            //  cretaed memepry in heap
    p->length=5;                
    p->breadth=5;
    cout<<p->area();    
    return 0;
}
