/*
here in this code multilevel inheritance grand_f <- father || father <- son
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

class son: public father
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
    s.father::fun();
   
    return 0;
}

/*------------------------------------------------------------------------------------------------------------------------*/

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

class son: public father
{
    public:
    void fun()
    {
        cout<<"I am Son\n";
    }
};

int main()
{
    grand_f g;
    father f;
    son s,s1;
    g.fun();
    f.fun();
    s.fun();
   
    return 0;
}

/*--------------------------------------------------------------------------------------------------*/

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
    void fun1()
    {
        cout<<"I am Father\n";
    }
};

class son: public father
{
    public:
    void fun2()
    {
        cout<<"I am Son\n";
    }
};

int main()
{
   // grand_f g;
    //father f;
    son s,s1;
    s.fun();
    s.fun1();
    s.fun2();
   
    return 0;
}


/*-----------------------------------------------------------------------------------------------------------*/
