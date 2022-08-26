/*In this code ,
I send fun1 , return x to the func 3 arguemnts

means return type of one function is sended to the argument of another function
*/

#include<iostream>
using namespace std;

int fun1(int x)
{
    cout<<"Fun1: value of  x is : ";
    return x;
}

void fun2()
{
    cout<<"fun2: I am Fun No arguemnts no return type\n";
}

void fun3(int x)
{
    cout<<"fun3: Value of x is :"<<x<<endl;
}

int fun4()
{
    cout<<"fun4: i am func with no argument return 0\n";
    return 0;
}

int main()
{
   int b=fun1(3);
   cout<<b;
    cout<<endl;
    fun2();
    fun3(b);
    fun4();
    
}
