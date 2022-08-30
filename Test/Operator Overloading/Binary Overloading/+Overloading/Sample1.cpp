#include<iostream>
using namespace std ;



class Base
{
    private:
    int a;
    
    public:
    
    Base(int num)
    {
        a=num;
    }
    
    Base operator +(Base b2)
    {
        Base b3(0);
        cout<<"1st Value is : "<<a<<endl;
        cout<<"2nd Value is : "<<b2.a<<endl;
        b3.a=a+b2.a;
        return b3;
    }
    
    void disp()
    {
        cout<<"SUM :"<<a<<endl;
    }
};
int main()
{
    Base b1(10),b2(1);
    Base sum(0);
    sum = b1+b2;
    sum.disp();
    return 0;
}
