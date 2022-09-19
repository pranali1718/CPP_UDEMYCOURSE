/******************************************************************************
 * Constant Qualifier-(constant function )
 * function only reads the vlaue not going to modify it 
 * Syntax:
       void fun_name() const;
 
 *******************************************************************************/

#include <iostream>
using namespace std;

class demo
{
    public:
    
    int x=10;
    int y=20;
    
    void display() const
    {
        x++;
        cout<<"value of x and  y  is :"<<x<<" & "<<y;
    }
};

int main()
{
    demo d;
    d.display();
}
