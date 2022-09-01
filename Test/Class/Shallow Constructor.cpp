/******************************************************************************
                                SHALLOW COPY constructor
                                
        in this code i used 2 varible i.e. int a, int* b;
        assign value to themby using param constructor
        then define & declare COPY constructor
        
        SYNTAX FOR CALLING:
            Base b2=b1;
            b2.display(); 
            
                or
            Base b1(10,20),b2(b1); 
             b2=b1;
        
*******************************************************************************/

#include <iostream>
using namespace std;

class Base
{
    private:
    int a,*b;
    
    public:
        Base(int x,int y)                                               //define & declare param constructor
        {
            a=x;
            b=new int;
            *b=y;
        }
        
        Base(Base &obj)                                                 //define & declare copy constructor
        {
            a=obj.a;
            b=obj.b;
        }
        void display()                                                  //display values
        {
            cout<<"Values of A & B is :"<<a<<" "<<*b<<endl;
        }
};

int main()
{   
    Base b1(10,20),b2(b1);
    b1.display();                                                   //param constructor call
    
    cout<<" Deep COPY CONSTRUCTOR CALL "<<endl; 
    b2=b1;
  //  Base b2=b1;
    b2.display();                                                   //deep copy constructor call
    
    return 0;
}
