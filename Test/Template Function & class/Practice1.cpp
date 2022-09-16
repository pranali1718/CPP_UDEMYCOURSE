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


---------------------------------------------------------------------
  /******************************************************************************
                        Template Function
*******************************************************************************/

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    T result = a+b;
    return result;
}

int main()
{
    int x;
    float y ;
    x = add(3,2);
    y = add(5.5,4.4);
    cout<<"Addition is :"<<x<<endl;
    cout<<"Addition is :"<<y<<endl;
    return 0;
}
