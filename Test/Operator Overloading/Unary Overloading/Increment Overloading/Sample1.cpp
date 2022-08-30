/******************************************************************************


*******************************************************************************/
#include <iostream>
using namespace std;

class Base                                              //class
{
    private:                                            //private data type
    int a,b;
    
    public:                                             
    void setValues(int,int);                            //setting function
    void getValues();                                   //getting values
    friend void function(Base);                         //friend function
    void operator ++();                                 //operator overlaoding
};

void Base :: setValues(int x,int y)                     
{
    a=x;                                                //setting values
    b=y;
}

void Base :: getValues()
{
    cout<<"Values of A & B is  : "<<a<<" "<<b<<endl;    //getting values
}

void function(Base b)
{
    cout<<"Values of A & B is : "<<b.a+1<<" "<<b.b+1<<endl;     //using friend function
}

void Base :: operator ++()
{   
    a=++a;                                                      //overlaod ++
    b=++b;  
}
int main()
{
    Base b;                                                     //creating object
    b.setValues(1,2);                                           //passing parameters
    b.getValues();                                              //printing values
    
    cout<<"After Using Friend Function "<<endl;
    function(b);                                                //calling friend fucntion 
    
    ++b;                                                        //overload
    cout<<"After Using Friend Function And Overloading(++) "<<endl;
    function(b);                                                
    
    return 0;
}
