#include<iostream>
using namespace std ;



class Base                                                  //class
{
    private:
    int a,b;
    
    public:
    
    Base(int num,int num1)                                           //base constructor
    {
        a=num;
        b=num1;
    }
    
    void operator +(Base b2)                            //operator overloading
    {
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b2.a is : "<<b2.a<<endl;
        cout<<"value of b is : "<<b<<endl;
        cout<<"value of b2.b is : "<<b2.b<<endl;
        cout<<"SUM : "<<a+b2.a<<endl;
        cout<<"SUM : "<<b+b2.b;
    }
};

int main()
{   
    Base b1(1,2),b2(2,3);                                           //constructor calling
    b1+b2;
    return 0;
}
