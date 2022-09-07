#include<iostream>
using namespace std;

inline int fun(int x,int y)
{
    return x>y ? x : y;
}

int main()
{
    cout<<fun(1,2);
}
