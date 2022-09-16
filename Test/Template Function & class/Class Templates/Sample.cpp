/******************************************************************************
 * Template class
 * 1.when declaring function ouside the class with scope resolution
 syntax:
        template<class T>
        void Class_name<T> :: Fun_name();
        
 * 2. while calling in main method
 syntax:
        class_name<data_type>object;
    
 *******************************************************************************/

#include <iostream>
using namespace std;

template <class T>
class Base
{
    T a,b;
    
    public:
    Base(T x,T y)
    {
        a=x;
        b=y;
    }
    
    void Display()
    {
        cout<<"value of a & b is : "<<a<<" & "<<b<<endl;
    }
};
int main()
{
    Base<int> b(2,2);
    Base<double>b1(5.9,8.9);
    b.Display();
    b1.Display();
}
