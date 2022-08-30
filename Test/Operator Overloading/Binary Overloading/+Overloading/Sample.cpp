#include<iostream>
using namespace std ;

class Base                                                  //class
{
    private:
    int a;
    
    public:
    
    Base(int num)                                           //base constructor
    {
        a=num;
    }
    
    void operator +(Base b2)                            //operator overloading
    {
        cout<<"a : "<<a<<endl;
        cout<<"b2.a : "<<b2.a<<endl;
        cout<<"Addition : "<<(a+b2.a)<<endl;
    }
};

int main()
{   
    Base b1(16),b2(4);                                      //constructor calling
    b1+b2;                                                  //object addition
    
    return 0;
}
