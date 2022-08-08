/*
here in this code hybrid inheritance grand_f <- father || father,mother <- son
while calling the function there is single object for the every function call

****** following the way for calling function ******
------ojbect_name.class_name::function_name();-------
*/

#include<iostream>
using namespace std;

class father
{
    public:
    void fun()
    {
        cout<<"I am Head of the family\n";
    }
};

class son : public father
{
    public:
    void fun()
    {
        cout<<"I am Son \n";
    }
};

class daughter : public father
{
    public:
    void fun()
    {
        cout<<"I am daughter \n";
    }
};

class S_Grand_son : public son
{
    public:
    void fun()
    {
        cout<<"i am Son of son \n";
    }
};

class S_Grand_daughter : public son
{
    public:
    void fun()
    {
        cout<<"I am daughter of son\n";
    }
    
};

class D_Grand_son : public daughter
{
    public:
    void fun()
    {
        cout<<"I am son of daughter\n";
    }
};

class D_Grand_daughter : public daughter
{
    public:
    void fun()
    {
        cout<<"I am daughter of daughter\n";
    }
};


int main()
{
    D_Grand_daughter DG;
    D_Grand_son DS;
    S_Grand_daughter SD;
    S_Grand_son SS;
    DG.fun();
    DG.daughter::fun();
    DG.father::fun();
    
    SS.fun();
    SS.son::fun();
    SS.father::fun();
    
    DS.fun();
    DS.daughter::fun();
    DS.father::fun();
   
    return 0;
}
