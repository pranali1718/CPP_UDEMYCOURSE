#include<iostream>
using namespace std;


int fun(int &a,int &b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter Values :";
    cin>>a>>b;
    int (*funcptr)(int & ,int &);
    funcptr=fun;
    cout<<funcptr(a,b);
    return 0;
}
