/**************************************************************************************
 * ------------------- Template Class & fucntion Outside the class--------------------
 * Note:
 * 1. When we defining fucntion, constructor outside the class, we have to again write that template statement above the defination
 * 
***************************************************************************************/

#include<iostream>
using namespace std;

template<class T>
class Calci
{
    private:
    T a,b;

    public:
    Calci(T m, T n);
    void add();
    void sub();
    void mul();
};

template<class T>
Calci<T> :: Calci(T m,T n)
{
    a=m;
    b=n;
}

template<class T>
void Calci<T> ::add()
{
    cout<<"Addition is : "<<a+b<<endl;
}

template<class T>
void Calci<T> :: sub()
{
    cout<<"Substraction is : "<<a-b<<endl;
}

template<class T>
void Calci<T> :: mul()
{
    cout<<"Multiplcation is : "<<a*b<<endl;
}

int main()
{
    Calci<int> c(4,1);
    c.add();
    c.sub();
    c.mul();
    return 0;
}
