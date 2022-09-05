/***************************************************************************************************
In this code, I used abstract class

Abstract class - a class which contains pure virtual func i.e. virtual fucntion() = 0;

virtual function equal to zero is konwn as pure virtual function

1.there were no object creation for abstract class.
2.we can create pointer of abstract class
    while creating pointer of abstract class ,make sure your virtual function is public only     


****************************************************************************************************/



#include<iostream>
using namespace std;

class Database                                              //main class
{
    public:
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
    Database *ptr;
    
    Manager m;                                          //object creation
    Accoutant a;
    Customer c;
    ptr=&m;
    ptr->display();
    m.display();                                        // calling function
    a.display();
    c.display();
    
    return 0;
}
