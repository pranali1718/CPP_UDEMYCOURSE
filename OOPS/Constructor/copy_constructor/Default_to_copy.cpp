//copy constructor build,using default constructor//

#include<iostream>
using namespace std;


class Number
{
    int a;
    public:
        Number()
        {
            cout<<"Default Constructor called!!!"<<endl;        
            a = 0;
        }

        Number(Number &obj)
        {
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a+1;
        }

        void display()
        {
            cout<<"The number for this object is "<< a <<endl;
        }
};
int main()
{
    Number x;                   //default constructoris call
   // Number z=x;
    
    x.display();                //default constructor display
    cout<<endl;
    Number z(x);                //copy constructor is call
    z.display();                //copy constructor display
    cout<<endl;

    return 0;
}


