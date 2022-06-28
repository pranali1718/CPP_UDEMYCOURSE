#include <iostream>
using namespace std;
template<class T>
T Max( T a ,T b)
{
    return a>b ? a : b;
}

int main()
{   
    int a,b;
    cout <<"Enter two Number :";
    cin>>a>>b;
    cout<<"max is:"<<Max(a,b);
    return 0;
}
