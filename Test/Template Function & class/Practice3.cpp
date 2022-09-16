/******************************************************************************
 * Template Function (multiple type argument)
 * T1 is int type
 * T2 is float type
*******************************************************************************/

#include <iostream>
using namespace std;

template<class T1, class T2>
void add(T1 a,T2 b)
{
    cout<<"Addition is : "<<a+b;
}

int main()
{
    add(2,5.9);
}
