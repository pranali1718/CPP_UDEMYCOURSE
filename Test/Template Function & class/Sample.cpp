/******************************************************************************
                    Template Function
1.accept all the user define data types as an argument
2.
*******************************************************************************/
#include <iostream>
using namespace std;

template<class T>
T Maximum(T a, T b)
{
    return a>b ?a:b;
}
int main()
{
    cout<<Maximum(3,5);
    return 0;
}

