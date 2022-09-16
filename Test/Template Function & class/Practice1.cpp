/******************************************************************************
                        Template Function
*******************************************************************************/

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter two Numbers : ";
    cin>>a>>b;
    cout<<"Addition is : "<<add(a,b);
    return 0;
}
