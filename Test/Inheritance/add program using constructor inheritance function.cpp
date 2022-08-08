#include <iostream>
using namespace std;

class base                                          //define class
{
    public:                                         //access modifier
    int x=8,y=4;
    
    base()                                          //definning constrctor
    {   
        cout<<"\nADD :"<<x+y;
    }
    
    int add()                                       //define a function
    {
        return x+y;                                 //returnning fun
    }
};

class derived : public base                         //derived class create
{
    public:
    
    derived()                                       //derived constrctor
    {
        cout<<"\nSUb : "<<x-y;
    }
    
    int sub()                                       //define fucntion
    {
        return x-y;
    }
};

int main()
{               
    derived b;                                         //object creation
    cout<<endl;
    cout<<"addition : "<<b.add();                       //base function call using object
    cout<<endl;
    cout<<"Substraction : "<<b.sub();                   //derived class function call
    return 0;
}
