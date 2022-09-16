/******************************************************************************
                        Template Function
*******************************************************************************/

#include <iostream>
using namespace std;

template<class T>
void add(T a,T b)
{
    cout<<"Addition is : "<<a+b;
    
}

int main()
{
    add(2,3);
    cout<<endl;
    add(2.2,2.2);
}
