/******************************************************************************
                            SHALLOW COPY
    here i used to do shllow copy code
    in this code,
    
    the data ofibject_1 is copied to object_2
    SYNTAX FOR CALLING:
        class_name obj2=obj1;
            or
        class_name ob2;
        ob2=ob1;
*******************************************************************************/

#include <iostream>
using namespace std;

class Base
{
    private:
    int a,b;
    
    public:
        void get_data(int x,int y)                                      //getting Values
        {
            a=x;
            b=y;
        }
        
        void display()                                                  //display values
        {
            cout<<"Values of A & B is :"<<a<<" "<<b<<endl;
        }
};

int main()
{   
    Base b1,b2;                                                            //object creation
    b1.get_data(10,20);
    b1.display();
    
    cout<<"Using Shallow Copy Constructor -"<<endl;                     //shallow copy calling
    b2=b1;
    b2.display();
    
   /* Base b2=b1;
    b2.display();*/
    return 0;
}
