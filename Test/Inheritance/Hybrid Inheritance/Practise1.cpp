/*
here in this code hybrid inheritance grand_f <- father || father,mother <- son
while calling the function there is single object for the every function call

****** following the way for calling function ******
------ojbect_name.class_name::function_name();-------
*/

#include<iostream>
using namespace std;

class grand_f
{
    public:
    void fun()
    {
        cout<<"I am Grandfather\n";
    }
};

class father:public grand_f
{
    public:
    void fun()
    {
        cout<<"I am Father\n";
    }
};

class mother
{
    public:
    void fun()
    {
        cout<<"I am mother\n";
    }
};
class son: public father,public mother
{
    public:
    void fun()
    {
        cout<<"I am Son\n";
    }
};

int main()
{
    son s;
    s.grand_f::fun();
    s.fun();
    s.mother::fun();
    s.father::fun();
   
    return 0;
}                                             
