/*sample code*/

#include <iostream>
using namespace std;

class A                                                 //class 
{       
    public: 
    void display()                                      //no argument ,no return type function
    {
        cout<<"display"<<endl;
    }
    void show(int x)                                    //with argument ,no return type function
    {
        cout<<x;
    }   
    int fun(int x)                                      //with argument ,with return type function
    {
        return x;
    }
    int fun1()                                          //no argument , return type function
    {
        int p=3;
        return p;
    }
};

int main()
{
    A a;
    a.display();
    a.show(9);
    cout<<endl<< a.fun(3)<<endl;
    cout<< a.fun1();
    return 0;
}
