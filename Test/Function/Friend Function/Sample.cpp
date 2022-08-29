/*
SYNTAX:
    friend data_type function_name (class_name Object);
    
    1.use friend keyword
    2.dont need to use scope resoltuion operator
    3.declare it inside class but define it outside class
    4.use class_name and Object as an argument
    5.Friend fucntion use to access the private data memebers of the class
    
*/
#include <iostream>
using namespace std;

class Base                                                      //createe class
{
    private:                                                    //declare private datamember
    int sal=10;
    
    public:
    
    friend void fun(Base b);                                    //declare friend function
};

void fun(Base b)                                                //define friend function
{
    b.sal=b.sal+2000;
    cout<<b.sal;
    //return b.sal;
}

int main()                                                  //main method
{
   
    Base b;                                                     //create object
    cout<<"Increment is :";
    fun(b);                                                     //call friend function
    return 0;
}
