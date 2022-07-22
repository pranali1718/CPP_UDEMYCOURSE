/*in this code , I learn that when we call constructor everytime it call default constructor
****call child default constructor- it calls parent default first
****call child parameterized constructor-it call parent default first
****call child any of constructor but still it can't call the parent parameterized constructor
*/

#include<iostream>
using namespace std;

class Number
{
    int num_1=100;
    public:
    Number()                                        // default coonstructor
    {
        cout<<"Num1(default) :"<<num_1<<endl;
    }
    Number(int x)                                   //parameterized constructor
    {
        cout<<"Num2(parameterized) :"<<x<<endl;
    }
};

class Number_1 : public Number
{
    int num_4=500;
    public:
    Number_1()
    {
        cout<<"Num3 :"<<num_4<<endl;
    }
    Number_1(int y)
    {
        cout<<"Num5 :"<<y<<endl;
    }
    Number_1(int z,int b)
    {
        cout<<"Num6 :"<<z<<" "<<b<<endl;
    }
};

int main()
{
    Number n,n1(5);                                   //calling Parent constructor
    Number_1 p,p1(55),p2(75,89);                              //  calling child constructor
    return 0;
}
