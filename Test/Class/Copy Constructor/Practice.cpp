/******************************************************************************
                           
*******************************************************************************/

#include <iostream>
using namespace std;

class Base
{
    private:
    int a,b;
    
    public:
        Base(int x,int y)                                               //define & declare param constructor
        {
            a=x;
            b=y;
        }
        
        Base(Base &obj)                                                 //define & declare copy constructor
        {
            a=obj.a;
            b=obj.b;
        }
        void display()                                                  //display values
        {
            cout<<"Values of A & B is :"<<a<<" "<<b<<endl;
        }
};

int main()
{   
    Base b1(10,20),b2(b1);
    b1.display();                                                   //param constructor call
    
    cout<<"COPY CONSTRUCTOR CALL "<<endl;                               
    b2.display();                                                   //copy constructor call
    
    return 0;
}
