/***************************************************************************************************
In this code, I used abstract class

Abstract class - a class which contains pure virtual func i.e. virtual fucntion() = 0;

virtual function equal to zero is konwn as pure virtual function

1.there were no object creation for abstract class.

****************************************************************************************************/



#include<iostream>
using namespace std;

class Database                                              //main class
{
    virtual void display() = 0;                             //pure virtual function
};

class Manager : public Database                             //derived class
{
    public:
    void display()                                          //declartion of function
    {
        cout<<"Manager class \n";
    }
};

class Accoutant : public Database                           //derived class
{
    public:
    void display()
    {
        cout<<"Accoutant class \n";                         //declartion of function
    }
};

class Customer : public Database                                //derived class
{
    public:
    void display()
    {
        cout<<"Customer class \n";                          //declartion of function
    }
};

int main()
{
    Manager m;                                          //object creation
    Accoutant a;
    Customer c;
    
    m.display();                                        // calling function
    a.display();
    c.display();
    
    return 0;
}
