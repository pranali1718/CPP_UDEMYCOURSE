//when data variables are private ,calling them by using public variables which are define to be public.//

#include<iostream>
using namespace std;

class employee
{
    private:
    int age;
    int year;
    
    public:
    int b,a;
    employee()
    {
        age=30;
        year=2002;
        a = age;
        b = year;
    }
};
int main()
{
    employee r;
    cout<<"age:"<<r.a<<" \n"<<"year:"<<r.b;
}


//when data variables are private ,calling them by using creating function//

#include<iostream>
using namespace std;

class employee
{
    private:
    int age;
    int year;
    int b,a;
    
    public:
   
    employee()
    {
        age=30;
        year=2002;
        a = age;
        b = year;
    }
    void dis()
    {
        cout<<"age : "<<a<<"\n"<<"year: "<<b;
    }
};
int main()
{
    employee r;
    r.dis();
}
